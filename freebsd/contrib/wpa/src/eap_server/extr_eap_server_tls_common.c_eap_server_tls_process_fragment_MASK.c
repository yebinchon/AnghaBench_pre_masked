
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct eap_ssl_data {int * tls_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int *,int const*,size_t) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct eap_ssl_data *VAR_3,
        u8 VAR_4, u32 VAR_5,
        const u8 *VAR_6, size_t VAR_7)
{

 if (VAR_3->tls_in == ((void*)0) && !(VAR_4 & VAR_0)) {
  FUNC_0(VAR_1, "SSL: No Message Length field in a "
      "fragmented packet");
  return -1;
 }

 if (VAR_3->tls_in == ((void*)0)) {




  if (VAR_5 > 65536) {
   FUNC_0(VAR_2, "SSL: Too long TLS fragment (size"
       " over 64 kB)");
   return -1;
  }

  if (VAR_7 > VAR_5) {
   FUNC_0(VAR_2, "SSL: Too much data (%d bytes) in "
       "first fragment of frame (TLS Message "
       "Length %d bytes)",
       (int) VAR_7, (int) VAR_5);
   return -1;
  }

  VAR_3->tls_in = FUNC_1(VAR_5);
  if (VAR_3->tls_in == ((void*)0)) {
   FUNC_0(VAR_1, "SSL: No memory for message");
   return -1;
  }
  FUNC_2(VAR_3->tls_in, VAR_6, VAR_7);
  FUNC_0(VAR_1, "SSL: Received %lu bytes in first "
      "fragment, waiting for %lu bytes more",
      (unsigned long) VAR_7,
      (unsigned long) FUNC_3(VAR_3->tls_in));
 }

 return 0;
}
