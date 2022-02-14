
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef scalar_t__ RTX_CODE ;


 scalar_t__ FUNC_0 (int *) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int * FUNC_3 (int *,int) ;
 int* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int * FUNC_6 (int *,int,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 () ;

__attribute__((used)) static rtx
FUNC_9 (rtx VAR_1, int VAR_2)
{
  const char *VAR_3;
  RTX_CODE VAR_4;
  int VAR_5, VAR_6, VAR_7;
  rtx VAR_8;

  VAR_4 = FUNC_0 (VAR_1);
  if (VAR_4 == VAR_0
      && (FUNC_4 (VAR_1, 2)[0] == '0' + VAR_2
   || (FUNC_4 (VAR_1, 2)[0] == '%'
       && FUNC_4 (VAR_1, 2)[1] == '0' + VAR_2)))
    return VAR_1;

  VAR_3 = FUNC_1 (VAR_4);
  VAR_7 = FUNC_2 (VAR_4);
  for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
    {
      switch (VAR_3[VAR_5])
 {
 case 'e': case 'u':
   if ((VAR_8 = FUNC_9 (FUNC_3 (VAR_1, VAR_5), VAR_2)))
     return VAR_8;
   break;

 case 'V':
   if (! FUNC_5 (VAR_1, VAR_5))
     break;


 case 'E':
   for (VAR_6 = 0; VAR_6 < FUNC_7 (VAR_1, VAR_5); VAR_6++)
     if ((VAR_8 = FUNC_9 (FUNC_6 (VAR_1, VAR_5, VAR_6), VAR_2)))
       return VAR_8;
   break;

 case 'i': case 'w': case '0': case 's':
   break;

 default:
   FUNC_8 ();
 }
    }

  return ((void*)0);
}
