
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* state_t ;
typedef TYPE_2__* arc_t ;
typedef TYPE_3__* ainsn_t ;
struct TYPE_12__ {scalar_t__ insn_reserv_decl; } ;
struct TYPE_11__ {TYPE_3__* insn; TYPE_1__* to_state; } ;
struct TYPE_10__ {scalar_t__ state_pass_num; int min_insn_issue_delay; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_3 (state_t VAR_2, ainsn_t VAR_3)
{
  arc_t VAR_4;
  int VAR_5, VAR_6;

  if (VAR_2->state_pass_num == VAR_1
      || VAR_2->min_insn_issue_delay != -1)


    return VAR_2->min_insn_issue_delay;
  VAR_2->state_pass_num = VAR_1;
  VAR_5 = -1;
  for (VAR_4 = FUNC_1 (VAR_2); VAR_4 != ((void*)0); VAR_4 = FUNC_2 (VAR_4))
    if (VAR_4->insn == VAR_3)
      {
 VAR_5 = 0;
 break;
      }
    else
      {
        VAR_6 = FUNC_3 (VAR_4->to_state, VAR_3);
 if (VAR_6 != -1)
   {
     if (VAR_4->insn->insn_reserv_decl
  == FUNC_0 (VAR_0))
       VAR_6++;
     if (VAR_5 == -1
  || VAR_5 > VAR_6)
       {
  VAR_5 = VAR_6;
  if (VAR_6 == 0)
    break;
       }
   }
      }
  return VAR_5;
}
