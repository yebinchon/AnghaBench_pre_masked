
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int gss_name_t ;
typedef int gss_ctx_id_t ;
typedef scalar_t__ gss_cred_id_t ;
struct TYPE_8__ {scalar_t__ length; int * value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int gss_OID ;
typedef int OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int*,int *,scalar_t__,TYPE_1__*,int ,int *,int *,TYPE_1__*,int*,int *,scalar_t__*) ;
 int FUNC_4 (int*,TYPE_1__*,int ,int *) ;
 int FUNC_5 (int*,scalar_t__,int *,int ,int ,int,int ,int *,TYPE_1__*,int *,TYPE_1__*,int*,int *) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int*,TYPE_1__*) ;
 int FUNC_8 (int*,int *) ;
 int FUNC_9 (int,int,int ) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_12 (char*,int) ;
 int * FUNC_13 (char const*) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_14 (char const*) ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static void
FUNC_15(gss_OID VAR_19,
     gss_OID VAR_20, const char *VAR_21,
     gss_cred_id_t VAR_22,
     gss_ctx_id_t *VAR_23, gss_ctx_id_t *VAR_24,
     gss_OID *VAR_25,
     gss_cred_id_t *VAR_26)
{
    int VAR_27 = 0, VAR_28 = 0;
    int VAR_29 = 0;
    OM_uint32 VAR_30, VAR_31;
    gss_name_t VAR_32;
    gss_buffer_desc VAR_33, VAR_34;
    OM_uint32 VAR_35 = 0, VAR_36, VAR_37;
    gss_OID VAR_38;
    gss_OID VAR_39;

    *VAR_25 = VAR_8;

    VAR_35 |= VAR_4;
    VAR_35 |= VAR_0;

    if (VAR_14)
 VAR_35 |= VAR_5;
    if (VAR_11)
 VAR_35 |= VAR_1;
    if (VAR_12)
 VAR_35 |= VAR_2;
    if (VAR_15)
 VAR_35 |= VAR_3;

    VAR_33.value = FUNC_13(VAR_21);
    VAR_33.length = FUNC_14(VAR_21);

    VAR_30 = FUNC_4(&VAR_31,
          &VAR_33,
          VAR_20,
          &VAR_32);
    if (FUNC_0(VAR_30))
 FUNC_1(1, "import name creds failed with: %d", VAR_30);

    VAR_33.length = 0;
    VAR_33.value = ((void*)0);

    while (!VAR_27 || !VAR_28) {
 VAR_29++;

 FUNC_11(VAR_10);

 VAR_30 = FUNC_5(&VAR_31,
     VAR_22,
     VAR_24,
     VAR_32,
     VAR_19,
     VAR_35,
     0,
     ((void*)0),
     &VAR_33,
     &VAR_38,
     &VAR_34,
     &VAR_36,
     ((void*)0));
 if (FUNC_0(VAR_30))
     FUNC_2(1, "init_sec_context: %s",
   FUNC_9(VAR_30, VAR_31, VAR_19));
 if (VAR_30 & VAR_9)
     ;
 else
     VAR_28 = 1;

 FUNC_10(&VAR_10);

 if (VAR_28 && VAR_27)
     break;

 if (VAR_33.length != 0)
     FUNC_7(&VAR_31, &VAR_33);

 FUNC_11(VAR_17);

 VAR_30 = FUNC_3(&VAR_31,
       VAR_23,
       VAR_7,
       &VAR_34,
       VAR_6,
       ((void*)0),
       &VAR_39,
       &VAR_33,
       &VAR_37,
       ((void*)0),
       VAR_26);
 if (FUNC_0(VAR_30))
  FUNC_2(1, "accept_sec_context: %s",
       FUNC_9(VAR_30, VAR_31, VAR_39));

 FUNC_10(&VAR_17);

 if (VAR_34.length != 0)
     FUNC_7(&VAR_31, &VAR_34);

 if (VAR_30 & VAR_9)
     ;
 else
     VAR_27 = 1;
    }
    if (VAR_34.length != 0)
 FUNC_7(&VAR_31, &VAR_34);
    if (VAR_33.length != 0)
 FUNC_7(&VAR_31, &VAR_33);
    FUNC_8(&VAR_31, &VAR_32);

    if (VAR_12 || VAR_15) {
 if (VAR_16) {
     if (*VAR_26 != VAR_7)
  FUNC_2(1, "got delegated cred but didn't expect one");
 } else if (*VAR_26 == VAR_7)
     FUNC_2(1, "asked for delegarated cred but did get one");
    } else if (*VAR_26 != VAR_7)
   FUNC_2(1, "got deleg_cred cred but didn't ask");

    if (FUNC_6(VAR_39, VAR_38) == 0)
 FUNC_2(1, "mech mismatch");
    *VAR_25 = VAR_39;

    if (VAR_13 && VAR_29 > VAR_13)
 FUNC_2(1, "num loops %d was lager then max loops %d",
      VAR_29, VAR_13);

    if (VAR_18) {
 FUNC_12("server time offset: %d\n", VAR_17);
 FUNC_12("client time offset: %d\n", VAR_10);
 FUNC_12("num loops %d\n", VAR_29);
    }
}
