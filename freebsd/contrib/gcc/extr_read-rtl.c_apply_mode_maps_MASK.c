
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapping {int dummy; } ;
struct map_value {int number; char* string; struct map_value* next; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {int macros; } ;
typedef int FILE ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (char*,int *) ;
 unsigned int FUNC_3 (int ) ;
 struct map_value* FUNC_4 (char*,struct mapping*,int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_5 (rtx VAR_2, struct map_value *VAR_3, struct mapping *VAR_4,
   int VAR_5, FILE *VAR_6, const char **VAR_7)
{
  unsigned int VAR_8;
  int VAR_9;
  struct map_value *VAR_10;

  VAR_8 = VAR_0 + FUNC_3 (VAR_1.macros);
  if (FUNC_0 (VAR_2) < VAR_8)
    return;

  VAR_9 = FUNC_0 (VAR_2) - VAR_8;
  for (VAR_10 = VAR_3; VAR_10; VAR_10 = VAR_10->next)
    {
      if (VAR_10->number == VAR_9)
 {
   struct map_value *VAR_11;

   VAR_11 = FUNC_4 (VAR_10->string, VAR_4, VAR_5);
   if (VAR_11)
     FUNC_1 (VAR_2, (enum machine_mode) FUNC_2 (VAR_11->string, VAR_6));
   else
     *VAR_7 = VAR_10->string;
   return;
 }
    }
}
