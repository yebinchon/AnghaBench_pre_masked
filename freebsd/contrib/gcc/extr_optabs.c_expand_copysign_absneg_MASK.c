
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int *,int,int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int * FUNC_7 (int,int ,int *,int ,int *,int,int ) ;
 int * FUNC_8 (int,int ,int *,int *,int ) ;
 int * FUNC_9 () ;
 int * FUNC_10 (int,int *) ;
 int FUNC_11 (int,int,int) ;
 int FUNC_12 (int) ;
 int VAR_13 ;
 int * FUNC_13 (int *,int,int) ;
 int * FUNC_14 (int ,int,int *,int) ;
 int VAR_14 ;

__attribute__((used)) static rtx
FUNC_15 (enum machine_mode VAR_15, rtx VAR_16, rtx VAR_17, rtx VAR_18,
          int VAR_19, bool VAR_20)
{
  enum machine_mode VAR_21;
  HOST_WIDE_INT VAR_22, VAR_23;
  int VAR_24;
  rtx VAR_25;

  if (VAR_18 == VAR_17)
    VAR_18 = VAR_7;

  if (!VAR_20)
    {
      VAR_16 = FUNC_8 (VAR_15, VAR_10, VAR_16, VAR_18, 0);
      if (VAR_16 == ((void*)0))
 return VAR_7;
      VAR_18 = VAR_16;
    }
  else
    {
      if (VAR_18 == VAR_7)
        VAR_18 = FUNC_3 (VAR_16);
      else
 FUNC_6 (VAR_18, VAR_16);
    }

  if (FUNC_2 (VAR_15) <= VAR_9)
    {
      VAR_21 = FUNC_12 (VAR_15);
      if (VAR_21 == VAR_1)
 return VAR_7;
      VAR_17 = FUNC_10 (VAR_21, VAR_17);
    }
  else
    {
      VAR_21 = VAR_14;
      if (VAR_4)
 VAR_24 = (FUNC_1 (VAR_15) - VAR_19) / VAR_0;
      else
 VAR_24 = VAR_19 / VAR_0;
      VAR_19 = VAR_19 % VAR_0;
      VAR_17 = FUNC_13 (VAR_17, VAR_24, VAR_15);
    }

  if (VAR_19 < VAR_5)
    {
      VAR_22 = 0;
      VAR_23 = (HOST_WIDE_INT) 1 << VAR_19;
    }
  else
    {
      VAR_22 = (HOST_WIDE_INT) 1 << (VAR_19 - VAR_5);
      VAR_23 = 0;
    }

  VAR_17 = FUNC_7 (VAR_21, VAR_11, VAR_17,
        FUNC_11 (VAR_23, VAR_22, VAR_21),
        VAR_7, 1, VAR_8);

  VAR_25 = FUNC_9 ();
  FUNC_4 (VAR_17, VAR_12, VAR_3, VAR_7, VAR_21, 1, VAR_25);

  if (FUNC_0 (VAR_16) == VAR_2)
    VAR_16 = FUNC_14 (VAR_6, VAR_15, VAR_16, VAR_15);
  else
    VAR_16 = FUNC_8 (VAR_15, VAR_13, VAR_16, VAR_18, 0);
  if (VAR_16 != VAR_18)
    FUNC_6 (VAR_18, VAR_16);

  FUNC_5 (VAR_25);

  return VAR_18;
}
