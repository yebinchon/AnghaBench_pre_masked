
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ds_decl; } ;
typedef TYPE_1__ dt_scope_t ;
struct TYPE_8__ {scalar_t__ dd_kind; struct TYPE_8__* dd_next; int * dd_name; } ;
typedef TYPE_2__ dt_decl_t ;
struct TYPE_9__ {TYPE_1__ pcb_dstack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_3__* VAR_2 ;

dt_decl_t *
FUNC_2(dt_decl_t *VAR_3)
{
 dt_scope_t *VAR_4 = &VAR_2->pcb_dstack;
 dt_decl_t *VAR_5 = VAR_4->ds_decl;

 if (VAR_5 != ((void*)0) &&
     VAR_5->dd_kind == VAR_1 && VAR_5->dd_name == ((void*)0)) {
  VAR_5->dd_kind = VAR_0;
  (void) FUNC_1(VAR_5);
 }

 FUNC_0(VAR_3->dd_next == ((void*)0));
 VAR_3->dd_next = VAR_5;
 VAR_4->ds_decl = VAR_3;

 return (VAR_3);
}
