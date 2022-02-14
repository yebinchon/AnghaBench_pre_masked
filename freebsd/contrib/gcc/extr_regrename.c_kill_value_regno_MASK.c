
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value_data {unsigned int max_value_regs; TYPE_1__* e; } ;
struct TYPE_2__ {size_t mode; } ;


 size_t VAR_0 ;
 unsigned int** VAR_1 ;
 int FUNC_0 (unsigned int,struct value_data*) ;

__attribute__((used)) static void
FUNC_1 (unsigned int VAR_2, unsigned int VAR_3,
    struct value_data *VAR_4)
{
  unsigned int VAR_5;


  for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5)
    FUNC_0 (VAR_2 + VAR_5, VAR_4);


  if (VAR_2 < VAR_4->max_value_regs)
    VAR_5 = 0;
  else
    VAR_5 = VAR_2 - VAR_4->max_value_regs;
  for (; VAR_5 < VAR_2; ++VAR_5)
    {
      unsigned int VAR_6, VAR_7;
      if (VAR_4->e[VAR_5].mode == VAR_0)
 continue;
      VAR_7 = VAR_1[VAR_5][VAR_4->e[VAR_5].mode];
      if (VAR_5 + VAR_7 > VAR_2)
 for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
   FUNC_0 (VAR_5 + VAR_6, VAR_4);
    }
}
