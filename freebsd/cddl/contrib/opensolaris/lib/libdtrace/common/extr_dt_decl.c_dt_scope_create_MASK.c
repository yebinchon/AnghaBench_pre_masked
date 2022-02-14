
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ds_enumval; int ds_class; int ds_type; int * ds_ctfp; int * ds_ident; int * ds_next; int * ds_decl; } ;
typedef TYPE_1__ dt_scope_t ;


 int VAR_0 ;
 int VAR_1 ;

void
FUNC_0(dt_scope_t *VAR_2)
{
 VAR_2->ds_decl = ((void*)0);
 VAR_2->ds_next = ((void*)0);
 VAR_2->ds_ident = ((void*)0);
 VAR_2->ds_ctfp = ((void*)0);
 VAR_2->ds_type = VAR_0;
 VAR_2->ds_class = VAR_1;
 VAR_2->ds_enumval = -1;
}
