
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 unsigned int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 size_t FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 unsigned int** VAR_1 ;

int
FUNC_7 (rtx VAR_2, enum rtx_code VAR_3, unsigned int VAR_4)
{
  rtx VAR_5;




  if (VAR_4 >= VAR_0
      || !FUNC_1 (VAR_2) )
    return 0;

  for (VAR_5 = FUNC_0 (VAR_2); VAR_5; VAR_5 = FUNC_6 (VAR_5, 1))
    {
      unsigned int VAR_6;
      rtx VAR_7, VAR_8;

      if (FUNC_2 (VAR_7 = FUNC_6 (VAR_5, 0)) == VAR_3
   && FUNC_5 (VAR_8 = FUNC_6 (VAR_7, 0))
   && (VAR_6 = FUNC_4 (VAR_8)) <= VAR_4
   && VAR_6 + VAR_1[VAR_6][FUNC_3 (VAR_8)] > VAR_4)
 return 1;
    }

  return 0;
}
