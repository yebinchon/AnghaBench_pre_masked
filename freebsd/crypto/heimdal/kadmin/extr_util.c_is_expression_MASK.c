
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char*,char const) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
    const char *VAR_1;
    int VAR_2 = 0;

    for(VAR_1 = VAR_0; *VAR_1; VAR_1++) {
 if(VAR_2) {
     VAR_2 = 0;
     continue;
 }
 if(*VAR_1 == '\\')
     VAR_2++;
 else if(FUNC_0("[]*?", *VAR_1) != ((void*)0))
     return 1;
    }
    return 0;
}
