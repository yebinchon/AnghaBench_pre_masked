
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record_stack_memrefs_data {int memlist; int insn; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_5 (rtx *VAR_2, void *VAR_3)
{
  rtx VAR_4 = *VAR_2;
  struct record_stack_memrefs_data *VAR_5 =
    (struct record_stack_memrefs_data *) VAR_3;
  if (!VAR_4)
    return 0;
  switch (FUNC_0 (VAR_4))
    {
    case 129:
      if (!FUNC_3 (VAR_1, VAR_4))
 return -1;


      if (FUNC_4 (VAR_4))
 {
   VAR_5->memlist = FUNC_2 (VAR_5->insn, VAR_2, VAR_5->memlist);
   return -1;
 }
      return 1;
    case 128:
      if (FUNC_1 (VAR_4) == VAR_0)
 return 1;
      break;
    default:
      break;
    }
  return 0;
}
