
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;


 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static char *
FUNC_1(char * VAR_0, u_short * VAR_1)
{
    u_short VAR_2;

    for (VAR_2 = 0; *VAR_0 && FUNC_0(*VAR_0); VAR_0++)
 VAR_2 = (u_short)(VAR_2 * 10 + (*VAR_0 - '0'));

    *VAR_1 = (u_short)((VAR_2 / 100) * 60 + (VAR_2 % 100));

    return (VAR_0);
}
