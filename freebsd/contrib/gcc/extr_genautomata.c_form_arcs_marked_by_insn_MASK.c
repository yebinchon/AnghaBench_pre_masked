
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int state_t ;
typedef TYPE_2__* decl_t ;
typedef TYPE_3__* arc_t ;
struct TYPE_16__ {int * arcs_marked_by_insn; } ;
struct TYPE_15__ {int decls_num; TYPE_2__** decls; } ;
struct TYPE_14__ {TYPE_1__* insn_reserv_decl; } ;
struct TYPE_13__ {TYPE_6__* insn; struct TYPE_13__* next_arc_marked_by_insn; } ;
struct TYPE_12__ {scalar_t__ mode; } ;
struct TYPE_11__ {TYPE_3__* arcs_marked_by_insn; } ;


 TYPE_9__* FUNC_0 (TYPE_2__*) ;
 TYPE_8__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4 (state_t VAR_2)
{
  decl_t VAR_3;
  arc_t VAR_4;
  int VAR_5;

  for (VAR_5 = 0; VAR_5 < VAR_0->decls_num; VAR_5++)
    {
      VAR_3 = VAR_0->decls [VAR_5];
      if (VAR_3->mode == VAR_1)
 FUNC_0 (VAR_3)->arcs_marked_by_insn = ((void*)0);
    }
  for (VAR_4 = FUNC_1 (VAR_2); VAR_4 != ((void*)0); VAR_4 = FUNC_3 (VAR_4))
    {
      FUNC_2 (VAR_4->insn);
      VAR_4->next_arc_marked_by_insn
 = VAR_4->insn->insn_reserv_decl->arcs_marked_by_insn;
      VAR_4->insn->insn_reserv_decl->arcs_marked_by_insn = VAR_4;
    }
}
