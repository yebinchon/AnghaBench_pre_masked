
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct function_range {char const* name; struct function_range* next; scalar_t__ seen_line; void* highpc; void* lowpc; } ;
struct dwarf2_cu {struct function_range* last_fn; struct function_range* first_fn; } ;
typedef void* CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;

__attribute__((used)) static void
FUNC_1 (const char *VAR_1, CORE_ADDR VAR_2, CORE_ADDR VAR_3,
       struct dwarf2_cu *VAR_4)
{
  struct function_range *VAR_5;

  VAR_5 = (struct function_range *)
    FUNC_0 (&VAR_0, sizeof (struct function_range));
  VAR_5->name = VAR_1;
  VAR_5->lowpc = VAR_2;
  VAR_5->highpc = VAR_3;
  VAR_5->seen_line = 0;
  VAR_5->next = ((void*)0);

  if (VAR_4->last_fn == ((void*)0))
      VAR_4->first_fn = VAR_5;
  else
      VAR_4->last_fn->next = VAR_5;

  VAR_4->last_fn = VAR_5;
}
