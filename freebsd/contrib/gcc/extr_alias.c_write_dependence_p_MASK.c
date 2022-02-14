
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (scalar_t__,int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ,scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_16 (scalar_t__,scalar_t__) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_17 (rtx VAR_6, rtx VAR_7, int VAR_8)
{
  rtx VAR_9, VAR_10;
  rtx VAR_11;
  rtx VAR_12;

  if (FUNC_6 (VAR_7) && FUNC_6 (VAR_6))
    return 1;



  if (FUNC_3 (VAR_7) == VAR_1 && FUNC_2 (FUNC_8 (VAR_7, 0)) == VAR_3)
    return 1;
  if (FUNC_3 (VAR_6) == VAR_1 && FUNC_2 (FUNC_8 (VAR_6, 0)) == VAR_3)
    return 1;
  if (FUNC_4 (VAR_7) == VAR_0
      || FUNC_4 (VAR_6) == VAR_0)
    return 1;

  if (FUNC_1 (VAR_7, VAR_6))
    return 0;


  if (!VAR_8 && FUNC_5 (VAR_6))
    return 0;

  if (FUNC_16 (VAR_7, VAR_6))
    return 0;

  VAR_9 = FUNC_14 (FUNC_8 (VAR_7, 0));
  VAR_10 = FUNC_14 (FUNC_8 (VAR_6, 0));

  if (! VAR_8)
    {
      VAR_12 = FUNC_12 (VAR_10);
      if (VAR_12 && (FUNC_2 (VAR_12) == VAR_2
     || (FUNC_2 (VAR_12) == VAR_4
         && FUNC_0 (VAR_12))))
 return 0;
    }

  if (! FUNC_10 (VAR_9, VAR_10, FUNC_3 (VAR_7),
     FUNC_3 (VAR_6)))
    return 0;

  VAR_9 = FUNC_11 (VAR_9);
  VAR_10 = FUNC_11 (VAR_10);

  if (!FUNC_15 (FUNC_7 (VAR_6), VAR_10,
      FUNC_7 (VAR_7), VAR_9, 0))
    return 0;

  VAR_11
    = FUNC_13 (VAR_6, VAR_7, VAR_10, VAR_9,
      VAR_5);

  return (!(VAR_11 == VAR_6 && !FUNC_9 (VAR_7))
   && !(VAR_11 == VAR_7 && !FUNC_9 (VAR_6)));
}
