
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ where_pad; } ;
struct arg_data {scalar_t__ tail_call_reg; scalar_t__ reg; int partial; scalar_t__ value; int n_aligned_regs; scalar_t__* aligned_regs; int mode; TYPE_1__ locate; scalar_t__ pass_on_stack; int parallel_value; int tree_value; } ;
typedef scalar_t__ rtx ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_8 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,int) ;
 scalar_t__ FUNC_7 (scalar_t__,struct arg_data*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (int,int ,scalar_t__,int ,scalar_t__,int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ,scalar_t__) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ,int) ;
 int FUNC_17 (scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_18 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_19 (scalar_t__*,scalar_t__) ;
 int FUNC_20 (scalar_t__*,scalar_t__) ;
 int FUNC_21 (scalar_t__*,scalar_t__,int) ;
 scalar_t__ FUNC_22 (scalar_t__) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_23 (struct arg_data *VAR_12, int VAR_13,
     rtx *VAR_14, int VAR_15, int VAR_16,
     int *VAR_17)
{
  int VAR_18, VAR_19;

  for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++)
    {
      rtx VAR_20 = ((VAR_15 & VAR_3)
   ? VAR_12[VAR_18].tail_call_reg : VAR_12[VAR_18].reg);
      if (VAR_20)
 {
   int VAR_21 = VAR_12[VAR_18].partial;
   int VAR_22;
   int VAR_23 = 0;
   rtx VAR_24 = FUNC_14 ();




   VAR_22 = -1;
   if (FUNC_0 (VAR_20) == VAR_6)
     ;
   else if (VAR_21)
     {
       FUNC_11 (VAR_21 % VAR_8 == 0);
       VAR_22 = VAR_21 / VAR_8;
     }
   else if (FUNC_4 (FUNC_3 (VAR_12[VAR_18].tree_value)) == VAR_1)
     {
       VAR_23 = FUNC_15 (FUNC_3 (VAR_12[VAR_18].tree_value));
       VAR_22 = (VAR_23 + (VAR_8 - 1)) / VAR_8;
     }
   else
     VAR_23 = FUNC_1 (VAR_12[VAR_18].mode);




   if (FUNC_0 (VAR_20) == VAR_6)
     FUNC_8 (VAR_20, VAR_12[VAR_18].parallel_value);





   else if (VAR_22 == -1)
     {
       FUNC_9 (VAR_20, VAR_12[VAR_18].value);
     }




   else if (VAR_12[VAR_18].n_aligned_regs != 0)
     for (VAR_19 = 0; VAR_19 < VAR_12[VAR_18].n_aligned_regs; VAR_19++)
       FUNC_9 (FUNC_13 (VAR_11, FUNC_2 (VAR_20) + VAR_19),
         VAR_12[VAR_18].aligned_regs[VAR_19]);

   else if (VAR_21 == 0 || VAR_12[VAR_18].pass_on_stack)
     {
       rtx VAR_25 = FUNC_22 (VAR_12[VAR_18].value);


       if (VAR_16
    && FUNC_16 (FUNC_5 (VAR_12[VAR_18].value, 0),
          VAR_23))
  *VAR_17 = 1;


       if (VAR_22 == 1 && VAR_23 < VAR_8



    && VAR_2

   )
  {
    rtx VAR_26 = FUNC_18 (VAR_25, 0, VAR_12[VAR_18].mode);
    rtx VAR_27 = FUNC_13 (VAR_11, FUNC_2 (VAR_20));
    rtx VAR_28 = FUNC_12 (VAR_11);
    int VAR_29 = (VAR_8 - VAR_23) * VAR_0;
    enum tree_code VAR_30 = VAR_2 ? VAR_7
       : VAR_4;

    FUNC_9 (VAR_28, VAR_26);
    VAR_28 = FUNC_10 (VAR_30, VAR_11, VAR_28,
        FUNC_6 (VAR_5, VAR_29),
        VAR_27, 1);
    if (VAR_28 != VAR_27)
      FUNC_9 (VAR_27, VAR_28);
  }
       else
  FUNC_17 (FUNC_2 (VAR_20), VAR_25, VAR_22, VAR_12[VAR_18].mode);
     }




   if (VAR_16
       && FUNC_7 (VAR_24, &VAR_12[VAR_18], 0))
     *VAR_17 = 1;



   if (FUNC_0 (VAR_20) == VAR_6)
     FUNC_19 (VAR_14, VAR_20);
   else if (VAR_22 == -1)
     FUNC_20 (VAR_14, VAR_20);
   else if (VAR_22 > 0)
     FUNC_21 (VAR_14, FUNC_2 (VAR_20), VAR_22);
 }
    }
}
