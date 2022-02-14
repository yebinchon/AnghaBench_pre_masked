
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char*,unsigned long) ;
 char* FUNC_1 (size_t) ;
 size_t FUNC_2 (int,size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static size_t
FUNC_5 (char **VAR_0, int VAR_1, char **VAR_2)
{
    int VAR_3;
    size_t VAR_4 = 0;
    char *VAR_5;

    for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
 VAR_4 += FUNC_4(VAR_2[VAR_3]) + 1;
    VAR_4 = FUNC_2 (1, VAR_4);
    VAR_5 = FUNC_1 (VAR_4);
    if (VAR_5 == ((void*)0))
 FUNC_0 (1, "malloc %lu failed", (unsigned long)VAR_4);

    *VAR_5 = '\0';
    for (VAR_3 = 0; VAR_3 < VAR_1 - 1; ++VAR_3) {
 FUNC_3 (VAR_5, VAR_2[VAR_3], VAR_4);
 FUNC_3 (VAR_5, " ", VAR_4);
    }
    if (VAR_1 > 0)
 FUNC_3 (VAR_5, VAR_2[VAR_1-1], VAR_4);
    *VAR_0 = VAR_5;
    return VAR_4;
}
