
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_4__ {TYPE_1__* handlers; } ;
struct TYPE_3__ {int libfunc; } ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int ,int ,int ,int,int,int ,int,int ,int) ;
 int FUNC_12 (int ,int ,int,int ) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,int ,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_17 (int) ;
 TYPE_2__* VAR_11 ;
 int FUNC_18 (int ,int ,int ,int ) ;

__attribute__((used)) static rtx
FUNC_19 (tree VAR_12, rtx VAR_13, rtx VAR_14)
{
  tree VAR_15 = FUNC_6 (VAR_12, 1);
  tree VAR_16, VAR_17;
  rtx VAR_18, VAR_19;
  enum machine_mode VAR_20;
  enum machine_mode VAR_21;

  if (! FUNC_18 (VAR_15, VAR_7, VAR_1, VAR_8))
    return 0;

  VAR_16 = FUNC_8 (VAR_15);
  VAR_17 = FUNC_8 (FUNC_1 (VAR_15));
  VAR_20 = FUNC_9 (FUNC_7 (VAR_12));



  if (FUNC_2 (VAR_17) == VAR_0
      && ! FUNC_3 (VAR_17))
    {
      HOST_WIDE_INT VAR_22 = FUNC_5 (VAR_17);



      if ((FUNC_4 (VAR_17) == 0
    || FUNC_4 (VAR_17) == -1)
   && ((VAR_22 >= -1 && VAR_22 <= 2)
       || (! VAR_10
    && FUNC_17 (VAR_22) <= VAR_6)))
 {
   VAR_18 = FUNC_12 (VAR_16, VAR_14, VAR_9, 0);
   VAR_18 = FUNC_14 (VAR_20, VAR_18);
   return FUNC_13 (VAR_18, VAR_20, VAR_22);
 }
    }




  VAR_21 = FUNC_16 (VAR_2, VAR_4, 0);

  if (VAR_13 == VAR_5)
    VAR_13 = FUNC_15 (VAR_20);

  VAR_18 = FUNC_12 (VAR_16, VAR_14, VAR_20, 0);
  if (FUNC_0 (VAR_18) != VAR_20)
    VAR_18 = FUNC_10 (VAR_20, VAR_18, 0);
  VAR_19 = FUNC_12 (VAR_17, 0, VAR_21, 0);
  if (FUNC_0 (VAR_19) != VAR_21)
    VAR_19 = FUNC_10 (VAR_21, VAR_19, 0);

  VAR_13 = FUNC_11 (VAR_11->handlers[(int) VAR_20].libfunc,
        VAR_13, VAR_3, VAR_20, 2,
        VAR_18, VAR_20, VAR_19, VAR_21);

  return VAR_13;
}
