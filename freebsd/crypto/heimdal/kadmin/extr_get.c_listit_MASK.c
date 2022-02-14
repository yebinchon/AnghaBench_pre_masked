
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ,char const*,int *) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_1, int VAR_2, char **VAR_3)
{
    int VAR_4;
    krb5_error_code VAR_5, VAR_6 = 0;

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
 VAR_5 = FUNC_0(VAR_3[VAR_4], VAR_0, VAR_1, ((void*)0));
        if (VAR_6 == 0 && VAR_5 != 0)
            VAR_6 = VAR_5;
    }
    return VAR_6 != 0;
}
