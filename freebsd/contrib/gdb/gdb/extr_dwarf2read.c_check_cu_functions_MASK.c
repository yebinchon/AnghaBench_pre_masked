
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct function_range {scalar_t__ lowpc; scalar_t__ highpc; int seen_line; int name; struct function_range* next; } ;
struct dwarf2_cu {struct function_range* cached_fn; struct function_range* first_fn; } ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int *,char*,unsigned long,int ) ;
 int VAR_0 ;

__attribute__((used)) static CORE_ADDR
FUNC_1 (CORE_ADDR VAR_1, struct dwarf2_cu *VAR_2)
{
  struct function_range *VAR_3;


  if (!VAR_2->first_fn)
    return VAR_1;

  if (!VAR_2->cached_fn)
    VAR_2->cached_fn = VAR_2->first_fn;

  VAR_3 = VAR_2->cached_fn;
  while (VAR_3)
    if (VAR_3->lowpc <= VAR_1 && VAR_3->highpc > VAR_1)
      goto found;
    else
      VAR_3 = VAR_3->next;

  VAR_3 = VAR_2->first_fn;
  while (VAR_3 && VAR_3 != VAR_2->cached_fn)
    if (VAR_3->lowpc <= VAR_1 && VAR_3->highpc > VAR_1)
      goto found;
    else
      VAR_3 = VAR_3->next;

  return VAR_1;

 found:
  if (VAR_3->seen_line)
    return VAR_1;
  if (VAR_1 != VAR_3->lowpc)
    FUNC_0 (&VAR_0,
        "misplaced first line number at 0x%lx for '%s'",
        (unsigned long) VAR_1, VAR_3->name);
  VAR_3->seen_line = 1;
  return VAR_3->lowpc;
}
