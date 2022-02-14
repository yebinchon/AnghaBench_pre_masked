
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_connection {int invalid_hb_used; } ;
typedef int SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int const*) ;
 int FUNC_1 (struct tls_connection*,int const*,int const*) ;
 int FUNC_2 (int *,struct tls_connection*,int const*,int const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,void const*,size_t) ;
 int FUNC_5 (int ,char*,void const*,size_t) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void FUNC_7(int VAR_3, int VAR_4, int VAR_5,
         const void *VAR_6, size_t VAR_7, SSL *VAR_8, void *VAR_9)
{
 struct tls_connection *VAR_10 = VAR_9;
 const u8 *VAR_11 = VAR_6;

 if (VAR_3 == 2) {
  FUNC_6(VAR_0,
      "OpenSSL: session ver=0x%x content_type=%d",
      VAR_4, VAR_5);
  FUNC_5(VAR_2, "OpenSSL: Data", VAR_6, VAR_7);
  return;
 }

 FUNC_6(VAR_0, "OpenSSL: %s ver=0x%x content_type=%d (%s/%s)",
     VAR_3 ? "TX" : "RX", VAR_4, VAR_5,
     FUNC_3(VAR_5),
     FUNC_4(VAR_5, VAR_6, VAR_7));
 FUNC_5(VAR_2, "OpenSSL: Message", VAR_6, VAR_7);
 if (VAR_5 == 24 && VAR_7 >= 3 && VAR_11[0] == 1) {
  size_t VAR_12 = FUNC_0(VAR_11 + 1);
  if (VAR_12 + 3 > VAR_7) {
   FUNC_6(VAR_1, "OpenSSL: Heartbeat attack detected");
   VAR_10->invalid_hb_used = 1;
  }
 }
}
