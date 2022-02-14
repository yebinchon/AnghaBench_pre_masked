
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct no_conflict_data {int must_stay; scalar_t__ insn; scalar_t__ first; int target; } ;
typedef int rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_10 (rtx VAR_2, rtx VAR_3, void *VAR_4)
{
  struct no_conflict_data *VAR_5= VAR_4;


  if (FUNC_8 (VAR_5->target, VAR_2))
    VAR_5->must_stay = 1;


  else if (VAR_5->insn == VAR_5->first)
    return;


  else if (FUNC_8 (VAR_2, FUNC_2 (VAR_5->first))
    || (FUNC_0 (VAR_5->first) && (FUNC_5 (VAR_5->first, VAR_1, VAR_2)))
    || FUNC_9 (VAR_2, VAR_5->first, VAR_5->insn)






    || (FUNC_1 (VAR_3) == VAR_0
        && (FUNC_7 (FUNC_4 (VAR_3), VAR_5->first)
     || FUNC_7 (FUNC_3 (VAR_3), VAR_5->first)
     || FUNC_6 (FUNC_4 (VAR_3), VAR_5->first, VAR_5->insn)
     || FUNC_6 (FUNC_3 (VAR_3), VAR_5->first, VAR_5->insn))))
    VAR_5->must_stay = 1;
}
