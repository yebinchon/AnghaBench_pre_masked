
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* ds_ident; int * ds_decl; } ;
typedef TYPE_1__ dt_scope_t ;
typedef int dt_decl_t ;
struct TYPE_4__ {TYPE_1__ pcb_dstack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 TYPE_2__* VAR_2 ;

dt_decl_t *
FUNC_4(char *VAR_3)
{
 dt_scope_t *VAR_4 = &VAR_2->pcb_dstack;
 dt_decl_t *VAR_5 = VAR_4->ds_decl;

 if (VAR_4->ds_ident != ((void*)0)) {
  FUNC_2(VAR_3);
  FUNC_3(VAR_1, "old-style declaration or "
      "incorrect type specified\n");
 }

 VAR_4->ds_ident = VAR_3;

 if (VAR_5 == ((void*)0))
  VAR_5 = FUNC_1(FUNC_0(VAR_0, ((void*)0)));

 return (VAR_5);
}
