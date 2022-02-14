
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int FUNC_0 (int ,int,scalar_t__,char*) ;
 int FUNC_1 (int ,int,char*,...) ;
 int FUNC_2 (char**) ;
 scalar_t__ FUNC_3 (char***) ;
 scalar_t__ FUNC_4 (char*,int *,char***) ;
 scalar_t__ FUNC_5 (char*,char***) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(krb5_context VAR_0, char *VAR_1, char **VAR_2, int VAR_3)
{
    krb5_error_code VAR_4;
    char **VAR_5;
    int VAR_6;

    VAR_5 = ((void*)0);

    if (VAR_3)
 VAR_4 = FUNC_5(VAR_1, &VAR_5);
    else
 VAR_4 = FUNC_4(VAR_1, ((void*)0), &VAR_5);

    if (VAR_4)
 FUNC_0(VAR_0, 1, VAR_4, "prepend_config_files");

    for (VAR_6 = 0; VAR_2[VAR_6] && VAR_5[VAR_6]; VAR_6++)
 if (FUNC_6(VAR_5[VAR_6], VAR_2[VAR_6]) != 0)
     FUNC_1(VAR_0, 1, "'%s' != '%s'", VAR_5[VAR_6], VAR_2[VAR_6]);

    if (VAR_2[VAR_6] != ((void*)0))
 FUNC_1(VAR_0, 1, "pp ended before res list");

    if (VAR_3) {
 char **VAR_7;
 int VAR_8;

 VAR_4 = FUNC_3(&VAR_7);
 if (VAR_4)
     FUNC_0(VAR_0, 1, VAR_4, "get_default_config_files");

 for (VAR_8 = 0 ; VAR_5[VAR_6] && VAR_7[VAR_8]; VAR_6++, VAR_8++)
     if (FUNC_6(VAR_5[VAR_6], VAR_7[VAR_8]) != 0)
  FUNC_1(VAR_0, 1, "'%s' != '%s'", VAR_5[VAR_6], VAR_7[VAR_8]);

 if (VAR_7[VAR_8] != ((void*)0))
     FUNC_1(VAR_0, 1, "pp ended before def list");
 FUNC_2(VAR_7);
    }

    if (VAR_5[VAR_6] != ((void*)0))
 FUNC_1(VAR_0, 1, "pp ended after res (and def) list");

    FUNC_2(VAR_5);

    return 0;
}
