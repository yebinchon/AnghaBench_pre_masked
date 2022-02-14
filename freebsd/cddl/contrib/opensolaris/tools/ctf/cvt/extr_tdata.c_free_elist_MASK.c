
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* t_emem; } ;
typedef TYPE_1__ tdesc_t ;
struct TYPE_6__ {struct TYPE_6__* el_name; struct TYPE_6__* el_next; } ;
typedef TYPE_2__ elist_t ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(tdesc_t *VAR_0)
{
 elist_t *VAR_1 = VAR_0->t_emem;
 elist_t *VAR_2;

 while (VAR_1) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->el_next;

  if (VAR_2->el_name)
   FUNC_0(VAR_2->el_name);
  FUNC_0(VAR_2);
 }
}
