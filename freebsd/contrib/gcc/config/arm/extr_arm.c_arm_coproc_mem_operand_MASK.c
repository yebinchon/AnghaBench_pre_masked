
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,int) ;
 int VAR_15 ;
 int FUNC_4 (int ,int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

int
FUNC_7 (rtx VAR_23, bool VAR_24)
{
  rtx VAR_25;


  if (! (VAR_18 || VAR_17)
      && ( FUNC_5 (VAR_16, VAR_23)
   || FUNC_5 (VAR_15, VAR_23)
   || FUNC_5 (VAR_19, VAR_23)
   || FUNC_5 (VAR_20, VAR_23)
   || FUNC_5 (VAR_21, VAR_23)
   || FUNC_5 (VAR_22, VAR_23)))
    return VAR_2;


  if (FUNC_0 (VAR_23) != VAR_4)
    return VAR_2;

  VAR_25 = FUNC_3 (VAR_23, 0);

  if (VAR_17
      && (FUNC_0 (VAR_25) == VAR_3
   || (FUNC_0 (VAR_25) == VAR_0
       && FUNC_0 (FUNC_3 (VAR_25, 0)) == VAR_5
       && FUNC_0 (FUNC_3 (FUNC_3 (VAR_25, 0), 0)) == VAR_3
       && FUNC_0 (FUNC_3 (FUNC_3 (VAR_25, 0), 1)) == VAR_1)))
    return VAR_13;


  if (FUNC_0 (VAR_25) == VAR_12)
    return FUNC_4 (VAR_25, 0);


  if (VAR_24
      && (FUNC_0 (VAR_25) == VAR_10
   || FUNC_0 (VAR_25) == VAR_7
   || FUNC_0 (VAR_25) == VAR_9
   || FUNC_0 (VAR_25) == VAR_6))
    return FUNC_4 (FUNC_3 (VAR_25, 0), 0);

  if (VAR_24
      && (FUNC_0 (VAR_25) == VAR_8 || FUNC_0 (VAR_25) == VAR_11)
      && FUNC_4 (FUNC_3 (VAR_25, 0), 0)
      && FUNC_0 (FUNC_3 (VAR_25, 1)) == VAR_5
      && FUNC_6 (FUNC_3 (FUNC_3 (VAR_25, 1), 0), FUNC_3 (VAR_25, 0)))
    VAR_25 = FUNC_3 (VAR_25, 1);




  if (FUNC_0 (VAR_25) == VAR_5
      && FUNC_0 (FUNC_3 (VAR_25, 0)) == VAR_12
      && FUNC_2 (FUNC_3 (VAR_25, 0), VAR_14)
      && FUNC_0 (FUNC_3 (VAR_25, 1)) == VAR_1
      && FUNC_1 (FUNC_3 (VAR_25, 1)) > -1024
      && FUNC_1 (FUNC_3 (VAR_25, 1)) < 1024
      && (FUNC_1 (FUNC_3 (VAR_25, 1)) & 3) == 0)
    return VAR_13;

  return VAR_2;
}
