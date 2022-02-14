
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int kadm5_principal_ent_rec ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int ,char*,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,int *) ;
 int FUNC_4 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (int ,char**) ;
 int FUNC_6 (int ,scalar_t__,char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,char*,...) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

int
FUNC_11(void *VAR_5, int VAR_6, char **VAR_7)
{
    kadm5_principal_ent_rec VAR_8;
    krb5_error_code VAR_9;
    char *VAR_10 = ((void*)0), *VAR_11, *VAR_12;
    int VAR_13;

    if (VAR_6 == 0) {
 VAR_9 = FUNC_5(VAR_1, &VAR_10);
 if (VAR_9) {
     FUNC_6(VAR_1, VAR_9, "krb5_get_default_realm");
     goto fail;
 }
    } else {
 VAR_10 = FUNC_9(VAR_7[0]);
 if (VAR_10 == ((void*)0)) {
     FUNC_7(VAR_1, "malloc");
     goto fail;
 }
    }







    if (FUNC_0(&VAR_11, "%s/%s@%s", VAR_0, VAR_10, VAR_10) == -1) {
 FUNC_6(VAR_1, VAR_3, "asprintf");
 goto fail;
    }

    VAR_9 = FUNC_3(VAR_11, &VAR_8);
    if (VAR_9) {
 FUNC_8("%s doesn't exist, are you sure %s is a realm in your database",
        VAR_11, VAR_10);
 FUNC_2(VAR_11);
 goto fail;
    }
    FUNC_2(VAR_11);

    FUNC_4(VAR_4, &VAR_8);





    if (FUNC_0(&VAR_11, "kadmin/admin@%s", VAR_10) == -1) {
 FUNC_6(VAR_1, VAR_3, "asprintf");
 goto fail;
    }

    VAR_9 = FUNC_3(VAR_11, &VAR_8);
    if (VAR_9) {
 FUNC_8("%s doesn't exist, "
        "there is no way to do remote administration", VAR_11);
 FUNC_2(VAR_11);
 goto fail;
    }
    FUNC_2(VAR_11);

    FUNC_4(VAR_4, &VAR_8);





    if (FUNC_0(&VAR_11, "kadmin/changepw@%s", VAR_10) == -1) {
 FUNC_6(VAR_1, VAR_3, "asprintf");
 goto fail;
    }

    VAR_9 = FUNC_3(VAR_11, &VAR_8);
    if (VAR_9) {
 FUNC_8("%s doesn't exist, "
        "there is no way to do change password", VAR_11);
 FUNC_2(VAR_11);
 goto fail;
    }
    FUNC_2(VAR_11);

    FUNC_4(VAR_4, &VAR_8);





    VAR_12 = FUNC_9(VAR_10);
    if (VAR_12 == ((void*)0)) {
 FUNC_6(VAR_1, VAR_3, "malloc");
 goto fail;
    }
    FUNC_10(VAR_12);

    if (FUNC_0(&VAR_11, "afs/%s@%s", VAR_12, VAR_10) == -1) {
 FUNC_6(VAR_1, VAR_3, "asprintf");
 FUNC_2(VAR_12);
 goto fail;
    }
    FUNC_2(VAR_12);

    VAR_9 = FUNC_3(VAR_11, &VAR_8);
    FUNC_2(VAR_11);
    if (VAR_9 == 0) {
 FUNC_4(VAR_4, &VAR_8);
 VAR_13 = 1;
    } else
 VAR_13 = 0;

    if (FUNC_0(&VAR_11, "afs@%s", VAR_10) == -1) {
 FUNC_6(VAR_1, VAR_3, "asprintf");
 goto fail;
    }

    VAR_9 = FUNC_3(VAR_11, &VAR_8);
    FUNC_2(VAR_11);
    if (VAR_9 == 0) {
 FUNC_4(VAR_4, &VAR_8);
 if (VAR_13) {
     FUNC_7(VAR_1, "afs@REALM and afs/cellname@REALM both exists");
     goto fail;
 }
    }

    FUNC_1("*", VAR_2, "check", ((void*)0));

    FUNC_2(VAR_10);
    return 0;
fail:
    FUNC_2(VAR_10);
    return 1;
}
