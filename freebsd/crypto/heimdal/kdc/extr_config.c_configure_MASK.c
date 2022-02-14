
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int require_preauth; } ;
typedef TYPE_1__ krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_12__ {scalar_t__ len; } ;
struct TYPE_11__ {int num_strings; int * strings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ,int) ;
 TYPE_6__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int **,char*,int ) ;
 scalar_t__ VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ) ;
 TYPE_7__ VAR_16 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (int ,int ,int,char**,int*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,char**) ;
 scalar_t__ VAR_17 ;
 int FUNC_9 (int ,char*,TYPE_1__*) ;
 int FUNC_10 (int ,int *,char*,char*,int *) ;
 int FUNC_11 (int ,int *,int,char*,char*,int *) ;
 void* FUNC_12 (int ,int *,char*,char*,int *) ;
 char** FUNC_13 (int ,int *,char*,char*,int *) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int,scalar_t__,char*) ;
 int FUNC_16 (int ,int,char*) ;
 int FUNC_17 (char**) ;
 scalar_t__ FUNC_18 (int ,TYPE_1__**) ;
 int FUNC_19 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_20 (int ,TYPE_1__*) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int *,char***) ;
 scalar_t__ FUNC_23 (int ,char**) ;
 char const* VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_24 (char const*,int *) ;
 char* VAR_22 ;
 int FUNC_25 (int *) ;
 int FUNC_26 (char*,char*) ;
 int * VAR_23 ;
 int VAR_24 ;
 char* FUNC_27 (char const*) ;
 int FUNC_28 (int) ;
 scalar_t__ VAR_25 ;
 int FUNC_29 (char*,char*) ;

krb5_kdc_configuration *
FUNC_30(krb5_context VAR_26, int VAR_27, char **VAR_28)
{
    krb5_kdc_configuration *VAR_29;
    krb5_error_code VAR_30;
    int VAR_31 = 0;
    const char *VAR_32;

    while(FUNC_6(VAR_10, VAR_21, VAR_27, VAR_28, &VAR_31))
 FUNC_29("error at argument `%s'", VAR_28[VAR_31]);

    if(VAR_17)
 FUNC_28 (0);

    if (VAR_25) {
 FUNC_25(((void*)0));
 FUNC_3(0);
    }

    if (VAR_11) {
 char *VAR_33;
 VAR_30 = FUNC_8(VAR_26, &VAR_33);
 if (VAR_30)
     FUNC_15(VAR_26, 1, VAR_30, "listing builtin hdb backends");
 FUNC_26("builtin hdb backends: %s\n", VAR_33);
 FUNC_4(VAR_33);
 FUNC_3(0);
    }

    VAR_27 -= VAR_31;
    VAR_28 += VAR_31;

    if (VAR_27 != 0)
 FUNC_28(1);

    {
 char **VAR_34;

 if (VAR_12 == ((void*)0)) {
     FUNC_1(&VAR_12, "%d/kdc.conf", FUNC_7(VAR_26));
     if (VAR_12 == ((void*)0))
  FUNC_2(1, "out of memory");
 }

 VAR_30 = FUNC_22(VAR_12, &VAR_34);
 if (VAR_30)
     FUNC_15(VAR_26, 1, VAR_30, "getting configuration files");

 VAR_30 = FUNC_23(VAR_26, VAR_34);
 FUNC_17(VAR_34);
 if(VAR_30)
     FUNC_15(VAR_26, 1, VAR_30, "reading configuration files");
    }

    VAR_30 = FUNC_18(VAR_26, &VAR_29);
    if (VAR_30)
 FUNC_15(VAR_26, 1, VAR_30, "krb5_kdc_default_config");

    FUNC_9(VAR_26, "kdc", VAR_29);

    VAR_30 = FUNC_20(VAR_26, VAR_29);
    if (VAR_30)
 FUNC_15(VAR_26, 1, VAR_30, "krb5_kdc_set_dbinfo");

    if(VAR_18)
 VAR_19 = VAR_20 = FUNC_24(VAR_18, ((void*)0));

    if(VAR_19 == 0){
 VAR_32 = FUNC_12 (VAR_26,
        ((void*)0),
        "kdc",
        "max-request",
        ((void*)0));
 if(VAR_32)
     VAR_19 = VAR_20 = FUNC_24(VAR_32, ((void*)0));
    }

    if(VAR_24 != -1)
 VAR_29->require_preauth = VAR_24;

    if(VAR_22 == ((void*)0)){
 VAR_32 = FUNC_12(VAR_26, ((void*)0), "kdc", "ports", ((void*)0));
 if (VAR_32 != ((void*)0))
     VAR_22 = FUNC_27(VAR_32);
    }

    VAR_16.len = 0;

    if (VAR_9.num_strings) {
 int VAR_35;

 for (VAR_35 = 0; VAR_35 < VAR_9.num_strings; ++VAR_35)
     FUNC_0 (VAR_26, VAR_9.strings[VAR_35], VAR_35 == 0);
 FUNC_5 (&VAR_9);
    } else {
 char **VAR_36 = FUNC_13 (VAR_26, ((void*)0),
           "kdc", "addresses", ((void*)0));

 if (VAR_36 != ((void*)0)) {
     FUNC_0 (VAR_26, *VAR_36++, VAR_8);
     while (*VAR_36)
  FUNC_0 (VAR_26, *VAR_36++, VAR_7);
 }
    }

    if(VAR_15 == -1)
 VAR_15 = FUNC_10(VAR_26, ((void*)0), "kdc",
        "enable-http", ((void*)0));

    if(VAR_23 == ((void*)0))
 VAR_23 = FUNC_12(VAR_26, ((void*)0),
          "kdc",
          "kdc-request-log",
          ((void*)0));

    if (FUNC_12(VAR_26, ((void*)0), "kdc",
          "enforce-transited-policy", ((void*)0)))
 FUNC_16(VAR_26, 1, "enforce-transited-policy deprecated, "
    "use [kdc]transited-policy instead");
    if(VAR_19 == 0)
 VAR_19 = 64 * 1024;
    if(VAR_20 == 0)
 VAR_20 = 64 * 1024;

    if (VAR_22 == ((void*)0))
 VAR_22 = "+";

    if(VAR_14 == -1)
 VAR_14 = FUNC_11(VAR_26, ((void*)0),
         VAR_7,
         "kdc",
         "disable-des", ((void*)0));
    if(VAR_14) {
 FUNC_14(VAR_26, VAR_1);
 FUNC_14(VAR_26, VAR_2);
 FUNC_14(VAR_26, VAR_3);
 FUNC_14(VAR_26, VAR_4);
 FUNC_14(VAR_26, VAR_5);
 FUNC_14(VAR_26, VAR_6);
    }

    FUNC_21(VAR_26);

    FUNC_19(VAR_26, VAR_29);

    return VAR_29;
}
