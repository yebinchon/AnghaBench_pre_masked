
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int FUNC_0 (char*,int,int,int,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(Char *VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    Char *VAR_4, *VAR_5;

    if (VAR_3 <= 0)
 return;
    if (VAR_1 + VAR_3 >= VAR_2) {
 VAR_0[VAR_1] = '\0';
 return;
    }







    if (VAR_3 > 0) {
 VAR_5 = VAR_0 + VAR_1;
 VAR_4 = VAR_5 + VAR_3;
 while (VAR_4 < &VAR_0[VAR_2])
     *VAR_5++ = *VAR_4++;
 VAR_0[VAR_2] = '\0';
    }




}
