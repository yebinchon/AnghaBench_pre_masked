
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct eap_wsc_data {int in_op_code; int * in_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int const*,size_t) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct eap_wsc_data *VAR_2,
        u8 VAR_3, u8 VAR_4, u16 VAR_5,
        const u8 *VAR_6, size_t VAR_7)
{

 if (VAR_2->in_buf == ((void*)0) && !(VAR_3 & VAR_1)) {
  FUNC_0(VAR_0, "EAP-WSC: No Message Length "
      "field in a fragmented packet");
  return -1;
 }

 if (VAR_2->in_buf == ((void*)0)) {

  VAR_2->in_buf = FUNC_1(VAR_5);
  if (VAR_2->in_buf == ((void*)0)) {
   FUNC_0(VAR_0, "EAP-WSC: No memory for "
       "message");
   return -1;
  }
  VAR_2->in_op_code = VAR_4;
  FUNC_2(VAR_2->in_buf, VAR_6, VAR_7);
  FUNC_0(VAR_0, "EAP-WSC: Received %lu bytes in "
      "first fragment, waiting for %lu bytes more",
      (unsigned long) VAR_7,
      (unsigned long) FUNC_3(VAR_2->in_buf));
 }

 return 0;
}
