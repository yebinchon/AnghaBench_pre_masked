
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void const tlv_desc ;
struct sk_buff {scalar_t__ data; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void const*,int,int ) ;
 scalar_t__ FUNC_1 (void const*) ;
 int FUNC_2 (void const*,int ,int *,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_6 (int ) ;
 struct sk_buff* FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;

struct sk_buff *FUNC_9(const void *VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;
 struct tlv_desc *VAR_7;
 int VAR_8;

 if (!FUNC_0(VAR_4, VAR_5, VAR_2))
  return FUNC_7(VAR_1);

 VAR_6 = FUNC_6(FUNC_3(VAR_0));
 if (!VAR_6)
  return ((void*)0);

 VAR_7 = (struct tlv_desc *)VAR_6->data;

 VAR_8 = FUNC_8((char *)FUNC_1(VAR_4),
      (char *)FUNC_1(VAR_7), VAR_0);
 if (!VAR_8) {
  FUNC_4(VAR_6);
  return FUNC_7("link not found");
 }

 FUNC_5(VAR_6, FUNC_3(VAR_8));
 FUNC_2(VAR_7, VAR_3, ((void*)0), VAR_8);

 return VAR_6;
}
