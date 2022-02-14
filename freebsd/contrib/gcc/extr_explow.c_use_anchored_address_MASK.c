
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int (* use_anchors_for_symbol_p ) (int ) ;} ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,scalar_t__,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,scalar_t__) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 TYPE_1__ VAR_6 ;

rtx
FUNC_16 (rtx VAR_7)
{
  rtx VAR_8;
  HOST_WIDE_INT VAR_9;

  if (!VAR_5)
    return VAR_7;

  if (!FUNC_3 (VAR_7))
    return VAR_7;


  VAR_8 = FUNC_9 (VAR_7, 0);
  VAR_9 = 0;
  if (FUNC_0 (VAR_8) == VAR_0
      && FUNC_0 (FUNC_9 (VAR_8, 0)) == VAR_2
      && FUNC_0 (FUNC_9 (FUNC_9 (VAR_8, 0), 1)) == VAR_1)
    {
      VAR_9 += FUNC_2 (FUNC_9 (FUNC_9 (VAR_8, 0), 1));
      VAR_8 = FUNC_9 (FUNC_9 (VAR_8, 0), 0);
    }


  if (FUNC_0 (VAR_8) != VAR_3
      || !FUNC_7 (VAR_8)
      || FUNC_4 (VAR_8)
      || FUNC_5 (VAR_8) == ((void*)0)
      || !VAR_6.use_anchors_for_symbol_p (VAR_8))
    return VAR_7;


  FUNC_12 (VAR_8);


  VAR_9 += FUNC_6 (VAR_8);
  VAR_8 = FUNC_11 (FUNC_5 (VAR_8), VAR_9,
        FUNC_8 (VAR_8));


  VAR_9 -= FUNC_6 (VAR_8);




  if (!VAR_4)
    VAR_8 = FUNC_10 (FUNC_1 (VAR_8), VAR_8);

  return FUNC_14 (VAR_7, FUNC_13 (VAR_8, VAR_9));
}
