
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dd_kind; int * dd_name; } ;
typedef TYPE_2__ dt_decl_t ;
struct TYPE_6__ {TYPE_2__* ds_decl; } ;
struct TYPE_8__ {int pcb_jmpbuf; TYPE_1__ pcb_dstack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 TYPE_3__* VAR_3 ;

dt_decl_t *
FUNC_2(void)
{
 dt_decl_t *VAR_4 = VAR_3->pcb_dstack.ds_decl;

 if (VAR_4 == ((void*)0))
  FUNC_1(VAR_3->pcb_jmpbuf, VAR_2);

 if (VAR_4->dd_kind == VAR_1 && VAR_4->dd_name == ((void*)0)) {
  VAR_4->dd_kind = VAR_0;
  (void) FUNC_0(VAR_4);
 }

 return (VAR_4);
}
