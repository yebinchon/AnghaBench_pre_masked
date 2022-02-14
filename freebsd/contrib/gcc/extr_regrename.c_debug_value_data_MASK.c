
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value_data {TYPE_1__* e; } ;
struct TYPE_2__ {unsigned int oldest_regno; scalar_t__ mode; unsigned int next_regno; } ;
typedef int HARD_REG_SET ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 char* FUNC_1 (scalar_t__) ;
 unsigned int VAR_1 ;
 int FUNC_2 (int ,unsigned int) ;
 scalar_t__ FUNC_3 (int ,unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,char*,unsigned int,...) ;
 int FUNC_5 (char,int ) ;
 int VAR_3 ;

void
FUNC_6 (struct value_data *VAR_4)
{
  HARD_REG_SET VAR_5;
  unsigned int VAR_6, VAR_7;

  FUNC_0 (VAR_5);

  for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
    if (VAR_4->e[VAR_6].oldest_regno == VAR_6)
      {
 if (VAR_4->e[VAR_6].mode == VAR_2)
   {
     if (VAR_4->e[VAR_6].next_regno != VAR_1)
       FUNC_4 (VAR_3, "[%u] Bad next_regno for empty chain (%u)\n",
         VAR_6, VAR_4->e[VAR_6].next_regno);
     continue;
   }

 FUNC_2 (VAR_5, VAR_6);
 FUNC_4 (VAR_3, "[%u %s] ", VAR_6, FUNC_1 (VAR_4->e[VAR_6].mode));

 for (VAR_7 = VAR_4->e[VAR_6].next_regno;
      VAR_7 != VAR_1;
      VAR_7 = VAR_4->e[VAR_7].next_regno)
   {
     if (FUNC_3 (VAR_5, VAR_7))
       {
  FUNC_4 (VAR_3, "[%u] Loop in regno chain\n", VAR_7);
  return;
       }

     if (VAR_4->e[VAR_7].oldest_regno != VAR_6)
       {
  FUNC_4 (VAR_3, "[%u] Bad oldest_regno (%u)\n",
    VAR_7, VAR_4->e[VAR_7].oldest_regno);
  return;
       }
     FUNC_2 (VAR_5, VAR_7);
     FUNC_4 (VAR_3, "[%u %s] ", VAR_7, FUNC_1 (VAR_4->e[VAR_7].mode));
   }
 FUNC_5 ('\n', VAR_3);
      }

  for (VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6)
    if (! FUNC_3 (VAR_5, VAR_6)
 && (VAR_4->e[VAR_6].mode != VAR_2
     || VAR_4->e[VAR_6].oldest_regno != VAR_6
     || VAR_4->e[VAR_6].next_regno != VAR_1))
      FUNC_4 (VAR_3, "[%u] Non-empty reg in chain (%s %u %i)\n",
        VAR_6, FUNC_1 (VAR_4->e[VAR_6].mode), VAR_4->e[VAR_6].oldest_regno,
        VAR_4->e[VAR_6].next_regno);
}
