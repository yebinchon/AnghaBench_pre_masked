
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static int
FUNC_1(char **VAR_0, char *VAR_1, size_t VAR_2)
{
    int VAR_3;
    for(VAR_3 = 0; VAR_0 != ((void*)0) && VAR_0[VAR_3] != ((void*)0); VAR_3++)
 if(FUNC_0(VAR_0[VAR_3], VAR_1, VAR_2) == 0)
     return VAR_3;
    return -1;
}
