
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symtab_and_line {scalar_t__ pc; scalar_t__ end; } ;
struct symbol {int dummy; } ;
struct linked_proc_info {int info; struct linked_proc_info* next; } ;
struct frame_info {int dummy; } ;
typedef int * mips_extra_func_info_t ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 struct symbol* FUNC_4 (int *) ;
 int FUNC_5 (struct symbol*) ;
 struct symtab_and_line FUNC_6 (int ,int ) ;
 int * FUNC_7 (scalar_t__,scalar_t__,struct frame_info*,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 struct linked_proc_info* VAR_0 ;
 int * FUNC_9 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static mips_extra_func_info_t
FUNC_10 (CORE_ADDR VAR_1, struct frame_info *VAR_2, int VAR_3)
{
  mips_extra_func_info_t VAR_4;
  CORE_ADDR VAR_5 = 0;

  VAR_4 = FUNC_9 (VAR_1, &VAR_5);

  if (VAR_4)
    {






      if (VAR_2 == ((void*)0))
 {
   struct symtab_and_line VAR_6;
   struct symbol *VAR_7 =
     FUNC_1 (VAR_4) ? 0 : FUNC_4 (VAR_4);

   if (VAR_7)
     {
       VAR_6 = FUNC_6 (FUNC_0
      (FUNC_5 (VAR_7)), 0);
       VAR_6.pc = VAR_6.end ? VAR_6.end : VAR_1;
     }
   if (!VAR_7 || VAR_1 < VAR_6.pc)
     {
       mips_extra_func_info_t VAR_8 =
  FUNC_7 (FUNC_3 (VAR_4),
         VAR_1, VAR_2, VAR_3);
       if (VAR_8)
  VAR_4 = VAR_8;
     }
 }
    }
  else
    {





      struct linked_proc_info *VAR_9;

      for (VAR_9 = VAR_0; VAR_9; VAR_9 = VAR_9->next)
 if (FUNC_3 (&VAR_9->info) <= VAR_1
     && FUNC_2 (&VAR_9->info) > VAR_1)
   return &VAR_9->info;

      if (VAR_5 == 0)
 VAR_5 = FUNC_8 (VAR_1);

      VAR_4 = FUNC_7 (VAR_5, VAR_1, VAR_2, VAR_3);
    }
  return VAR_4;
}
