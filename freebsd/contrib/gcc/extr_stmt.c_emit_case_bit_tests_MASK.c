
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct case_node {int high; int low; int code_label; struct case_node* right; } ;
struct case_bit_test {scalar_t__ label; unsigned int hi; unsigned int lo; int bits; } ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef struct case_node* case_node_ptr ;
typedef unsigned int HOST_WIDE_INT ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__,scalar_t__,int ,int ,int,int,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int,int ,scalar_t__,scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (unsigned int,unsigned int,int) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct case_bit_test*,unsigned int,int,int ) ;
 unsigned int FUNC_13 (int ,int) ;
 int VAR_13 ;

__attribute__((used)) static void
FUNC_14 (tree VAR_14, tree VAR_15, tree VAR_16,
       tree VAR_17, case_node_ptr VAR_18, rtx VAR_19)
{
  struct case_bit_test VAR_20[VAR_3];
  enum machine_mode VAR_21;
  rtx VAR_22, VAR_23, VAR_24;
  unsigned int VAR_25,VAR_26,VAR_27,VAR_28;
  struct case_node *VAR_29;
  unsigned int VAR_30;

  VAR_30 = 0;
  for (VAR_29 = VAR_18; VAR_29; VAR_29 = VAR_29->right)
    {
      VAR_24 = FUNC_11 (VAR_29->code_label);
      for (VAR_25 = 0; VAR_25 < VAR_30; VAR_25++)
 if (VAR_24 == VAR_20[VAR_25].label)
   break;

      if (VAR_25 == VAR_30)
 {
   FUNC_9 (VAR_30 < VAR_3);
   VAR_20[VAR_25].hi = 0;
   VAR_20[VAR_25].lo = 0;
   VAR_20[VAR_25].label = VAR_24;
   VAR_20[VAR_25].bits = 1;
   VAR_30++;
 }
      else
        VAR_20[VAR_25].bits++;

      VAR_27 = FUNC_13 (FUNC_7 (VAR_4, VAR_14,
          VAR_29->low, VAR_16), 1);
      VAR_28 = FUNC_13 (FUNC_7 (VAR_4, VAR_14,
          VAR_29->high, VAR_16), 1);
      for (VAR_26 = VAR_27; VAR_26 <= VAR_28; VAR_26++)
        if (VAR_26 >= VAR_2)
   VAR_20[VAR_25].hi |= (HOST_WIDE_INT) 1 << (VAR_26 - VAR_1);
 else
   VAR_20[VAR_25].lo |= (HOST_WIDE_INT) 1 << VAR_26;
    }

  FUNC_12 (VAR_20, VAR_30, sizeof(*VAR_20), VAR_10);

  VAR_15 = FUNC_7 (VAR_4, VAR_14,
       FUNC_8 (VAR_14, VAR_15),
       FUNC_8 (VAR_14, VAR_16));
  VAR_23 = FUNC_6 (VAR_15);
  FUNC_2 ();

  VAR_21 = FUNC_0 (VAR_14);
  VAR_22 = FUNC_6 (VAR_17);
  FUNC_3 (VAR_23, VAR_22, VAR_0, VAR_6, VAR_21, 1,
      VAR_19);

  VAR_23 = FUNC_1 (VAR_13, VAR_23, 0);
  VAR_23 = FUNC_5 (VAR_13, VAR_9, VAR_12,
   VAR_23, VAR_6, 1, VAR_7);

  for (VAR_25 = 0; VAR_25 < VAR_30; VAR_25++)
    {
      VAR_22 = FUNC_10 (VAR_20[VAR_25].lo, VAR_20[VAR_25].hi, VAR_13);
      VAR_22 = FUNC_5 (VAR_13, VAR_8, VAR_23, VAR_22,
      VAR_6, 1, VAR_7);
      FUNC_3 (VAR_22, VAR_11, VAR_5, VAR_6,
          VAR_13, 1, VAR_20[VAR_25].label);
    }

  FUNC_4 (VAR_19);
}
