
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char* VAR_0 ;
 char VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int
FUNC_2(void)
{
    Char *VAR_3;
    int VAR_4;





    for (VAR_3 = VAR_0 - 1;
  VAR_3 > VAR_2 && *VAR_3 != ' ' && *VAR_3 != '\t' && *VAR_3 && *VAR_3 != VAR_1; --VAR_3)
 continue;




    if (VAR_3 >= VAR_2 && VAR_1 != '\0' && *VAR_3 == VAR_1)
 VAR_4 = FUNC_1(VAR_3);
    else
        VAR_4 = 0;
    FUNC_0();

    return VAR_4;
}
