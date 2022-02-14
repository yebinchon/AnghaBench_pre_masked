
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtabs_and_lines {int nelts; TYPE_1__* sals; } ;
struct function_bounds {scalar_t__ low; scalar_t__ high; } ;
struct frame_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ pc; } ;
typedef scalar_t__ CORE_ADDR ;


 struct symtabs_and_lines FUNC_0 (char*,int) ;
 struct frame_info* VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__,char**,scalar_t__*,scalar_t__*) ;
 struct frame_info* FUNC_2 (struct frame_info*,int*) ;
 scalar_t__ FUNC_3 (struct frame_info*) ;
 struct frame_info* FUNC_4 (char*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (struct frame_info*) ;
 int FUNC_7 (struct function_bounds*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9 (char *VAR_1, int VAR_2)
{
  struct frame_info *VAR_3;
  int VAR_4 = 0;
  struct symtabs_and_lines VAR_5;
  int VAR_6;
  int VAR_7 = 1;
  struct function_bounds *VAR_8 = (struct function_bounds *) ((void*)0);

  if (VAR_1 != (char *) ((void*)0))
    return;

  VAR_3 = FUNC_4 ("0");
  VAR_5 = FUNC_0 (VAR_1, 1);
  VAR_8 = (struct function_bounds *) FUNC_8 (
         sizeof (struct function_bounds) * VAR_5.nelts);
  for (VAR_6 = 0; (VAR_6 < VAR_5.nelts && !VAR_4); VAR_6++)
    {
      if (VAR_5.sals[VAR_6].pc == (CORE_ADDR) 0 ||
   FUNC_1 (VAR_5.sals[VAR_6].pc,
        (char **) ((void*)0),
        &VAR_8[VAR_6].low,
        &VAR_8[VAR_6].high) == 0)
 {
   VAR_8[VAR_6].low =
     VAR_8[VAR_6].high = (CORE_ADDR) ((void*)0);
 }
    }

  do
    {
      for (VAR_6 = 0; (VAR_6 < VAR_5.nelts && !VAR_4); VAR_6++)
 VAR_4 = (FUNC_3 (VAR_3) >= VAR_8[VAR_6].low &&
   FUNC_3 (VAR_3) < VAR_8[VAR_6].high);
      if (!VAR_4)
 {
   VAR_7 = 1;
   VAR_3 = FUNC_2 (VAR_3, &VAR_7);
 }
    }
  while (!VAR_4 && VAR_7 == 0);

  if (VAR_8)
    FUNC_7 (VAR_8);

  if (!VAR_4)
    FUNC_5 ("'%s' not within current stack frame.\n", VAR_1);
  else if (VAR_3 != VAR_0)
    FUNC_6 (VAR_3);
}
