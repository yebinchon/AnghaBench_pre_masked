
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int state_t ;
typedef TYPE_3__* arc_t ;
typedef TYPE_4__* ainsn_t ;
struct TYPE_11__ {int insn_equiv_class_num; struct TYPE_11__* next_same_reservs_insn; TYPE_1__* insn_reserv_decl; int first_insn_with_same_reservs; } ;
struct TYPE_10__ {TYPE_2__* to_state; TYPE_4__* insn; } ;
struct TYPE_9__ {int order_state_num; } ;
struct TYPE_8__ {char* name; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 TYPE_3__* FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5 (state_t VAR_2)
{
  arc_t VAR_3;
  ainsn_t VAR_4;
  const char *VAR_5;
  int VAR_6;

  for (VAR_3 = FUNC_0 (VAR_2); VAR_3 != ((void*)0); VAR_3 = FUNC_3 (VAR_3))
    {
      VAR_4 = VAR_3->insn;
      FUNC_2 (VAR_4->first_insn_with_same_reservs);
      FUNC_1 (VAR_1, "    ");
      VAR_6 = 7;
      FUNC_1 (VAR_1, "%2d: ", VAR_4->insn_equiv_class_num);
      do
        {
          VAR_5 = VAR_4->insn_reserv_decl->name;
          if (VAR_6 + FUNC_4 (VAR_5) > VAR_0)
            {
              if (VAR_4 != VAR_3->insn)
                {
                  FUNC_1 (VAR_1, ",\n      ");
                  VAR_6 = FUNC_4 (VAR_5) + 6;
                }
              else
                VAR_6 += FUNC_4 (VAR_5);
            }
          else
            {
              VAR_6 += FUNC_4 (VAR_5);
              if (VAR_4 != VAR_3->insn)
                {
                  VAR_6 += 2;
                  FUNC_1 (VAR_1, ", ");
                }
            }
          FUNC_1 (VAR_1, "%s", VAR_5);
          VAR_4 = VAR_4->next_same_reservs_insn;
        }
      while (VAR_4 != ((void*)0));
      FUNC_1 (VAR_1, "    %d \n",
        VAR_3->to_state->order_state_num);
    }
  FUNC_1 (VAR_1, "\n");
}
