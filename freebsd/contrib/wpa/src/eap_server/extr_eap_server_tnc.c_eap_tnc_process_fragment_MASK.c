
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct eap_tnc_data {int * in_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*,size_t) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct eap_tnc_data *VAR_2,
        u8 VAR_3, u32 VAR_4,
        const u8 *VAR_5, size_t VAR_6)
{

 if (VAR_2->in_buf == ((void*)0) && !(VAR_3 & VAR_0)) {
  FUNC_0(VAR_1, "EAP-TNC: No Message Length field in a "
      "fragmented packet");
  return -1;
 }

 if (VAR_2->in_buf == ((void*)0)) {

  VAR_2->in_buf = FUNC_1(VAR_4);
  if (VAR_2->in_buf == ((void*)0)) {
   FUNC_0(VAR_1, "EAP-TNC: No memory for "
       "message");
   return -1;
  }
  FUNC_2(VAR_2->in_buf, VAR_5, VAR_6);
  FUNC_0(VAR_1, "EAP-TNC: Received %lu bytes in first "
      "fragment, waiting for %lu bytes more",
      (unsigned long) VAR_6,
      (unsigned long) FUNC_3(VAR_2->in_buf));
 }

 return 0;
}
