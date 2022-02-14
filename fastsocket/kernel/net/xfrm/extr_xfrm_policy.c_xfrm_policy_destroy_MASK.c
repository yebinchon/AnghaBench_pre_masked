
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dead; } ;
struct xfrm_policy {int security; int timer; TYPE_1__ walk; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct xfrm_policy*) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct xfrm_policy *VAR_0)
{
 FUNC_1(!VAR_0->walk.dead);

 if (FUNC_2(&VAR_0->timer))
  FUNC_0();

 FUNC_4(VAR_0->security);
 FUNC_3(VAR_0);
}
