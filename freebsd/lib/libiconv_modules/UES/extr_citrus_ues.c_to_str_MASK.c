
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 () ;
 int * VAR_3 ;

__attribute__((used)) static __inline int
FUNC_1(char *VAR_4, wchar_t VAR_5, int VAR_6)
{
 char *VAR_7;

 VAR_7 = VAR_4;
 *VAR_7++ = VAR_0;
 switch (VAR_6) {
 case 129:
  *VAR_7++ = VAR_1;
  break;
 case 128:
  *VAR_7++ = VAR_2;
  break;
 default:
  FUNC_0();
 }
 do {
  *VAR_7++ = VAR_3[(VAR_5 >> (VAR_6 -= 4)) & 0xF];
 } while (VAR_6 > 0);
 return (VAR_7 - VAR_4);
}
