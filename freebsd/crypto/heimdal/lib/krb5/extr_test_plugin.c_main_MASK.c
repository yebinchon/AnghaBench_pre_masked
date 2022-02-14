
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_krbhst_handle ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int host ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int,scalar_t__,char*) ;
 int FUNC_2 (int ,int,char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int ,char*,int) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;

int
FUNC_11(int VAR_5, char **VAR_6)
{
    krb5_error_code VAR_7;
    krb5_context VAR_8;
    krb5_krbhst_handle VAR_9;
    char VAR_10[VAR_2];
    int VAR_11 = 0;

    FUNC_9(VAR_6[0]);

    VAR_7 = FUNC_4(&VAR_8);
    if (VAR_7)
 FUNC_0(1, "krb5_init_contex");

    VAR_7 = FUNC_8(VAR_8, VAR_3,
          VAR_1, &VAR_4);
    if (VAR_7)
 FUNC_1(VAR_8, 1, VAR_7, "krb5_plugin_register");


    VAR_7 = FUNC_6(VAR_8,
     "NOTHERE.H5L.SE",
     VAR_0,
     0,
     &VAR_9);
    if (VAR_7)
 FUNC_1(VAR_8, 1, VAR_7, "krb5_krbhst_init_flags");


    while(FUNC_7(VAR_8, VAR_9, VAR_10, sizeof(VAR_10)) == 0){
 VAR_11++;
  if (FUNC_10(VAR_10, "127.0.0.2") != 0)
     FUNC_2(VAR_8, 1, "wrong address: %s", VAR_10);
    }
    if (!VAR_11)
 FUNC_2(VAR_8, 1, "failed to find host");

    FUNC_5(VAR_8, VAR_9);

    FUNC_3(VAR_8);
    return 0;
}
