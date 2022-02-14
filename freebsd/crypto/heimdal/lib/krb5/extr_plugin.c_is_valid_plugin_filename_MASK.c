
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char const*,char) ;

__attribute__((used)) static int
FUNC_2(const char * VAR_0)
{
    if (VAR_0[0] == '.' && (VAR_0[1] == '\0' || (VAR_0[1] == '.' && VAR_0[2] == '\0')))
        return 0;
    return 1;

}
