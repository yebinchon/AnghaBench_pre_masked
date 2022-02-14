
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ds_class; char* ds_ident; } ;
typedef TYPE_1__ dt_scope_t ;
typedef int dt_decl_t ;
struct TYPE_4__ {TYPE_1__ pcb_dstack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 () ;
 int * FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 TYPE_2__* VAR_3 ;

dt_decl_t *
FUNC_3(char **VAR_4)
{
 dt_scope_t *VAR_5 = &VAR_3->pcb_dstack;

 if (VAR_5->ds_class != VAR_0 && VAR_5->ds_class != VAR_1) {
  FUNC_2(VAR_2, "inappropriate storage class "
      "for function or associative array parameter\n");
 }

 if (VAR_4 != ((void*)0) && FUNC_1() != ((void*)0)) {
  *VAR_4 = VAR_5->ds_ident;
  VAR_5->ds_ident = ((void*)0);
 }

 return (FUNC_0());
}
