
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcsh_number_t ;
typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int***) ;
 int* FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static Char *
FUNC_3(int VAR_2, Char *VAR_3, Char *VAR_4)
{
    Char VAR_5[2];
    Char *VAR_6[5];
    Char **VAR_7 = VAR_6;
    Char **VAR_8 = VAR_7;
    tcsh_number_t VAR_9;

    if (VAR_2 != '=') {
 if (*VAR_3)
     *VAR_7++ = VAR_3;
 VAR_5[0] = VAR_2;
 VAR_5[1] = 0;
 *VAR_7++ = VAR_5;
 if (VAR_2 == '<' || VAR_2 == '>')
     *VAR_7++ = VAR_5;
    }
    *VAR_7++ = VAR_4;
    *VAR_7++ = 0;
    VAR_9 = FUNC_0(&VAR_8);
    if (*VAR_8)
 FUNC_2(VAR_1 | VAR_0);
    return (FUNC_1(VAR_9));
}
