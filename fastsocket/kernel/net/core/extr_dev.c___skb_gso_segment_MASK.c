
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int mac_offset; } ;


 struct sk_buff* FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int ) ;

struct sk_buff *FUNC_11(struct sk_buff *VAR_1,
      int VAR_2, bool VAR_3)
{
 if (FUNC_10(FUNC_6(VAR_1, VAR_3))) {
  int VAR_4;

  FUNC_9(VAR_1);

  if (FUNC_3(VAR_1) &&
      (VAR_4 = FUNC_2(VAR_1, 0, 0, VAR_0)))
   return FUNC_0(VAR_4);
 }

 FUNC_1(VAR_1)->mac_offset = FUNC_4(VAR_1);
 FUNC_7(VAR_1);
 FUNC_8(VAR_1);

 return FUNC_5(VAR_1, VAR_2);
}
