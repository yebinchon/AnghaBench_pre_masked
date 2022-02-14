
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef scalar_t__ HOST_WIDE_INT ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,scalar_t__) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int *,scalar_t__*) ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int VAR_2 ;
 int FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ,int) ;
 scalar_t__ FUNC_17 (int ,int) ;

__attribute__((used)) static void
FUNC_18 (enum machine_mode VAR_3, rtx VAR_4, rtx VAR_5)
{
  rtx VAR_6;
  HOST_WIDE_INT VAR_7;


  if (FUNC_16 (VAR_5, VAR_3))
    {
      FUNC_11 (VAR_4, VAR_4, FUNC_0 (VAR_5));
      return;
    }


  if (FUNC_17 (VAR_5, VAR_3))
    {
      FUNC_3 (FUNC_6 (VAR_1, VAR_4, FUNC_13 (VAR_4, VAR_5)));
      return;
    }

  if (FUNC_14 (VAR_5))
    {
      FUNC_4 (VAR_4, FUNC_10 (VAR_5));
      return;
    }




  FUNC_12 (VAR_5, &VAR_6, &VAR_7);
  if (!VAR_0
      && VAR_7 != 0
      && (!VAR_2 || FUNC_1 (VAR_7)))
    {
      VAR_6 = FUNC_9 (VAR_4, VAR_6);
      FUNC_4 (VAR_4, FUNC_8 (0, VAR_6, VAR_7));
      return;
    }

  VAR_5 = FUNC_5 (VAR_3, VAR_5);



  if (!FUNC_7 (VAR_5, VAR_1))
    VAR_5 = FUNC_15 (VAR_5, FUNC_13 (VAR_4, FUNC_2 (VAR_5, 0)));
  FUNC_4 (VAR_4, VAR_5);
}
