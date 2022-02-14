
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef scalar_t__ RTX_CODE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_9 (rtx VAR_2)
{
  RTX_CODE VAR_3;
  int VAR_4, VAR_5;
  const char *VAR_6;

  if (VAR_2 == VAR_1)
    return 0;

  VAR_3 = FUNC_0 (VAR_2);

  if (VAR_3 == VAR_0)
    return FUNC_8 (FUNC_5 (VAR_2, 0),
       FUNC_2 (FUNC_1 (VAR_2)));


  VAR_6 = FUNC_3 (VAR_3);
  for (VAR_4 = 0; VAR_4 < FUNC_4 (VAR_3); VAR_4++, VAR_6++)
    {
      if (*VAR_6 == 'e')
 {
   if (FUNC_9 (FUNC_5 (VAR_2, VAR_4)))
     return 1;
 }
      else if (*VAR_6 == 'E')
 {
   for (VAR_5 = 0; VAR_5 < FUNC_7 (VAR_2, VAR_4); VAR_5++)
     if (FUNC_9 (FUNC_6 (VAR_2, VAR_4, VAR_5)))
       return 1;
 }
    }
  return 0;
}
