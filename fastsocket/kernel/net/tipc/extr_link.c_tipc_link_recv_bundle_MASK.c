
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*) ;

void FUNC_9(struct sk_buff *VAR_1)
{
 u32 VAR_2 = FUNC_5(FUNC_3(VAR_1));
 u32 VAR_3 = VAR_0;
 struct sk_buff *VAR_4;

 FUNC_4(FUNC_3(VAR_1), "<BNDL<: ");
 while (VAR_2--) {
  VAR_4 = FUNC_2(VAR_1, VAR_3);
  if (VAR_4 == ((void*)0)) {
   FUNC_8("Link unable to unbundle message(s)\n");
   break;
  }
  VAR_3 += FUNC_0(FUNC_6(FUNC_3(VAR_4)));
  FUNC_4(FUNC_3(VAR_4), "     /");
  FUNC_7(VAR_4);
 }
 FUNC_1(VAR_1);
}
