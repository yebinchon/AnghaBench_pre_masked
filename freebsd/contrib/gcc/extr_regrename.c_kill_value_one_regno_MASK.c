
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value_data {TYPE_1__* e; } ;
struct TYPE_2__ {unsigned int oldest_regno; unsigned int next_regno; int mode; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct value_data*) ;

__attribute__((used)) static void
FUNC_1 (unsigned int VAR_2, struct value_data *VAR_3)
{
  unsigned int VAR_4, VAR_5;

  if (VAR_3->e[VAR_2].oldest_regno != VAR_2)
    {
      for (VAR_4 = VAR_3->e[VAR_2].oldest_regno;
    VAR_3->e[VAR_4].next_regno != VAR_2;
    VAR_4 = VAR_3->e[VAR_4].next_regno)
 continue;
      VAR_3->e[VAR_4].next_regno = VAR_3->e[VAR_2].next_regno;
    }
  else if ((VAR_5 = VAR_3->e[VAR_2].next_regno) != VAR_0)
    {
      for (VAR_4 = VAR_5; VAR_4 != VAR_0; VAR_4 = VAR_3->e[VAR_4].next_regno)
 VAR_3->e[VAR_4].oldest_regno = VAR_5;
    }

  VAR_3->e[VAR_2].mode = VAR_1;
  VAR_3->e[VAR_2].oldest_regno = VAR_2;
  VAR_3->e[VAR_2].next_regno = VAR_0;




}
