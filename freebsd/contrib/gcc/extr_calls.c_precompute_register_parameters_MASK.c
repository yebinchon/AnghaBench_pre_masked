
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct arg_data {scalar_t__ reg; scalar_t__ value; scalar_t__ mode; int parallel_value; int tree_value; int unsignedp; int pass_on_stack; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_14 () ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_18 (int VAR_6, struct arg_data *VAR_7,
    int *VAR_8)
{
  int VAR_9;

  *VAR_8 = 0;

  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
    if (VAR_7[VAR_9].reg != 0 && ! VAR_7[VAR_9].pass_on_stack)
      {
 *VAR_8 = 1;

 if (VAR_7[VAR_9].value == 0)
   {
     FUNC_16 ();
     VAR_7[VAR_9].value = FUNC_11 (VAR_7[VAR_9].tree_value);
     FUNC_15 (VAR_7[VAR_9].value);
     FUNC_14 ();
   }



 if (FUNC_0 (VAR_7[VAR_9].value)
     && !FUNC_3 (VAR_7[VAR_9].value))
   VAR_7[VAR_9].value = FUNC_12 (VAR_7[VAR_9].mode, VAR_7[VAR_9].value);




 if (VAR_7[VAR_9].mode != FUNC_7 (FUNC_6 (VAR_7[VAR_9].tree_value)))
   VAR_7[VAR_9].value
     = FUNC_8 (VAR_7[VAR_9].mode,
        FUNC_7 (FUNC_6 (VAR_7[VAR_9].tree_value)),
        VAR_7[VAR_9].value, VAR_7[VAR_9].unsignedp);




 if (FUNC_2 (VAR_7[VAR_9].reg) == VAR_1)
   {
     tree VAR_10 = FUNC_6 (VAR_7[VAR_9].tree_value);
     VAR_7[VAR_9].parallel_value
       = FUNC_10 (VAR_7[VAR_9].reg, VAR_7[VAR_9].value,
         VAR_10, FUNC_13 (VAR_10));
   }
 else if ((! (FUNC_4 (VAR_7[VAR_9].value)
       || (FUNC_2 (VAR_7[VAR_9].value) == VAR_4
    && FUNC_4 (FUNC_5 (VAR_7[VAR_9].value)))))
   && VAR_7[VAR_9].mode != VAR_0
   && FUNC_17 (VAR_7[VAR_9].value, VAR_2) > FUNC_1 (1)
   && ((VAR_3 && *VAR_8)
       || VAR_5))
   VAR_7[VAR_9].value = FUNC_9 (VAR_7[VAR_9].mode, VAR_7[VAR_9].value);
      }
}
