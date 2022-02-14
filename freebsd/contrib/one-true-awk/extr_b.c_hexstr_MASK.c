
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uschar ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

int FUNC_2(uschar **VAR_0)
{
 uschar *VAR_1;
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0, VAR_1 = (uschar *) *VAR_0; VAR_3 < 2 && FUNC_1(*VAR_1); VAR_3++, VAR_1++) {
  if (FUNC_0(*VAR_1))
   VAR_2 = 16 * VAR_2 + *VAR_1 - '0';
  else if (*VAR_1 >= 'a' && *VAR_1 <= 'f')
   VAR_2 = 16 * VAR_2 + *VAR_1 - 'a' + 10;
  else if (*VAR_1 >= 'A' && *VAR_1 <= 'F')
   VAR_2 = 16 * VAR_2 + *VAR_1 - 'A' + 10;
 }
 *VAR_0 = (uschar *) VAR_1;
 return VAR_2;
}
