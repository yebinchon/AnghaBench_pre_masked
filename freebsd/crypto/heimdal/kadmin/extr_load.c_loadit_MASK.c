
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(int VAR_2, const char *VAR_3, int VAR_4, char **VAR_5)
{
    if(!VAR_1) {
 FUNC_1(VAR_0, "%s is only available in local (-l) mode", VAR_3);
 return 0;
    }

    return FUNC_0(VAR_5[0], VAR_2);
}
