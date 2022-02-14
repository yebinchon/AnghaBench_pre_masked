
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int ** VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*) ;

__attribute__((used)) static int
FUNC_1(char *VAR_2)
{
    int VAR_3;

    if (VAR_2 == ((void*)0) || *VAR_2 == '\0')
 return VAR_0;

    for (VAR_3 = 0; VAR_1[VAR_3] != ((void*)0); VAR_3++)
 if (FUNC_0(VAR_1[VAR_3], VAR_2) == 0)
     return VAR_3;

    return VAR_0;
}
