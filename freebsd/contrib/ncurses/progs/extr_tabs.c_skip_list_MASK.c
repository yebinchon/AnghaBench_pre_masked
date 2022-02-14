
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char*,int ) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_0)
{
    while (*VAR_0 != '\0' &&
    (FUNC_1(FUNC_0(*VAR_0)) ||
     FUNC_2(FUNC_0(*VAR_0)) ||
     FUNC_3("+,", FUNC_0(*VAR_0)) != 0)) {
 ++VAR_0;
    }
    return VAR_0;
}
