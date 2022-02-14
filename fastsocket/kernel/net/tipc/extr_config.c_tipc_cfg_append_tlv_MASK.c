
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv_desc {void* tlv_len; void* tlv_type; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct tlv_desc*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ,void*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;

int FUNC_9(struct sk_buff *VAR_0, int VAR_1,
   void *VAR_2, int VAR_3)
{
 struct tlv_desc *VAR_4 = (struct tlv_desc *)FUNC_7(VAR_0);
 int VAR_5 = FUNC_2(VAR_3);

 if (FUNC_8(VAR_0) < VAR_5) {
  FUNC_3("tipc_cfg_append_tlv unable to append TLV\n");
  return 0;
 }
 FUNC_6(VAR_0, VAR_5);
 VAR_4->tlv_type = FUNC_4(VAR_1);
 VAR_4->tlv_len = FUNC_4(FUNC_1(VAR_3));
 if (VAR_3 && VAR_2)
  FUNC_5(FUNC_0(VAR_4), VAR_2, VAR_3);
 return 1;
}
