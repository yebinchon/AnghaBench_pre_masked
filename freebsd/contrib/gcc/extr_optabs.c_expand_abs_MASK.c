
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,int ,int ,int,int ,int ,scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_10 (int,int ,scalar_t__,scalar_t__,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_6 ;
 int VAR_7 ;

rtx
FUNC_13 (enum machine_mode VAR_8, rtx VAR_9, rtx VAR_10,
     int VAR_11, int VAR_12)
{
  rtx VAR_13, VAR_14;

  if (! VAR_5)
    VAR_11 = 1;

  VAR_13 = FUNC_9 (VAR_8, VAR_9, VAR_10, VAR_11);
  if (VAR_13 != 0)
    return VAR_13;





  if (VAR_9 == VAR_10 && FUNC_5 (VAR_9)
      && FUNC_4 (VAR_9) >= VAR_0)
    VAR_12 = 1;

  VAR_14 = FUNC_11 ();
  if (VAR_10 == 0 || ! VAR_12
      || FUNC_1 (VAR_10) != VAR_8
      || (FUNC_2 (VAR_10) && FUNC_3 (VAR_10))
      || (FUNC_5 (VAR_10)
   && FUNC_4 (VAR_10) < VAR_0))
    VAR_10 = FUNC_12 (VAR_8);

  FUNC_8 (VAR_10, VAR_9);
  VAR_2;

  FUNC_6 (VAR_10, FUNC_0 (VAR_8), VAR_1, 0, VAR_8,
      VAR_3, VAR_3, VAR_14);

  VAR_9 = FUNC_10 (VAR_8, VAR_11 ? VAR_6 : VAR_7,
                     VAR_10, VAR_10, 0);
  if (VAR_9 != VAR_10)
    FUNC_8 (VAR_10, VAR_9);
  FUNC_7 (VAR_14);
  VAR_4;
  return VAR_10;
}
