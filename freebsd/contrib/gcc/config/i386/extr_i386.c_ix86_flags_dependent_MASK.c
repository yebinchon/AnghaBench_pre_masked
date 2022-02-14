
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static int
FUNC_8 (rtx VAR_9, rtx VAR_10, enum attr_type VAR_11)
{
  rtx VAR_12, VAR_13;


  if (VAR_11 != VAR_8
      && VAR_11 != VAR_7
      && VAR_11 != VAR_5
      && VAR_11 != VAR_6)
    return 0;

  if ((VAR_12 = FUNC_7 (VAR_10)) != 0)
    {
      VAR_12 = FUNC_3 (VAR_12);
      VAR_13 = VAR_1;
    }
  else if (FUNC_0 (FUNC_1 (VAR_10)) == VAR_2
    && FUNC_5 (FUNC_1 (VAR_10), 0) == 2
    && FUNC_0 (FUNC_4 (FUNC_1 (VAR_10), 0, 0)) == VAR_4
    && FUNC_0 (FUNC_4 (FUNC_1 (VAR_10), 0, 1)) == VAR_4)
    {
      VAR_12 = FUNC_3 (FUNC_4 (FUNC_1 (VAR_10), 0, 0));
      VAR_13 = FUNC_3 (FUNC_4 (FUNC_1 (VAR_10), 0, 0));
    }
  else
    return 0;

  if (FUNC_0 (VAR_12) != VAR_3 || FUNC_2 (VAR_12) != VAR_0)
    return 0;



  if (!FUNC_6 (VAR_12, FUNC_1 (VAR_9)))
    return 0;

  if (VAR_13 && FUNC_6 (VAR_13, FUNC_1 (VAR_9)))
    return 0;

  return 1;
}
