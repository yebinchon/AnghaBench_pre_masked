
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct args_size {int constant; } ;
struct arg_data {scalar_t__ partial; scalar_t__ reg; int tree_value; int pass_on_stack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5 (int VAR_4, int VAR_5, struct arg_data *VAR_6, struct args_size *VAR_7)
{
  if (! VAR_4)
    {
      int VAR_8 = 0;
      int VAR_9 = 0;
      int VAR_10;

      for (VAR_10 = 0; VAR_10 < VAR_5 && ! VAR_4; VAR_10++)
 {
   if (VAR_6[VAR_10].partial > 0 && ! VAR_6[VAR_10].pass_on_stack)
     VAR_8 = 1;
   else if (VAR_8 && VAR_6[VAR_10].reg == 0)
     VAR_4 = 1;

   if (FUNC_3 (FUNC_2 (VAR_6[VAR_10].tree_value)) == VAR_0
       && (FUNC_1 (VAR_6[VAR_10].tree_value) == VAR_1
    || FUNC_1 (VAR_6[VAR_10].tree_value) == VAR_3
    || FUNC_1 (VAR_6[VAR_10].tree_value) == VAR_2
    || FUNC_0 (FUNC_2 (VAR_6[VAR_10].tree_value))))
     VAR_9
       += FUNC_4 (FUNC_2 (VAR_6[VAR_10].tree_value));
 }

      if (VAR_9 * 2 >= VAR_7->constant
   && VAR_7->constant > 0)
 VAR_4 = 1;
    }
  return VAR_4;
}
