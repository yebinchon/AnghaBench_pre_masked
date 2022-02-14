
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct see_entry_extra_info {int relevancy; int local_relevancy; } ;
typedef int * rtx ;
typedef enum entry_type { ____Placeholder_entry_type } entry_type ;
struct TYPE_2__ {int * pred; int * reg; struct see_entry_extra_info* extra_info; } ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (scalar_t__,char*,...) ;
 TYPE_1__* VAR_7 ;
 unsigned int VAR_8 ;
 struct see_entry_extra_info* FUNC_8 (int) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  rtx VAR_9 = ((void*)0);
  rtx VAR_10 = ((void*)0);
  struct see_entry_extra_info *VAR_11;
  enum entry_type VAR_12;
  unsigned int VAR_13;

  if (!VAR_5 || !VAR_7)
    return;

  for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
    {

      VAR_9 = FUNC_0 (FUNC_2 (VAR_5, VAR_13));
      VAR_10 = FUNC_1 (FUNC_2 (VAR_5, VAR_13));

      VAR_12 = VAR_4;

      if (VAR_9)
 {
   if (!FUNC_3 (VAR_9))
     VAR_12 = VAR_0;
   if (VAR_9 && FUNC_6 (VAR_9, VAR_2, VAR_1))
     VAR_12 = VAR_0;
   if (FUNC_6 (VAR_9, VAR_3, VAR_1))
     VAR_12 = VAR_0;
 }
      else
 VAR_12 = VAR_0;

      if (VAR_6)
 {
   FUNC_7 (VAR_6, "u%i insn %i reg %i ",
          VAR_13, (VAR_9 ? FUNC_4 (VAR_9) : -1), FUNC_5 (VAR_10));
   if (VAR_12 == VAR_0)
     FUNC_7 (VAR_6, "NOT RELEVANT \n");
   else
     FUNC_7 (VAR_6, "RELEVANT USE \n");
 }

      VAR_11 = FUNC_8 (sizeof (struct see_entry_extra_info));
      VAR_11->relevancy = VAR_12;
      VAR_11->local_relevancy = VAR_12;
      VAR_7[VAR_13].extra_info = VAR_11;
      VAR_7[VAR_13].reg = ((void*)0);
      VAR_7[VAR_13].pred = ((void*)0);
    }
}
