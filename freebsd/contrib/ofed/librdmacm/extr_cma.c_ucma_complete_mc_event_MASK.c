
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cma_multicast {TYPE_1__* id_priv; int cond; int events_completed; } ;
struct TYPE_2__ {int mut; int cond; int events_completed; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cma_multicast *VAR_0)
{
 FUNC_1(&VAR_0->id_priv->mut);
 VAR_0->events_completed++;
 FUNC_0(&VAR_0->cond);
 VAR_0->id_priv->events_completed++;
 FUNC_0(&VAR_0->id_priv->cond);
 FUNC_2(&VAR_0->id_priv->mut);
}
