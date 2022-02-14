
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef TYPE_4__* state_t ;
typedef TYPE_5__* arc_t ;
struct TYPE_18__ {TYPE_3__* insn; TYPE_1__* to_state; } ;
struct TYPE_17__ {scalar_t__ num_out_arcs; scalar_t__* presence_signature; } ;
struct TYPE_16__ {TYPE_2__* insn_reserv_decl; } ;
struct TYPE_15__ {scalar_t__ equiv_class_num; } ;
struct TYPE_14__ {scalar_t__ equiv_class_num_1; scalar_t__ equiv_class_num_2; } ;
struct TYPE_13__ {int query_units_num; } ;


 int VAR_0 ;
 TYPE_12__* VAR_1 ;
 TYPE_5__* FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (int) ;
 TYPE_5__* FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int
FUNC_3 (state_t VAR_2, state_t VAR_3,
     int VAR_4)
{
  arc_t VAR_5;
  unsigned int VAR_6, VAR_7;

  FUNC_1 (VAR_2->num_out_arcs == VAR_3->num_out_arcs);

  VAR_6 = (VAR_1->query_units_num + sizeof (int) * VAR_0 - 1)
 / (sizeof (int) * VAR_0);

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
    FUNC_1 (VAR_2->presence_signature[VAR_7]
  == VAR_3->presence_signature[VAR_7]);

  for (VAR_5 = FUNC_0 (VAR_2); VAR_5 != ((void*)0); VAR_5 = FUNC_2 (VAR_5))
    {
      if ((VAR_4
           ? VAR_5->to_state->equiv_class_num_1
    : VAR_5->to_state->equiv_class_num_2)
          != VAR_5->insn->insn_reserv_decl->equiv_class_num)
        return 1;
    }

  return 0;
}
