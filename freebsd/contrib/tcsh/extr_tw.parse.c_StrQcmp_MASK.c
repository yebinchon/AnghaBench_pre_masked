
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 char const VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;

int
FUNC_1(const Char *VAR_1, const Char *VAR_2)
{
    for (; *VAR_1 && FUNC_0(*VAR_1 & VAR_0) == FUNC_0(*VAR_2 & VAR_0);
  VAR_1++, VAR_2++)
 continue;





    if (*VAR_1 == '\0' && *VAR_2 == '\0')
 return (0);
    else if (*VAR_1 == '\0')
 return (-1);
    else if (*VAR_2 == '\0')
 return (1);
    else
 return ((*VAR_1 & VAR_0) - (*VAR_2 & VAR_0));
}
