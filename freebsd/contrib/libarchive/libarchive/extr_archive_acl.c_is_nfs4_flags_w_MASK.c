
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_0(const wchar_t *VAR_7, const wchar_t *VAR_8, int *VAR_9)
{
 const wchar_t *VAR_10 = VAR_7;

 while (VAR_10 < VAR_8) {
  switch(*VAR_10++) {
  case L'f':
   *VAR_9 |= VAR_2;
   break;
  case L'd':
   *VAR_9 |= VAR_0;
   break;
  case L'i':
   *VAR_9 |= VAR_4;
   break;
  case L'n':
   *VAR_9 |=
       VAR_5;
   break;
  case L'S':
   *VAR_9 |= VAR_6;
   break;
  case L'F':
   *VAR_9 |= VAR_1;
   break;
  case L'I':
   *VAR_9 |= VAR_3;
   break;
  case L'-':
   break;
  default:
   return (0);
  }
 }
 return (1);
}
