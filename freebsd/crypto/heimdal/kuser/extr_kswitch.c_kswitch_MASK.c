
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kswitch_options {scalar_t__ cache_string; int type_string; int principal_string; scalar_t__ interactive_flag; } ;
typedef int rtbl_t ;
typedef int num ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int * krb5_ccache ;
struct TYPE_3__ {int prefix; } ;
typedef TYPE_1__ krb5_cc_ops ;
typedef int krb5_cc_cache_cursor ;
typedef int ids ;


 char* FUNC_0 (char*,char*) ;
 int FUNC_1 (char**,char*,int ,scalar_t__) ;
 size_t FUNC_2 (char*) ;
 int ** FUNC_3 (int **,size_t) ;
 int FUNC_4 (char*) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *,int *) ;
 scalar_t__ FUNC_7 (int ,int ,int **) ;
 scalar_t__ FUNC_8 (int ,int ,int **) ;
 int FUNC_9 (int ,int *) ;
 TYPE_1__* FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int *,int *) ;
 char* FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,char*,int **) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int,scalar_t__,char*,...) ;
 int FUNC_16 (int ,int,char*,...) ;
 int FUNC_17 (int ,int ) ;
 scalar_t__ FUNC_18 (int ,int ,int *) ;
 scalar_t__ FUNC_19 (int ,int ,char**) ;
 char* FUNC_20 (char*) ;
 int FUNC_21 (int ,int,char*,int ) ;
 int FUNC_22 (int ,int,char*) ;
 int FUNC_23 () ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int ,int,char*,char*) ;
 int FUNC_27 (char*,int,char*,int) ;
 int VAR_1 ;

int
FUNC_28(struct kswitch_options *VAR_2, int VAR_3, char **VAR_4)
{
    krb5_error_code VAR_5;
    krb5_ccache VAR_6 = ((void*)0);

    if (VAR_2->cache_string && VAR_2->principal_string)
 FUNC_16(VAR_0, 1,
    FUNC_0("Both --cache and --principal given, choose one", ""));

    if (VAR_2->interactive_flag) {
 krb5_cc_cache_cursor VAR_7;
 krb5_ccache *VAR_8 = ((void*)0);
 size_t VAR_9, VAR_10 = 0;
 char *VAR_11;
 rtbl_t VAR_12;

 VAR_12 = FUNC_23();

 FUNC_21(VAR_12, 0, "#", 0);
 FUNC_21(VAR_12, 1, "Principal", 0);
 FUNC_26(VAR_12, 1, "    ", "");
        FUNC_21(VAR_12, 2, "Type", 0);
        FUNC_26(VAR_12, 2, "  ", "");

 VAR_5 = FUNC_6(VAR_0, ((void*)0), &VAR_7);
 if (VAR_5)
     FUNC_15(VAR_0, 1, VAR_5, "krb5_cc_cache_get_first");

 while (FUNC_8(VAR_0, VAR_7, &VAR_6) == 0) {
     krb5_principal VAR_13;
     char VAR_14[10];

     VAR_5 = FUNC_11(VAR_0, VAR_6, &VAR_13);
     if (VAR_5)
  continue;

     VAR_5 = FUNC_19(VAR_0, VAR_13, &VAR_11);
     FUNC_17(VAR_0, VAR_13);

     FUNC_27(VAR_14, sizeof(VAR_14), "%d", (int)(VAR_10 + 1));
     FUNC_22(VAR_12, 0, VAR_14);
     FUNC_22(VAR_12, 1, VAR_11);
            FUNC_22(VAR_12, 2, FUNC_12(VAR_0, VAR_6));
     FUNC_4(VAR_11);

     VAR_8 = FUNC_3(VAR_8, (VAR_10 + 1) * sizeof(VAR_8[0]));
     VAR_8[VAR_10] = VAR_6;
     VAR_10++;
 }
 FUNC_5(VAR_0, VAR_7);

 FUNC_25(VAR_12, VAR_1);
 FUNC_24(VAR_12);

 VAR_11 = FUNC_20("Select number: ");
 if (VAR_11) {
     VAR_9 = FUNC_2(VAR_11);
     if (VAR_9 == 0)
  FUNC_16(VAR_0, 1, "Cache number '%s' is invalid", VAR_11);
     if (VAR_9 > VAR_10)
  FUNC_16(VAR_0, 1, "Cache number '%s' is too large", VAR_11);

     VAR_6 = VAR_8[VAR_9 - 1];
     VAR_8[VAR_9 - 1] = ((void*)0);
 } else
     FUNC_16(VAR_0, 1, "No cache selected");
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
     if (VAR_8[VAR_9])
  FUNC_9(VAR_0, VAR_8[VAR_9]);

    } else if (VAR_2->principal_string) {
 krb5_principal VAR_15;

 VAR_5 = FUNC_18(VAR_0, VAR_2->principal_string, &VAR_15);
 if (VAR_5)
     FUNC_15(VAR_0, 1, VAR_5, "krb5_parse_name: %s",
       VAR_2->principal_string);

 VAR_5 = FUNC_7(VAR_0, VAR_15, &VAR_6);
 if (VAR_5)
     FUNC_15(VAR_0, 1, VAR_5,
       FUNC_0("Did not find principal: %s", ""),
       VAR_2->principal_string);

 FUNC_17(VAR_0, VAR_15);

    } else if (VAR_2->cache_string) {
 const krb5_cc_ops *VAR_16;
 char *VAR_17;

 VAR_16 = FUNC_10(VAR_0, VAR_2->type_string);
 if (VAR_16 == ((void*)0))
     FUNC_15(VAR_0, 1, 0, "krb5_cc_get_prefix_ops");

 FUNC_1(&VAR_17, "%d:%ld", VAR_16->prefix, VAR_2->cache_string);
 if (VAR_17 == ((void*)0))
     FUNC_16(VAR_0, 1, FUNC_0("out of memory", ""));

 VAR_5 = FUNC_13(VAR_0, VAR_17, &VAR_6);
 if (VAR_5)
     FUNC_15(VAR_0, 1, VAR_5, "krb5_cc_resolve: %s", VAR_17);

 FUNC_4(VAR_17);
    } else {
 FUNC_16(VAR_0, 1, "missing option for kswitch");
    }

    VAR_5 = FUNC_14(VAR_0, VAR_6);
    if (VAR_5)
 FUNC_15(VAR_0, 1, VAR_5, "krb5_cc_switch");

    return 0;
}
