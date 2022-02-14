
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_3__ {scalar_t__ (* type_for_size ) (scalar_t__,int) ;} ;
struct TYPE_4__ {TYPE_1__ types; } ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int ,int,int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,int*,int*,int*,int) ;
 TYPE_2__ VAR_8 ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,int) ;

__attribute__((used)) static tree
FUNC_15 (tree VAR_9, HOST_WIDE_INT *VAR_10,
   HOST_WIDE_INT *VAR_11, enum machine_mode *VAR_12,
   int *VAR_13, int *VAR_14,
   tree *VAR_15, tree *VAR_16)
{
  tree VAR_17 = 0;
  tree VAR_18 = 0;
  tree VAR_19, VAR_20, VAR_21;
  tree VAR_22;
  unsigned int VAR_23;




  if (! FUNC_0 (FUNC_4 (VAR_9)))
    return 0;




  if (FUNC_2 (VAR_9) == VAR_5
      || FUNC_2 (VAR_9) == VAR_1
      || FUNC_2 (VAR_9) == VAR_4)
    VAR_17 = FUNC_4 (VAR_9);
  FUNC_1 (VAR_9);

  if (FUNC_2 (VAR_9) == VAR_0)
    {
      VAR_18 = FUNC_3 (VAR_9, 1);
      VAR_9 = FUNC_3 (VAR_9, 0);
      FUNC_1 (VAR_9); FUNC_1 (VAR_18);
      if (FUNC_2 (VAR_18) != VAR_2)
 return 0;
    }

  VAR_20 = FUNC_12 (VAR_9, VAR_10, VAR_11, &VAR_21, VAR_12,
          VAR_13, VAR_14, 0);
  if ((VAR_20 == VAR_9 && VAR_18 == 0)
      || *VAR_10 < 0 || VAR_21 != 0
      || FUNC_2 (VAR_20) == VAR_6)
    return 0;




  if (VAR_17 && *VAR_10 == FUNC_5 (VAR_17))
    *VAR_13 = FUNC_6 (VAR_17);


  VAR_22 = VAR_8.types.type_for_size (*VAR_10, 1);
  VAR_23 = FUNC_5 (VAR_22);

  VAR_19 = FUNC_7 (VAR_22, -1);
  VAR_19 = FUNC_11 (VAR_19, 0, 0, 0);

  VAR_19 = FUNC_8 (VAR_3, VAR_19, FUNC_13 (VAR_23 - *VAR_10), 0);
  VAR_19 = FUNC_8 (VAR_7, VAR_19, FUNC_13 (VAR_23 - *VAR_10), 0);


  if (VAR_18 != 0)
    VAR_19 = FUNC_9 (VAR_0, VAR_22,
   FUNC_10 (VAR_22, VAR_18), VAR_19);

  *VAR_15 = VAR_19;
  *VAR_16 = VAR_18;
  return VAR_20;
}
