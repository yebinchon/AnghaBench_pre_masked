
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
struct TYPE_7__ {TYPE_1__* machine; } ;
struct TYPE_6__ {int num_gprs; int num_fprs; int stack_words; } ;
struct TYPE_5__ {int varargs_size; } ;
typedef TYPE_2__ CUMULATIVE_ARGS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 TYPE_4__* VAR_11 ;
 int VAR_12 ;
 TYPE_2__ VAR_13 ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;

void
FUNC_10 (tree VAR_16, rtx VAR_17)
{
  if (VAR_1)
    {
      const CUMULATIVE_ARGS *VAR_18;
      tree VAR_19, VAR_20, VAR_21, VAR_22, VAR_23;
      tree VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
      tree VAR_29;
      int VAR_30;
      int VAR_31;
      int VAR_32;

      VAR_18 = &VAR_13;
      VAR_30
 = (VAR_3 - VAR_18->num_gprs) * VAR_9;
      VAR_31
 = (VAR_3 - VAR_18->num_fprs) * VAR_7;

      VAR_19 = FUNC_2 (VAR_14);
      VAR_20 = FUNC_0 (VAR_19);
      VAR_21 = FUNC_0 (VAR_20);
      VAR_22 = FUNC_0 (VAR_21);
      VAR_23 = FUNC_0 (VAR_22);

      VAR_24 = FUNC_4 (VAR_0, FUNC_1 (VAR_19), VAR_16, VAR_19,
       VAR_5);
      VAR_25 = FUNC_4 (VAR_0, FUNC_1 (VAR_20), VAR_16, VAR_20,
       VAR_5);
      VAR_26 = FUNC_4 (VAR_0, FUNC_1 (VAR_21), VAR_16, VAR_21,
       VAR_5);
      VAR_27 = FUNC_4 (VAR_0, FUNC_1 (VAR_22), VAR_16, VAR_22,
       VAR_5);
      VAR_28 = FUNC_4 (VAR_0, FUNC_1 (VAR_23), VAR_16, VAR_23,
       VAR_5);




      VAR_29 = FUNC_7 (FUNC_1 (VAR_24), VAR_15);
      if (VAR_18->stack_words > 0)
 VAR_29 = FUNC_3 (VAR_6, FUNC_1 (VAR_24), VAR_29,
      FUNC_5 (VAR_5,
       VAR_18->stack_words * VAR_9));
      VAR_29 = FUNC_3 (VAR_4, FUNC_1 (VAR_24), VAR_24, VAR_29);
      FUNC_6 (VAR_29, VAR_12, VAR_10, VAR_2);


      VAR_29 = FUNC_7 (FUNC_1 (VAR_25), VAR_15);
      VAR_29 = FUNC_3 (VAR_4, FUNC_1 (VAR_25), VAR_25, VAR_29);
      FUNC_6 (VAR_29, VAR_12, VAR_10, VAR_2);




      VAR_29 = FUNC_7 (FUNC_1 (VAR_26), VAR_15);
      VAR_32 = VAR_30 + VAR_8 - 1;
      VAR_32 &= ~(VAR_8 - 1);
      if (VAR_32)
 VAR_29 = FUNC_3 (VAR_6, FUNC_1 (VAR_26), VAR_29,
      FUNC_5 (VAR_5, -VAR_32));
      VAR_29 = FUNC_3 (VAR_4, FUNC_1 (VAR_26), VAR_26, VAR_29);
      FUNC_6 (VAR_29, VAR_12, VAR_10, VAR_2);



      VAR_29 = FUNC_3 (VAR_4, FUNC_1 (VAR_27), VAR_27,
    FUNC_5 (VAR_5, VAR_30));
      FUNC_6 (VAR_29, VAR_12, VAR_10, VAR_2);



      VAR_29 = FUNC_3 (VAR_4, FUNC_1 (VAR_28), VAR_28,
    FUNC_5 (VAR_5, VAR_31));
      FUNC_6 (VAR_29, VAR_12, VAR_10, VAR_2);
    }
  else
    {
      VAR_17 = FUNC_8 (VAR_17, -VAR_11->machine->varargs_size);
      FUNC_9 (VAR_16, VAR_17);
    }
}
