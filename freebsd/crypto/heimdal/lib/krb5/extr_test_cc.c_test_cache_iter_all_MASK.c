
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_cccol_cursor ;
typedef int * krb5_ccache ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 char* FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int **) ;
 int FUNC_7 (int ,int,scalar_t__,char*) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ,char**) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static void
FUNC_11(krb5_context VAR_1)
{
    krb5_cccol_cursor VAR_2;
    krb5_error_code VAR_3;
    krb5_ccache VAR_4;

    VAR_3 = FUNC_5 (VAR_1, &VAR_2);
    if (VAR_3)
 FUNC_7(VAR_1, 1, VAR_3, "krb5_cccol_cursor_new");


    while ((VAR_3 = FUNC_6 (VAR_1, VAR_2, &VAR_4)) == 0 && VAR_4 != ((void*)0)) {
 krb5_principal VAR_5;
 char *VAR_6;

 if (VAR_0)
     FUNC_10("name: %s\n", FUNC_2(VAR_1, VAR_4));
 VAR_3 = FUNC_3(VAR_1, VAR_4, &VAR_5);
 if (VAR_3 == 0) {
     VAR_3 = FUNC_9(VAR_1, VAR_5, &VAR_6);
     if (VAR_3 == 0) {
  if (VAR_0)
      FUNC_10("\tprincipal: %s\n", VAR_6);
  FUNC_0(VAR_6);
     }
     FUNC_8(VAR_1, VAR_5);
 }
 FUNC_1(VAR_1, VAR_4);
    }

    FUNC_4(VAR_1, &VAR_2);
}
