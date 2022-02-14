
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__,int,int) ;
 int FUNC_6 (scalar_t__,int) ;
 int VAR_4 ;

rtx
FUNC_7 (rtx VAR_5, rtx VAR_6, HOST_WIDE_INT VAR_7)
{
  enum rtx_code VAR_8 = FUNC_0 (VAR_5);
  const char * const VAR_9 = FUNC_1 (VAR_8);
  int VAR_10;
  rtx VAR_11 = 0;
  rtx VAR_12;

  if (VAR_8 == VAR_1 && FUNC_4 (VAR_5, 0) == VAR_6 && VAR_7 == 0)
    return VAR_5;

  if (VAR_8 == VAR_1 && FUNC_0 (FUNC_4 (VAR_5, 0)) == VAR_2
      && FUNC_4 (FUNC_4 (VAR_5, 0), 0) == VAR_6
      && FUNC_0 (FUNC_4 (FUNC_4 (VAR_5, 0), 1)) == VAR_0
      && FUNC_3 (FUNC_4 (FUNC_4 (VAR_5, 0), 1)) == VAR_7)
    return VAR_5;

  if (VAR_8 == VAR_3 || VAR_8 == VAR_4)
    {


      if (FUNC_7 (FUNC_4 (VAR_5, 0), VAR_6, 0) != 0)
 return (rtx) (size_t) 1;
    }

  if (VAR_5 == VAR_6)
    return (rtx) (size_t) 1;

  for (VAR_10 = FUNC_2 (VAR_8) - 1; VAR_10 >= 0; VAR_10--)
    {
      if (VAR_9[VAR_10] == 'e')
 {
   VAR_12 = FUNC_7 (FUNC_4 (VAR_5, VAR_10), VAR_6, VAR_7);
   if (VAR_11 == 0)
     VAR_11 = VAR_12;
   else if (VAR_12 != 0)
     return (rtx) (size_t) 1;
 }
      else if (VAR_9[VAR_10] == 'E')
 {
   int VAR_13;
   for (VAR_13 = FUNC_6 (VAR_5, VAR_10) - 1; VAR_13 >= 0; VAR_13--)
     {
       VAR_12 = FUNC_7 (FUNC_5 (VAR_5, VAR_10, VAR_13), VAR_6, VAR_7);
       if (VAR_11 == 0)
  VAR_11 = VAR_12;
       else if (VAR_12 != 0)
  return (rtx) (size_t) 1;
     }
 }
    }

  return VAR_11;
}
