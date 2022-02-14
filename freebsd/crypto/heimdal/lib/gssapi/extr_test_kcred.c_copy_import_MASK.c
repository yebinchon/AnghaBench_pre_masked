
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int gss_name_t ;
typedef scalar_t__ gss_cred_usage_t ;
typedef int gss_cred_id_t ;
typedef int gss_OID_set ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int ,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int ,int*) ;
 scalar_t__ FUNC_4 (scalar_t__*,int ,int *,scalar_t__*,scalar_t__*,int *) ;
 scalar_t__ FUNC_5 (scalar_t__*,int ,int ) ;
 scalar_t__ FUNC_6 (scalar_t__*,int ,int *,int *,int *) ;
 int FUNC_7 (scalar_t__*,int *) ;
 int FUNC_8 (scalar_t__*,int *) ;
 int FUNC_9 (scalar_t__*,int *) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int *,int *) ;
 int VAR_6 ;
 int FUNC_12 (int ,int,scalar_t__,char*) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(void)
{
    gss_cred_id_t VAR_7, VAR_8;
    OM_uint32 VAR_9, VAR_10;
    gss_name_t VAR_11, VAR_12;
    OM_uint32 VAR_13, VAR_14;
    gss_cred_usage_t VAR_15, VAR_16;
    gss_OID_set VAR_17, VAR_18;
    krb5_ccache VAR_19;
    krb5_error_code VAR_20;
    krb5_context VAR_21;
    int VAR_22;

    VAR_9 = FUNC_2(&VAR_10, VAR_3, VAR_1,
    VAR_4, VAR_2,
    &VAR_7, ((void*)0), ((void*)0));
    if (VAR_9 != VAR_5)
 FUNC_1(1, "gss_acquire_cred");

    VAR_9 = FUNC_4(&VAR_10, VAR_7, &VAR_11, &VAR_13,
    &VAR_15, &VAR_17);
    if (VAR_9 != VAR_5)
 FUNC_1(1, "gss_inquire_cred");

    VAR_20 = FUNC_14(&VAR_21);
    if (VAR_20)
 FUNC_1(1, "krb5_init_context");

    VAR_20 = FUNC_11(VAR_21, VAR_6, ((void*)0), &VAR_19);
    if (VAR_20)
 FUNC_12(VAR_21, 1, VAR_20, "krb5_cc_new_unique");

    VAR_9 = FUNC_5(&VAR_10, VAR_7, VAR_19);
    if (VAR_9 != VAR_5)
 FUNC_1(1, "gss_krb5_copy_ccache");

    VAR_9 = FUNC_6(&VAR_10, VAR_19, ((void*)0), ((void*)0), &VAR_8);
    if (VAR_9 != VAR_5)
 FUNC_1(1, "gss_krb5_import_cred");

    VAR_9 = FUNC_4(&VAR_10, VAR_8, &VAR_12, &VAR_14,
    &VAR_16, &VAR_18);
    if (VAR_9 != VAR_5)
 FUNC_1(1, "gss_inquire_cred 2");

    VAR_9 = FUNC_3(&VAR_10, VAR_11, VAR_12, &VAR_22);
    if (VAR_9 != VAR_5)
 FUNC_1(1, "gss_compare_name");
    if (!VAR_22)
 FUNC_1(1, "names not equal");

    if (VAR_13 != VAR_14)
 FUNC_1(1, "lifetime not equal %lu != %lu",
      (unsigned long)VAR_13, (unsigned long)VAR_14);

    if (VAR_15 != VAR_16) {

 if (VAR_15 != VAR_0 && VAR_16 != VAR_0)
     FUNC_1(1, "usages disjoined");
    }

    FUNC_8(&VAR_10, &VAR_12);
    FUNC_9(&VAR_10, &VAR_18);

    VAR_9 = FUNC_4(&VAR_10, VAR_8, &VAR_12, &VAR_14,
    &VAR_16, &VAR_18);
    if (VAR_9 != VAR_5)
 FUNC_1(1, "gss_inquire_cred");

    VAR_9 = FUNC_3(&VAR_10, VAR_11, VAR_12, &VAR_22);
    if (VAR_9 != VAR_5)
 FUNC_1(1, "gss_compare_name");
    if (!VAR_22)
 FUNC_1(1, "names not equal");

    if (VAR_13 != VAR_14)
 FUNC_1(1, "lifetime not equal %lu != %lu",
      (unsigned long)VAR_13, (unsigned long)VAR_14);

    FUNC_7(&VAR_10, &VAR_7);
    FUNC_7(&VAR_10, &VAR_8);

    FUNC_8(&VAR_10, &VAR_11);
    FUNC_8(&VAR_10, &VAR_12);





    FUNC_9(&VAR_10, &VAR_17);
    FUNC_9(&VAR_10, &VAR_18);

    FUNC_10(VAR_21, VAR_19);
    FUNC_13(VAR_21);
}
