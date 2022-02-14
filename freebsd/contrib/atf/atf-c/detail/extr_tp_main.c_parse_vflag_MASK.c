
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int atf_map_t ;
typedef int atf_error_t ;


 int FUNC_0 (int *,char*,char*,int) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static
atf_error_t
FUNC_3(char *VAR_0, atf_map_t *VAR_1)
{
    atf_error_t VAR_2;
    char *VAR_3;

    VAR_3 = FUNC_1(VAR_0, '=');
    if (VAR_3 == ((void*)0)) {
        VAR_2 = FUNC_2("-v requires an argument of the form var=value");
        goto out;
    }

    *VAR_3 = '\0';
    VAR_3++;

    VAR_2 = FUNC_0(VAR_1, VAR_0, VAR_3, 0);

out:
    return VAR_2;
}
