
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct net_device {scalar_t__ operstate; } const net_device ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct net_device const*) ;
 int FUNC_2 (struct net_device const*) ;
 int FUNC_3 (struct net_device const*) ;
 int FUNC_4 (struct net_device const*) ;

void FUNC_5(const struct net_device *VAR_1,
     struct net_device *VAR_2)
{
 if (VAR_1->operstate == VAR_0)
  FUNC_4(VAR_2);
 else
  FUNC_3(VAR_2);

 if (FUNC_1(VAR_1)) {
  if (!FUNC_1(VAR_2))
   FUNC_2(VAR_2);
 } else {
  if (FUNC_1(VAR_2))
   FUNC_0(VAR_2);
 }
}
