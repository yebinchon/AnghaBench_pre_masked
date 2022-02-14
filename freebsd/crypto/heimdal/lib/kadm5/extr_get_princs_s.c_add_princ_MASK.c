
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct foreach_data {char** princs; int count; } ;
typedef int krb5_error_code ;


 int VAR_0 ;
 char** FUNC_0 (char**,int) ;

__attribute__((used)) static krb5_error_code
FUNC_1(struct foreach_data *VAR_1, char *VAR_2)
{
    char **VAR_3;
    VAR_3 = FUNC_0(VAR_1->princs, (VAR_1->count + 1) * sizeof(*VAR_3));
    if(VAR_3 == ((void*)0))
 return VAR_0;
    VAR_1->princs = VAR_3;
    VAR_1->princs[VAR_1->count++] = VAR_2;
    return 0;
}
