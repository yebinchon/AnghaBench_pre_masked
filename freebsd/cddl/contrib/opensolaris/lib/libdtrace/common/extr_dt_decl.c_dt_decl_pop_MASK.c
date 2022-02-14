
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ds_enumval; int ds_class; int ds_type; int * ds_ctfp; int * ds_ident; int * ds_decl; } ;
typedef TYPE_1__ dt_scope_t ;
typedef int dt_decl_t ;
struct TYPE_4__ {TYPE_1__ pcb_dstack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 TYPE_2__* VAR_2 ;

dt_decl_t *
FUNC_2(void)
{
 dt_scope_t *VAR_3 = &VAR_2->pcb_dstack;
 dt_decl_t *VAR_4 = FUNC_0();

 VAR_3->ds_decl = ((void*)0);
 FUNC_1(VAR_3->ds_ident);
 VAR_3->ds_ident = ((void*)0);
 VAR_3->ds_ctfp = ((void*)0);
 VAR_3->ds_type = VAR_0;
 VAR_3->ds_class = VAR_1;
 VAR_3->ds_enumval = -1;

 return (VAR_4);
}
