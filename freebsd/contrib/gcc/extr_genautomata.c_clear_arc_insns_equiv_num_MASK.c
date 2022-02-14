
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int state_t ;
typedef TYPE_3__* arc_t ;
struct TYPE_9__ {TYPE_2__* insn; } ;
struct TYPE_8__ {TYPE_1__* insn_reserv_decl; } ;
struct TYPE_7__ {scalar_t__ equiv_class_num; } ;


 TYPE_3__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2 (state_t VAR_0)
{
  arc_t VAR_1;

  for (VAR_1 = FUNC_0 (VAR_0); VAR_1 != ((void*)0); VAR_1 = FUNC_1 (VAR_1))
    VAR_1->insn->insn_reserv_decl->equiv_class_num = 0;
}
