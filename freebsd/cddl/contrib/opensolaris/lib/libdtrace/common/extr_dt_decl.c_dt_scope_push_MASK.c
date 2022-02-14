
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* ds_next; int ds_enumval; int ds_class; int ds_type; int * ds_ctfp; int ds_ident; int ds_decl; } ;
typedef TYPE_1__ dt_scope_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_6__ {int pcb_jmpbuf; TYPE_1__ pcb_dstack; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (int) ;
 TYPE_2__* VAR_1 ;

void
FUNC_3(ctf_file_t *VAR_2, ctf_id_t VAR_3)
{
 dt_scope_t *VAR_4 = &VAR_1->pcb_dstack;
 dt_scope_t *VAR_5 = FUNC_2(sizeof (dt_scope_t));

 if (VAR_5 == ((void*)0))
  FUNC_1(VAR_1->pcb_jmpbuf, VAR_0);

 VAR_5->ds_decl = VAR_4->ds_decl;
 VAR_5->ds_next = VAR_4->ds_next;
 VAR_5->ds_ident = VAR_4->ds_ident;
 VAR_5->ds_ctfp = VAR_2;
 VAR_5->ds_type = VAR_3;
 VAR_5->ds_class = VAR_4->ds_class;
 VAR_5->ds_enumval = VAR_4->ds_enumval;

 FUNC_0(VAR_4);
 VAR_4->ds_next = VAR_5;
}
