
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {TYPE_1__* dev; } ;
struct TYPE_2__ {scalar_t__ mtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;

int FUNC_7(struct sk_buff *VAR_1)
{

 if (FUNC_4(VAR_1) > VAR_1->dev->mtu && !FUNC_5(VAR_1))
  FUNC_2(VAR_1);
 else {

  if (FUNC_3(VAR_1))
   FUNC_2(VAR_1);
  else {
   FUNC_6(VAR_1, VAR_0);
   FUNC_0(VAR_1);
   FUNC_1(VAR_1);
  }
 }

 return 0;
}
