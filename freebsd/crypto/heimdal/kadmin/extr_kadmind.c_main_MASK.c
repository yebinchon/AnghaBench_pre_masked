
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int krb5_socket_t ;
typedef int krb5_log_facility ;
typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
typedef int __ss ;
struct TYPE_2__ {int num_strings; int ** strings; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **,char*,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int,char**,int*) ;
 int FUNC_5 (int ) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_10 ;
 int FUNC_10 (int ,int,scalar_t__,char*) ;
 int FUNC_11 (char**) ;
 int FUNC_12 (int ,char*,char*,int) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int ,int *) ;
 scalar_t__ FUNC_16 (int ,char*,int **) ;
 scalar_t__ FUNC_17 (int *,char***) ;
 scalar_t__ FUNC_18 (int ,char**) ;
 int FUNC_19 (int ,scalar_t__) ;
 scalar_t__ FUNC_20 (int ,int *) ;
 int FUNC_21 (int,int *) ;
 int VAR_11 ;
 int FUNC_22 (int *) ;
 TYPE_1__ VAR_12 ;
 int * VAR_13 ;
 int FUNC_23 (int *) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_24 (int ,struct sockaddr*,int*) ;
 int FUNC_25 (char*) ;
 int FUNC_26 (int ,int *) ;
 int FUNC_27 (int) ;
 scalar_t__ VAR_17 ;
 int FUNC_28 (char*,char*) ;

int
FUNC_29(int VAR_18, char **VAR_19)
{
    krb5_error_code VAR_20;
    char **VAR_21;
    int VAR_22 = 0;
    int VAR_23;
    krb5_log_facility *VAR_24;
    krb5_keytab VAR_25;
    krb5_socket_t VAR_26 = VAR_15;

    FUNC_25(VAR_19[0]);

    VAR_20 = FUNC_13(&VAR_6);
    if (VAR_20)
 FUNC_2 (1, "krb5_init_context failed: %d", VAR_20);

    if (FUNC_4(VAR_2, VAR_11, VAR_18, VAR_19, &VAR_22)) {
 FUNC_28("error at argument `%s'", VAR_19[VAR_22]);
 FUNC_27(1);
    }

    if (VAR_9)
 FUNC_27 (0);

    if (VAR_17) {
 FUNC_23(((void*)0));
 FUNC_3(0);
    }

    VAR_18 -= VAR_22;
    VAR_19 += VAR_22;

    if (VAR_5 == ((void*)0)) {
 FUNC_0(&VAR_5, "%d/kdc.conf", FUNC_5(VAR_6));
 if (VAR_5 == ((void*)0))
     FUNC_2(1, "out of memory");
    }

    VAR_20 = FUNC_17(VAR_5, &VAR_21);
    if (VAR_20)
 FUNC_10(VAR_6, 1, VAR_20, "getting configuration files");

    VAR_20 = FUNC_18(VAR_6, VAR_21);
    FUNC_11(VAR_21);
    if(VAR_20)
 FUNC_10(VAR_6, 1, VAR_20, "reading configuration files");

    VAR_20 = FUNC_16(VAR_6, "kadmind", &VAR_24);
    if (VAR_20)
 FUNC_10(VAR_6, 1, VAR_20, "krb5_openlog");
    VAR_20 = FUNC_20(VAR_6, VAR_24);
    if (VAR_20)
 FUNC_10(VAR_6, 1, VAR_20, "krb5_set_warn_dest");

    VAR_20 = FUNC_14(VAR_6, &VAR_8);
    if(VAR_20)
 FUNC_10(VAR_6, 1, VAR_20, "krb5_kt_register");

    VAR_20 = FUNC_15(VAR_6, VAR_10, &VAR_25);
    if(VAR_20)
 FUNC_10(VAR_6, 1, VAR_20, "krb5_kt_resolve");

    FUNC_8 (VAR_6, VAR_4, VAR_3);

    for (VAR_23 = 0; VAR_23 < VAR_12.num_strings; VAR_23++) {
 VAR_20 = FUNC_7(VAR_6,
      VAR_12.strings[VAR_23]);
 if (VAR_20)
     FUNC_10(VAR_6, 1, VAR_20, "kadm5_add_passwd_quality_verifier");
    }
    VAR_20 = FUNC_7(VAR_6, ((void*)0));
    if (VAR_20)
 FUNC_10(VAR_6, 1, VAR_20, "kadm5_add_passwd_quality_verifier");

    if(VAR_7) {
 int VAR_27;

 if(VAR_13 == ((void*)0))
     VAR_27 = FUNC_12 (VAR_6, "kerberos-adm",
          "tcp", 749);
 else
     VAR_27 = FUNC_6(FUNC_1(VAR_13));
 FUNC_21(VAR_27, &VAR_26);
    } else {




 struct sockaddr_storage VAR_28;
 struct sockaddr *VAR_29 = (struct sockaddr *)&VAR_28;
 socklen_t VAR_30 = sizeof(VAR_28);






 if(FUNC_24(VAR_1, VAR_29, &VAR_30) < 0 &&
    VAR_16 == VAR_0) {
     FUNC_22(((void*)0));
     FUNC_26(VAR_6, VAR_13);
 }

 VAR_26 = VAR_1;
    }

    if(VAR_14)
 FUNC_19(VAR_6, VAR_14);

    FUNC_9(VAR_6, VAR_25, VAR_26);

    return 0;
}
