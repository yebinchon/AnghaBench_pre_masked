
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct getarg_strings {int num_strings; char** strings; } ;


 char** FUNC_0 (int,int) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char****,size_t*,char**,int ,int) ;

char ***
FUNC_3(struct getarg_strings *VAR_0, size_t *VAR_1)
{
    char **VAR_2, ***VAR_3 = ((void*)0);
    int VAR_4;

    *VAR_1 = 0;

    VAR_2 = FUNC_0(VAR_0->num_strings, sizeof(*VAR_2));
    for (VAR_4 = 0; VAR_4 < VAR_0->num_strings; VAR_4++)
 VAR_2[VAR_4] = VAR_0->strings[VAR_4];

    FUNC_2(&VAR_3, VAR_1, VAR_2, 0, VAR_0->num_strings);
    FUNC_1(VAR_2);
    return VAR_3;
}
