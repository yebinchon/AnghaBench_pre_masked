
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UChar ;



__attribute__((used)) static
__inline__
UChar FUNC_0 ( UChar VAR_0, UChar VAR_1, UChar VAR_2 )
{
   UChar VAR_3;
   if (VAR_0 > VAR_1) { VAR_3 = VAR_0; VAR_0 = VAR_1; VAR_1 = VAR_3; };
   if (VAR_1 > VAR_2) {
      VAR_1 = VAR_2;
      if (VAR_0 > VAR_1) VAR_1 = VAR_0;
   }
   return VAR_1;
}
