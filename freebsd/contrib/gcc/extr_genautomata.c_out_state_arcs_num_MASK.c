
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int state_t ;
typedef TYPE_1__* arc_t ;
struct TYPE_7__ {scalar_t__ first_ainsn_with_given_equivalence_num; } ;
struct TYPE_6__ {TYPE_4__* insn; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3 (state_t VAR_0)
{
  int VAR_1;
  arc_t VAR_2;

  VAR_1 = 0;
  for (VAR_2 = FUNC_0 (VAR_0); VAR_2 != ((void*)0); VAR_2 = FUNC_2 (VAR_2))
    {
      FUNC_1 (VAR_2->insn);
      if (VAR_2->insn->first_ainsn_with_given_equivalence_num)
        VAR_1++;
    }
  return VAR_1;
}
