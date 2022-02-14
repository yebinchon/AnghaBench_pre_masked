
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sigaction {int sa_mask; int sa_handler; scalar_t__ sa_flags; } ;
struct servent {int s_port; } ;
typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_7__ {scalar_t__ len; } ;
struct TYPE_6__ {int num_strings; int * strings; } ;
struct TYPE_5__ {int num_strings; int ** strings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int) ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int **,char*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int ) ;
 TYPE_3__ VAR_11 ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_14 ;
 char** FUNC_10 (int ,int *,char*,char*,int *) ;
 int FUNC_11 (int ,int,scalar_t__,char*,...) ;
 int FUNC_12 (int ,int,char*,char*) ;
 int FUNC_13 (char**) ;
 int FUNC_14 (int ,char*,char*,int ) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int ,int *) ;
 int FUNC_17 (int ,char*,int *) ;
 scalar_t__ FUNC_18 (int *,char***) ;
 int FUNC_19 (int *,int,char**,int ,int ,int *) ;
 scalar_t__ FUNC_20 (int ,char**) ;
 int FUNC_21 (int ,scalar_t__) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ,int ,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_24 (int *) ;
 TYPE_1__ VAR_17 ;
 char* VAR_18 ;
 int FUNC_25 (int *) ;
 scalar_t__ VAR_19 ;
 struct servent* FUNC_26 (char*,char*) ;
 int FUNC_27 (int ,struct sigaction*,int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ,int ) ;
 int VAR_20 ;
 int FUNC_30 (char*,char**,int) ;
 scalar_t__ VAR_21 ;

int
FUNC_31 (int VAR_22, char **VAR_23)
{
    krb5_keytab VAR_24;
    krb5_error_code VAR_25;
    char **VAR_26;
    int VAR_27, VAR_28;

    FUNC_19(&VAR_10, VAR_22, VAR_23, VAR_6, VAR_16, ((void*)0));

    if(VAR_13)
 FUNC_23(0, VAR_6, VAR_16);
    if(VAR_21) {
 FUNC_25(((void*)0));
 FUNC_4(0);
    }

    if (VAR_9 == ((void*)0)) {
 FUNC_1(&VAR_9, "%d/kdc.conf", FUNC_6(VAR_10));
 if (VAR_9 == ((void*)0))
     FUNC_3(1, "out of memory");
    }

    VAR_25 = FUNC_18(VAR_9, &VAR_26);
    if (VAR_25)
 FUNC_11(VAR_10, 1, VAR_25, "getting configuration files");

    VAR_25 = FUNC_20(VAR_10, VAR_26);
    FUNC_13(VAR_26);
    if (VAR_25)
 FUNC_11(VAR_10, 1, VAR_25, "reading configuration files");

    if(VAR_19)
 FUNC_21(VAR_10, VAR_19);

    FUNC_17 (VAR_10, "kpasswdd", &VAR_15);
    FUNC_22(VAR_10, VAR_15);

    if (VAR_18 != ((void*)0)) {
 struct servent *VAR_29 = FUNC_26 (VAR_18, "udp");

 if (VAR_29 != ((void*)0))
     VAR_27 = VAR_29->s_port;
 else {
     char *VAR_30;

     VAR_27 = FUNC_30 (VAR_18, &VAR_30, 10);
     if (VAR_27 == 0 && VAR_30 == VAR_18)
  FUNC_12 (VAR_10, 1, "bad port `%s'", VAR_18);
     VAR_27 = FUNC_7(VAR_27);
 }
    } else
 VAR_27 = FUNC_14 (VAR_10, "kpasswd", "udp", VAR_1);

    VAR_25 = FUNC_15(VAR_10, &VAR_12);
    if(VAR_25)
 FUNC_11(VAR_10, 1, VAR_25, "krb5_kt_register");

    VAR_25 = FUNC_16(VAR_10, VAR_14, &VAR_24);
    if(VAR_25)
 FUNC_11(VAR_10, 1, VAR_25, "%s", VAR_14);

    FUNC_9 (VAR_10, VAR_8, VAR_7);

    for (VAR_28 = 0; VAR_28 < VAR_17.num_strings; VAR_28++) {
 VAR_25 = FUNC_8(VAR_10,
      VAR_17.strings[VAR_28]);
 if (VAR_25)
     FUNC_11(VAR_10, 1, VAR_25, "kadm5_add_passwd_quality_verifier");
    }
    VAR_25 = FUNC_8(VAR_10, ((void*)0));
    if (VAR_25)
 FUNC_11(VAR_10, 1, VAR_25, "kadm5_add_passwd_quality_verifier");


    VAR_11.len = 0;

    if (VAR_5.num_strings) {
 int VAR_31;

 for (VAR_31 = 0; VAR_31 < VAR_5.num_strings; ++VAR_31)
     FUNC_0 (VAR_5.strings[VAR_31], VAR_31 == 0);
 FUNC_5 (&VAR_5);
    } else {
 char **VAR_32 = FUNC_10 (VAR_10, ((void*)0),
           "kdc", "addresses", ((void*)0));

 if (VAR_32 != ((void*)0)) {
     FUNC_0 (*VAR_32++, VAR_4);
     while (*VAR_32)
  FUNC_0 (*VAR_32++, VAR_0);
 }
    }
    FUNC_29(VAR_2, VAR_20);
    FUNC_29(VAR_3, VAR_20);


    FUNC_24(((void*)0));

    return FUNC_2 (VAR_24, VAR_27);
}
