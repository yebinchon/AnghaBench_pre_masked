
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcsh_number_t ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;

tcsh_number_t
FUNC_3(const Char *VAR_3)
{
    tcsh_number_t VAR_4;
    int VAR_5;
    int VAR_6;

    if (!VAR_3)
 FUNC_2(VAR_1 | VAR_0);

    VAR_5 = 0;
    if (VAR_3[0] == '+' && VAR_3[1])
 VAR_3++;
    if (*VAR_3 == '-') {
 VAR_5++;
 VAR_3++;
 if (!FUNC_0(*VAR_3))
     FUNC_2(VAR_1 | VAR_0);
    }

    if (VAR_3[0] == '0' && VAR_3[1] && FUNC_1(VAR_2))
 VAR_6 = 8;
    else
 VAR_6 = 10;

    VAR_4 = 0;
    while (FUNC_0(*VAR_3))
    {
 if (VAR_6 == 8 && *VAR_3 >= '8')
     FUNC_2(VAR_1 | VAR_0);
 VAR_4 = VAR_4 * VAR_6 + *VAR_3++ - '0';
    }
    if (*VAR_3)
 FUNC_2(VAR_1 | VAR_0);
    return (VAR_5 ? -VAR_4 : VAR_4);
}
