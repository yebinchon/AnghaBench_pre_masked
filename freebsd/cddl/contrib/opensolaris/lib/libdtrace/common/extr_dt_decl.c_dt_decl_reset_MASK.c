
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* ds_decl; } ;
typedef TYPE_1__ dt_scope_t ;
struct TYPE_6__ {struct TYPE_6__* dd_next; } ;
typedef TYPE_2__ dt_decl_t ;
struct TYPE_7__ {TYPE_1__ pcb_dstack; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* VAR_0 ;

void
FUNC_1(void)
{
 dt_scope_t *VAR_1 = &VAR_0->pcb_dstack;
 dt_decl_t *VAR_2 = VAR_1->ds_decl;

 while (VAR_2->dd_next != ((void*)0)) {
  VAR_1->ds_decl = VAR_2->dd_next;
  VAR_2->dd_next = ((void*)0);
  FUNC_0(VAR_2);
  VAR_2 = VAR_1->ds_decl;
 }
}
