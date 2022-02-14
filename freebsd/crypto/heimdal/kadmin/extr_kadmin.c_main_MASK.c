
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int krb5_error_code ;
struct TYPE_8__ {int mask; scalar_t__ stash_file; int kadmind_port; scalar_t__ admin_server; scalar_t__ realm; } ;
typedef TYPE_1__ kadm5_config_params ;
typedef int conf ;
struct TYPE_9__ {int num_strings; int ** strings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int **,char*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int * VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int ) ;
 int VAR_16 ;
 scalar_t__ FUNC_3 (int ,int ,int,char**,int*) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_17 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int *,int *,int ,TYPE_1__*,int ,int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *,int *,int ,TYPE_1__*,int ,int ,int *) ;
 int FUNC_9 (int ,int *,scalar_t__,int ,TYPE_1__*,int ,int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int *,int ,TYPE_1__*,int ,int ,int *) ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_13 (int ,int,int,char*) ;
 int FUNC_14 (int ,int,char*) ;
 int FUNC_15 (char**) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,char***) ;
 int FUNC_19 (int ,char**) ;
 int FUNC_20 (int ,scalar_t__) ;
 int FUNC_21 (int ,char*,char*) ;
 scalar_t__ VAR_21 ;
 int FUNC_22 (TYPE_1__*,int ,int) ;
 int VAR_22 ;
 TYPE_2__ VAR_23 ;
 int FUNC_23 (int *) ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int,char**) ;
 int FUNC_27 (int ,char*,int *) ;
 int FUNC_28 (int) ;
 scalar_t__ VAR_26 ;

int
FUNC_29(int VAR_27, char **VAR_28)
{
    krb5_error_code VAR_29;
    char **VAR_30;
    kadm5_config_params VAR_31;
    int VAR_32 = 0;
    int VAR_33 = 0;

    FUNC_24(VAR_28[0]);

    VAR_29 = FUNC_17(&VAR_15);
    if (VAR_29)
 FUNC_1 (1, "krb5_init_context failed: %d", VAR_29);

    if(FUNC_3(VAR_9, VAR_22, VAR_27, VAR_28, &VAR_32))
 FUNC_28(1);

    if (VAR_17)
 FUNC_28 (0);

    if (VAR_26) {
 FUNC_23(((void*)0));
 FUNC_2(0);
    }

    VAR_27 -= VAR_32;
    VAR_28 += VAR_32;

    if (VAR_14 == ((void*)0)) {
 FUNC_0(&VAR_14, "%d/kdc.conf", FUNC_4(VAR_15));
 if (VAR_14 == ((void*)0))
     FUNC_1(1, "out of memory");
    }

    VAR_29 = FUNC_18(VAR_14, &VAR_30);
    if (VAR_29)
 FUNC_13(VAR_15, 1, VAR_29, "getting configuration files");

    VAR_29 = FUNC_19(VAR_15, VAR_30);
    FUNC_15(VAR_30);
    if(VAR_29)
 FUNC_13(VAR_15, 1, VAR_29, "reading configuration files");

    FUNC_22(&VAR_31, 0, sizeof(VAR_31));
    if(VAR_24) {
 FUNC_20(VAR_15, VAR_24);

 VAR_31.realm = VAR_24;
 VAR_31.mask |= VAR_3;
    }

    if (VAR_8) {
 VAR_31.admin_server = VAR_8;
 VAR_31.mask |= VAR_1;
    }

    if (VAR_25) {
 VAR_31.kadmind_port = FUNC_5(VAR_25);
 VAR_31.mask |= VAR_2;
    }

    if (VAR_19) {
 VAR_31.stash_file = VAR_19;
 VAR_31.mask |= VAR_4;
    }

    if(VAR_21) {
 int VAR_34;

 FUNC_12 (VAR_15,
       VAR_11, VAR_10);

 for (VAR_34 = 0; VAR_34 < VAR_23.num_strings; VAR_34++) {
     VAR_29 = FUNC_7(VAR_15,
          VAR_23.strings[VAR_34]);
     if (VAR_29)
  FUNC_13(VAR_15, 1, VAR_29, "kadm5_add_passwd_quality_verifier");
 }
 VAR_29 = FUNC_7(VAR_15, ((void*)0));
 if (VAR_29)
     FUNC_13(VAR_15, 1, VAR_29, "kadm5_add_passwd_quality_verifier");

 VAR_29 = FUNC_11(VAR_15,
          VAR_0,
          ((void*)0),
          VAR_0,
          &VAR_31, 0, 0,
          &VAR_18);
    } else if (VAR_7) {
 if (VAR_12 == ((void*)0))
     FUNC_14(VAR_15, 1, "keytab mode require principal name");
 VAR_29 = FUNC_6(VAR_15,
           VAR_12,
           ((void*)0),
           VAR_0,
           &VAR_31, 0, 0,
           &VAR_18);
    } else if (VAR_20) {
 if (VAR_12 == ((void*)0))
     FUNC_14(VAR_15, 1, "keytab mode require principal name");
        VAR_29 = FUNC_9(VAR_15,
      VAR_12,
      VAR_20,
      VAR_0,
                                         &VAR_31, 0, 0,
                                         &VAR_18);
    } else
 VAR_29 = FUNC_8(VAR_15,
          VAR_12,
          ((void*)0),
          VAR_0,
          &VAR_31, 0, 0,
          &VAR_18);

    if(VAR_29)
 FUNC_13(VAR_15, 1, VAR_29, "kadm5_init_with_password");

    FUNC_25(VAR_5, VAR_6);




    if (VAR_27 != 0) {
 VAR_29 = FUNC_26 (VAR_13, VAR_27, VAR_28);
 if(VAR_29 == -1)
     FUNC_21 (VAR_15, "unrecognized command: %s", VAR_28[0]);
 else if (VAR_29 == -2)
     VAR_29 = 0;
 if(VAR_29 != 0)
     VAR_33 = 1;
    } else {
 while(!VAR_16) {
     VAR_29 = FUNC_27(VAR_13, "kadmin> ", ((void*)0));
     if (VAR_29 == -2)
  VAR_16 = 1;
     else if (VAR_29 != 0)
  VAR_33 = 1;
 }
    }

    FUNC_10(VAR_18);
    FUNC_16(VAR_15);
    return VAR_33;
}
