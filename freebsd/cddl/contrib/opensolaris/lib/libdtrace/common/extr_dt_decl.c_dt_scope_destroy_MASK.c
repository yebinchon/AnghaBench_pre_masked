
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* ds_next; struct TYPE_5__* ds_ident; int ds_decl; } ;
typedef TYPE_1__ dt_scope_t ;
struct TYPE_6__ {TYPE_1__ pcb_dstack; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* VAR_0 ;

void
FUNC_2(dt_scope_t *VAR_1)
{
 dt_scope_t *VAR_2;

 for (; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  FUNC_0(VAR_1->ds_decl);
  FUNC_1(VAR_1->ds_ident);
  VAR_2 = VAR_1->ds_next;
  if (VAR_1 != &VAR_0->pcb_dstack)
   FUNC_1(VAR_1);
 }
}
