
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct edge {int edom; TYPE_3__* succ; int id; } ;
struct TYPE_9__ {int edgewords; } ;
typedef TYPE_4__ opt_state_t ;
struct TYPE_7__ {int edom; } ;
struct TYPE_6__ {int edom; } ;
struct TYPE_8__ {TYPE_2__ ef; TYPE_1__ et; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(opt_state_t *VAR_0, struct edge *VAR_1)
{
 FUNC_0(VAR_1->edom, VAR_1->id);
 if (VAR_1->succ) {
  FUNC_1(VAR_1->succ->et.edom, VAR_1->edom, VAR_0->edgewords);
  FUNC_1(VAR_1->succ->ef.edom, VAR_1->edom, VAR_0->edgewords);
 }
}
