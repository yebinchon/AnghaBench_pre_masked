
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ priv; int Result; TYPE_4__* target; } ;
struct TYPE_11__ {TYPE_1__* transform; } ;
struct TYPE_12__ {TYPE_2__ array; } ;
struct TYPE_13__ {TYPE_3__ u; int type; } ;
struct TYPE_10__ {TYPE_4__* target; } ;
typedef TYPE_4__* PVDEV ;
typedef TYPE_5__* PCOMMAND ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_4(PCOMMAND VAR_1)
{
 PVDEV VAR_2 = VAR_1->target;

 if (FUNC_1(VAR_2->type) && VAR_2->u.array.transform && VAR_2!=VAR_2->u.array.transform->target) {
  VAR_2 = VAR_2->u.array.transform->target;
  FUNC_0(VAR_2);
  VAR_1->target = VAR_2;
  VAR_1->Result = VAR_0;
  FUNC_2(VAR_1);
  return;
 }

 *(int *)VAR_1->priv = 1;
 FUNC_3(VAR_1);
}
