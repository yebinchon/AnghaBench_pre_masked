
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char* VAR_0 ;
 char VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(Char *VAR_3)
{
    int VAR_4;
    Char *VAR_5;
    int VAR_6;





    if ((VAR_3[1] == ' ' || VAR_3[1] == '\t') &&
 (VAR_3[-1] == ' ' || VAR_3[-1] == '\t' || VAR_3[-1] == '>')) {
 for (VAR_5 = VAR_3 - 1; VAR_5 > VAR_2 && (*VAR_5 == ' ' || *VAR_5 == '\t'); --VAR_5)
     continue;
 if (*VAR_5 == '>')
     ++VAR_3;
    }
    else {
 while (*VAR_3 != ' ' && *VAR_3 != '\t' && VAR_3 > VAR_2)
     --VAR_3;
    }






    VAR_6 = 0;
    for (;;) {
 if (VAR_1 != '\0')
     while (*VAR_3 != VAR_1 && VAR_3 < VAR_0)
  ++VAR_3;
 for (VAR_4 = 1; (VAR_3 - VAR_4) >= VAR_2 && VAR_3[-VAR_4] == '\\'; VAR_4++)
     continue;
 if (VAR_4 % 2 == 0)
     ++VAR_3;
 if (VAR_3 >= VAR_0)
     return VAR_6;
 if (VAR_4 % 2 == 1) {
     VAR_3 = FUNC_0(VAR_3);
     ++VAR_6;
 }
    }
}
