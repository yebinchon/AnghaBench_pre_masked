
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const char *VAR_2, int VAR_3)
{
    if(VAR_2[0] != '.')
 return 0;
    if((VAR_3 & VAR_0))
 return 1;
    if(VAR_2[1] == '\0' || (VAR_2[1] == '.' && VAR_2[2] == '\0')) {
 if((VAR_3 & VAR_1))
     return 0;
 else
     return 1;
    }
    return 0;
}
