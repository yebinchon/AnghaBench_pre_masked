
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,int ) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;

int FUNC_8(struct sk_buff *VAR_2)
{
 struct net *VAR_3 = FUNC_1(FUNC_4(VAR_2)->dev);
 int VAR_4;

 if (FUNC_5(VAR_2))
  return FUNC_7(VAR_2);

 if (VAR_2->ip_summed == VAR_0) {
  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4) {
   FUNC_0(VAR_3, VAR_1);
   FUNC_2(VAR_2);
   return VAR_4;
  }
 }

 return FUNC_6(VAR_2);
}
