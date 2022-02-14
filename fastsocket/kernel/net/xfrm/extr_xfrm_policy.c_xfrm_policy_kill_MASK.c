
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dead; } ;
struct xfrm_policy {int timer; int genid; TYPE_1__ walk; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct xfrm_policy*) ;

__attribute__((used)) static void FUNC_3(struct xfrm_policy *VAR_0)
{
 VAR_0->walk.dead = 1;

 FUNC_0(&VAR_0->genid);

 if (FUNC_1(&VAR_0->timer))
  FUNC_2(VAR_0);

 FUNC_2(VAR_0);
}
