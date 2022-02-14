
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips16_constant_pool {scalar_t__ first; int highest_address; int insn_address; } ;
struct mips16_constant {int mode; int label; struct mips16_constant* next; int value; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static rtx
FUNC_4 (struct mips16_constant_pool *VAR_1,
       rtx VAR_2, enum machine_mode VAR_3)
{
  struct mips16_constant **VAR_4, *VAR_5;
  bool VAR_6;







  VAR_6 = 1;
  for (VAR_4 = &VAR_1->first; *VAR_4 != 0; VAR_4 = &(*VAR_4)->next)
    {
      if (VAR_3 == (*VAR_4)->mode && FUNC_2 (VAR_2, (*VAR_4)->value))
 return (*VAR_4)->label;
      if (FUNC_0 (VAR_3) < FUNC_0 ((*VAR_4)->mode))
 break;
      if (FUNC_0 (VAR_3) == FUNC_0 ((*VAR_4)->mode))
 VAR_6 = 0;
    }
  if (VAR_1->first == 0)




    VAR_1->highest_address = VAR_1->insn_address - (VAR_0 - 2) + 0x8000;
  VAR_1->highest_address -= FUNC_0 (VAR_3);
  if (VAR_6)

    VAR_1->highest_address -= FUNC_0 (VAR_3) - 1;


  VAR_5 = (struct mips16_constant *) FUNC_3 (sizeof *VAR_5);
  VAR_5->value = VAR_2;
  VAR_5->mode = VAR_3;
  VAR_5->label = FUNC_1 ();
  VAR_5->next = *VAR_4;
  *VAR_4 = VAR_5;

  return VAR_5->label;
}
