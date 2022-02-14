
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,unsigned int*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(unsigned int *VAR_0, const char *VAR_1)
{
    if(FUNC_1(VAR_1, "-") == 0)
 return 0;
    if (FUNC_0(VAR_1, "%u", VAR_0) != 1)
 return -1;
    return 1;
}
