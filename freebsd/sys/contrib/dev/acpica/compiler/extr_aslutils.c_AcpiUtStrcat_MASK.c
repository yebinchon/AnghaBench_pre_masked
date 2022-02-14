
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

char *
FUNC_3 (
    char *VAR_0,
    char *VAR_1)
{
    UINT32 VAR_2 = FUNC_2 (VAR_0);
    char *VAR_3 = (char *) FUNC_0 (FUNC_2 (VAR_0) + FUNC_2 (VAR_1) + 1);

    FUNC_1 (VAR_3, VAR_0);
    FUNC_1 (VAR_3 + VAR_2, VAR_1);
    return (VAR_3);
}
