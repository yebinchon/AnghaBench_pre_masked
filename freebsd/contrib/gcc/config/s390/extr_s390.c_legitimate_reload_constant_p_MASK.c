
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int,int ,int) ;
 scalar_t__ FUNC_8 (int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_10 ;

bool
FUNC_10 (rtx VAR_11)
{

  if (FUNC_4 (VAR_11) == VAR_1
      && FUNC_3 (FUNC_5 (VAR_11)))
    return 1;


  if (FUNC_4 (VAR_11) == VAR_1
      && (FUNC_1 (FUNC_5 (VAR_11)) || FUNC_2 (FUNC_5 (VAR_11))))
    return 1;


  if (VAR_7
      && FUNC_4 (VAR_11) == VAR_1
      && FUNC_9 (FUNC_5 (VAR_11), VAR_10) == FUNC_5 (VAR_11)
      && FUNC_8 (VAR_11, VAR_10, VAR_3, 0) >= 0)
  return 1;

  if (VAR_6
      && FUNC_4 (VAR_11) == VAR_1
      && FUNC_9 (FUNC_5 (VAR_11), VAR_10) == FUNC_5 (VAR_11)
      && FUNC_8 (VAR_11, VAR_10, VAR_4, 0) >= 0)
    return 1;


  if (VAR_5
      && FUNC_6 (VAR_11, VAR_9))
    return 1;


  if (FUNC_4 (VAR_11) == VAR_0
      && FUNC_0 (VAR_11, 'G', "G"))
    return 1;


  if (FUNC_4 (VAR_11) == VAR_1
      && FUNC_9 (FUNC_5 (VAR_11), VAR_10) != FUNC_5 (VAR_11))
    {
      enum machine_mode VAR_12 = VAR_10 == VAR_4 ? VAR_2 : VAR_8;
      rtx VAR_13 = FUNC_7 (VAR_11, 0, 0, VAR_12);
      rtx VAR_14 = FUNC_7 (VAR_11, 1, 0, VAR_12);
      return FUNC_10 (VAR_13)
      && FUNC_10 (VAR_14);
    }


  return 0;
}
