
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct adapter {int link_up; int link_speed; int hw; scalar_t__ sfp_probe; } ;
typedef int if_ctx_t ;


 int FUNC_0 (int ) ;
 struct adapter* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(if_ctx_t VAR_0, uint16_t VAR_1)
{
 struct adapter *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1 != 0)
  return;


 if (VAR_2->sfp_probe)
  if (!FUNC_3(VAR_0))
   return;

 FUNC_2(&VAR_2->hw, &VAR_2->link_speed,
     &VAR_2->link_up, 0);


 FUNC_0(VAR_0);

}
