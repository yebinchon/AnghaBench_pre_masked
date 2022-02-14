
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct expr {scalar_t__ reaching_reg; size_t bitmap_index; } ;
typedef scalar_t__ rtx ;
typedef TYPE_1__* basic_block ;
struct TYPE_9__ {int flags; } ;
struct TYPE_8__ {size_t index; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_13 (int ,size_t) ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (int ,scalar_t__) ;
 int * VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,int ) ;
 scalar_t__ FUNC_19 (scalar_t__,int ,scalar_t__) ;
 int FUNC_20 (scalar_t__,char*,size_t,int) ;
 int FUNC_21 (int) ;
 int VAR_7 ;
 int FUNC_22 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_23 (scalar_t__) ;
 scalar_t__ FUNC_24 (scalar_t__) ;
 scalar_t__ FUNC_25 (struct expr*) ;
 int VAR_8 ;
 scalar_t__ FUNC_26 (int ) ;
 TYPE_3__* FUNC_27 (TYPE_1__*) ;
 int FUNC_28 (TYPE_1__*) ;
 int * VAR_9 ;

__attribute__((used)) static void
FUNC_29 (struct expr *VAR_10, basic_block VAR_11, int VAR_12)
{
  rtx VAR_13 = FUNC_0 (VAR_11);
  rtx VAR_14;
  rtx VAR_15 = VAR_10->reaching_reg;
  int VAR_16 = FUNC_12 (VAR_15);
  rtx VAR_17, VAR_18;

  VAR_17 = FUNC_25 (VAR_10);
  FUNC_21 (VAR_17 && FUNC_4 (VAR_17));

  VAR_18 = VAR_17;
  while (FUNC_8 (VAR_18) != VAR_3)
    VAR_18 = FUNC_8 (VAR_18);





  if (FUNC_6 (VAR_13)
      || (FUNC_9 (VAR_13)
   && (!FUNC_28 (VAR_11)
       || FUNC_27 (VAR_11)->flags & VAR_2)))
    {






      FUNC_21 (!FUNC_9 (VAR_13) || !VAR_12
    || FUNC_13 (VAR_5[VAR_11->index], VAR_10->bitmap_index)
    || FUNC_13 (VAR_9[VAR_11->index], VAR_10->bitmap_index));




      if (FUNC_3 (FUNC_11 (VAR_13)) == VAR_1
   || FUNC_3 (FUNC_11 (VAR_13)) == VAR_0)
 VAR_13 = FUNC_24 (VAR_13);
      VAR_14 = FUNC_17 (VAR_17, VAR_13);
    }



  else if (FUNC_2 (VAR_13)
    && (!FUNC_28 (VAR_11)
        || FUNC_27 (VAR_11)->flags & VAR_2))
    {
      FUNC_21 (!VAR_12
    || FUNC_13 (VAR_5[VAR_11->index], VAR_10->bitmap_index)
    || FUNC_13 (VAR_9[VAR_11->index], VAR_10->bitmap_index));




      VAR_13 = FUNC_18 (VAR_13, FUNC_1 (VAR_11));
      while (FUNC_7 (VAR_13)
      || FUNC_10 (VAR_13))
 VAR_13 = FUNC_8 (VAR_13);

      VAR_14 = FUNC_17 (VAR_17, VAR_13);
    }
  else
    VAR_14 = FUNC_16 (VAR_17, VAR_13);

  while (1)
    {
      if (FUNC_4 (VAR_17))
 {
   FUNC_15 (FUNC_11 (VAR_17), VAR_14);
   FUNC_22 (FUNC_11 (VAR_17), VAR_8, VAR_17);
 }
      if (VAR_17 == VAR_18)
 break;
      VAR_17 = FUNC_8 (VAR_17);
    }

  VAR_7++;

  if (VAR_6)
    {
      FUNC_20 (VAR_6, "PRE/HOIST: end of bb %zu, insn %d, ",
        VAR_11->index, FUNC_5 (VAR_14));
      FUNC_20 (VAR_6, "copying expression %zu to reg %d\n",
        VAR_10->bitmap_index, VAR_16);
    }
}
