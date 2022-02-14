
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(Char *VAR_0, int VAR_1, int VAR_2, Char *VAR_3, int VAR_4)
{
    Char *VAR_5, *VAR_6;

    if (VAR_4 <= 0)
 return;
    if (VAR_4 > VAR_2 - VAR_1)
 VAR_4 = VAR_2 - VAR_1;
    if (VAR_4 > 0) {
 VAR_6 = VAR_0 + VAR_2 - 1;
 VAR_5 = VAR_6 - VAR_4;
 while (VAR_5 >= &VAR_0[VAR_1])
     *VAR_6-- = *VAR_5--;
 VAR_0[VAR_2] = '\0';
    }







    for (VAR_5 = VAR_0 + VAR_1; (VAR_5 < VAR_0 + VAR_2) && (VAR_4 > 0); VAR_4--)
 *VAR_5++ = *VAR_3++;






}
