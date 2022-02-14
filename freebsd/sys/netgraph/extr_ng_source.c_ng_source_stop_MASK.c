
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* sc_p ;
struct TYPE_7__ {int nd_flags; } ;
struct TYPE_5__ {int startTime; int elapsedTime; int endTime; } ;
struct TYPE_6__ {TYPE_1__ stats; TYPE_3__* node; int intr_ch; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(sc_p VAR_1)
{
 FUNC_1(&VAR_1->intr_ch, VAR_1->node);
 VAR_1->node->nd_flags &= ~VAR_0;
 FUNC_0(&VAR_1->stats.endTime);
 VAR_1->stats.elapsedTime = VAR_1->stats.endTime;
 FUNC_2(&VAR_1->stats.elapsedTime, &VAR_1->stats.startTime);
}
