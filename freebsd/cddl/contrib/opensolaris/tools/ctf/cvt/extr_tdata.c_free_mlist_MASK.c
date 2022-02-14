
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* t_members; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_6__ {struct TYPE_6__* ml_name; struct TYPE_6__* ml_next; } ;
typedef TYPE_2__ mlist_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(tdesc_t *VAR_0)
{
 mlist_t *VAR_1 = VAR_0->t_members;
 mlist_t *VAR_2;

 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->ml_next;

  if (VAR_2->ml_name)
   FUNC_0(VAR_2->ml_name);
  FUNC_0(VAR_2);
 }
}
