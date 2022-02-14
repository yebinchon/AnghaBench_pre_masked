
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcsh_number_t ;
typedef scalar_t__ Char ;


 scalar_t__* FUNC_0 (scalar_t__*) ;
 int FUNC_1 (int ) ;
 scalar_t__* VAR_0 ;

Char *
FUNC_2(tcsh_number_t VAR_1)
{
    Char VAR_2[1024];

    VAR_0 = VAR_2;
    if (VAR_1 < 0) {
 VAR_1 = -VAR_1;
 *VAR_0++ = '-';
    }
    FUNC_1(VAR_1);
    *VAR_0 = 0;
    return (FUNC_0(VAR_2));
}
