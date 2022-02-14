
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ds_decl; int ds_enumval; int ds_class; int ds_type; int * ds_ctfp; struct TYPE_4__* ds_ident; struct TYPE_4__* ds_next; } ;
typedef TYPE_1__ dt_scope_t ;
typedef int dt_decl_t ;
struct TYPE_5__ {int pcb_jmpbuf; TYPE_1__ pcb_dstack; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*,int ) ;
 TYPE_2__* VAR_3 ;

dt_decl_t *
FUNC_7(void)
{
 dt_scope_t *VAR_4 = &VAR_3->pcb_dstack;
 dt_scope_t *VAR_5 = VAR_4->ds_next;

 if (VAR_5 == ((void*)0))
  FUNC_5(VAR_3->pcb_jmpbuf, VAR_2);

 if (VAR_5->ds_ctfp != ((void*)0) && FUNC_2(VAR_5->ds_ctfp) == VAR_0) {
  FUNC_6(VAR_1, "failed to update type definitions: %s\n",
      FUNC_0(FUNC_1(VAR_5->ds_ctfp)));
 }

 FUNC_3(VAR_4->ds_decl);
 FUNC_4(VAR_4->ds_ident);

 VAR_4->ds_decl = VAR_5->ds_decl;
 VAR_4->ds_next = VAR_5->ds_next;
 VAR_4->ds_ident = VAR_5->ds_ident;
 VAR_4->ds_ctfp = VAR_5->ds_ctfp;
 VAR_4->ds_type = VAR_5->ds_type;
 VAR_4->ds_class = VAR_5->ds_class;
 VAR_4->ds_enumval = VAR_5->ds_enumval;

 FUNC_4(VAR_5);
 return (VAR_4->ds_decl);
}
