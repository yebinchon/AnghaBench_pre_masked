
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__,int,int) ;
 int FUNC_8 (scalar_t__,int) ;

__attribute__((used)) static int
FUNC_9 (rtx VAR_9, rtx VAR_10)
{
  enum rtx_code VAR_11 = FUNC_0 (VAR_9);
  const char *VAR_12;
  int VAR_13;

  if (VAR_11 == VAR_1)
    {
      rtx VAR_14 = FUNC_6 (VAR_9, 0);
      if ((FUNC_0 (VAR_14) == VAR_6
    || FUNC_0 (VAR_14) == VAR_3
    || FUNC_0 (VAR_14) == VAR_7
    || FUNC_0 (VAR_14) == VAR_4)
   && FUNC_6 (VAR_14, 0) == VAR_10)
 return FUNC_2 (FUNC_1 (VAR_9));
      else if ((FUNC_0 (VAR_14) == VAR_8
  || FUNC_0 (VAR_14) == VAR_5)
        && FUNC_0 (FUNC_6 (VAR_14, 1)) == VAR_2
        && FUNC_6 (VAR_14, 0) == FUNC_6 (FUNC_6 (VAR_14, 1), 0)
        && FUNC_6 (VAR_14, 0) == VAR_10
        && FUNC_0 (FUNC_6 (FUNC_6 (VAR_14, 1), 1)) == VAR_0)
 {
   VAR_13 = FUNC_5 (FUNC_6 (FUNC_6 (VAR_14, 1), 1));
   return VAR_13 < 0 ? -VAR_13 : VAR_13;
 }
    }

  VAR_12 = FUNC_3 (VAR_11);
  for (VAR_13 = FUNC_4 (VAR_11) - 1; VAR_13 >= 0; VAR_13--)
    {
      if (VAR_12[VAR_13] == 'e')
 {
   int VAR_15 = FUNC_9 (FUNC_6 (VAR_9, VAR_13), VAR_10);
   if (VAR_15 != 0)
     return VAR_15;
 }
      if (VAR_12[VAR_13] == 'E')
 {
   int VAR_16;
   for (VAR_16 = FUNC_8 (VAR_9, VAR_13) - 1; VAR_16 >= 0; VAR_16--)
     {
       int VAR_17 = FUNC_9 (FUNC_7 (VAR_9, VAR_13, VAR_16), VAR_10);
       if (VAR_17 != 0)
  return VAR_17;
     }
 }
    }

  return 0;
}
