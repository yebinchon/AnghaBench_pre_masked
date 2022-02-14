
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef scalar_t__ RTX_CODE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int,int) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 () ;

__attribute__((used)) static rtx
FUNC_9 (rtx VAR_5, int VAR_6, rtx VAR_7)
{
  const char *VAR_8;
  RTX_CODE VAR_9;
  int VAR_10, VAR_11, VAR_12;
  rtx VAR_13;

  if (VAR_5 == VAR_7)
    return VAR_7;

  VAR_9 = FUNC_0 (VAR_5);
  if ((VAR_9 == VAR_3
       || VAR_9 == VAR_0
       || VAR_9 == VAR_1
       || VAR_9 == VAR_2)
      && FUNC_4 (VAR_5, 0) == VAR_6)
    return VAR_5;

  VAR_8 = FUNC_1 (VAR_9);
  VAR_12 = FUNC_2 (VAR_9);
  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++)
    {
      switch (VAR_8[VAR_10])
 {
 case 'e': case 'u':
   if ((VAR_13 = FUNC_9 (FUNC_3 (VAR_5, VAR_10), VAR_6, VAR_7)) != VAR_4)
     return VAR_13;
   break;

 case 'V':
   if (! FUNC_5 (VAR_5, VAR_10))
     break;


 case 'E':
   for (VAR_11 = 0; VAR_11 < FUNC_7 (VAR_5, VAR_10); VAR_11++)
     if ((VAR_13 = FUNC_9 (FUNC_6 (VAR_5, VAR_10, VAR_11), VAR_6, VAR_7))
  != VAR_4)
       return VAR_13;
   break;

 case 'i': case 'w': case '0': case 's':
   break;

 default:
   FUNC_8 ();
 }
    }

  return ((void*)0);
}
