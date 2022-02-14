
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prop_data {int sock; int * auth_context; int context; } ;
typedef int portstr ;
typedef int krb5_realm ;
typedef int krb5_principal ;
typedef int krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int * krb5_auth_context ;
typedef int HDB ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int ,char const*,int *,int,struct prop_data*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,char*,char*,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int *,int*,int *) ;
 int FUNC_10 (int ,int **,int*,int ,int *,int ,int,int *,int *,int ,int *,int *,int *) ;
 int FUNC_11 (int ,char*,int ,int ,int *) ;
 int FUNC_12 (int ,int ,char*,...) ;
 int FUNC_13 (int ,char*,char*) ;
 int FUNC_14 (int ,int *,int*,int *) ;
 int FUNC_15 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,char*) ;
 int FUNC_18 (char*,int,char*,int) ;
 char* FUNC_19 (char*,char) ;

__attribute__((used)) static int
FUNC_20 (krb5_context VAR_9, int VAR_10,
      const char *VAR_11,
      HDB *VAR_12, krb5_ccache VAR_13,
      int VAR_14, int VAR_15, char **VAR_16)
{
    krb5_principal VAR_17;
    krb5_error_code VAR_18;
    int VAR_19, VAR_20 = 0;

    for(VAR_19 = VAR_14; VAR_19 < VAR_15; VAR_19++){
 krb5_auth_context VAR_21;
 int VAR_22;
 struct prop_data VAR_23;
 krb5_data VAR_24;

 char *VAR_25, VAR_26[VAR_6];
 char *VAR_27 = VAR_16[VAR_19];

 VAR_25 = FUNC_19(VAR_27, ':');
 if(VAR_25 == ((void*)0)) {
     FUNC_18(VAR_26, sizeof(VAR_26), "%u",
       FUNC_16(FUNC_7 (VAR_9, "hprop", "tcp",
            VAR_3)));
     VAR_25 = VAR_26;
 } else
     *VAR_25++ = '\0';

 VAR_22 = FUNC_17(VAR_9, VAR_27, VAR_25);
 if(VAR_22 < 0) {
     VAR_20++;
     FUNC_12 (VAR_9, VAR_7, "connect %s", VAR_27);
     continue;
 }

 VAR_18 = FUNC_11(VAR_9, VAR_16[VAR_19],
          VAR_2, VAR_5, &VAR_17);
 if(VAR_18) {
     VAR_20++;
     FUNC_12(VAR_9, VAR_18, "krb5_sname_to_principal(%s)", VAR_27);
     FUNC_0(VAR_22);
     continue;
 }

        if (VAR_8) {
            krb5_realm VAR_28;
            FUNC_6(VAR_9,&VAR_28);
            FUNC_8(VAR_9,VAR_17,VAR_28);
     FUNC_15(VAR_28);
        }

 VAR_21 = ((void*)0);
 VAR_18 = FUNC_10(VAR_9,
       &VAR_21,
       &VAR_22,
       VAR_4,
       ((void*)0),
       VAR_17,
       VAR_0 | VAR_1,
       ((void*)0),
       ((void*)0),
       VAR_13,
       ((void*)0),
       ((void*)0),
       ((void*)0));

 FUNC_5(VAR_9, VAR_17);

 if(VAR_18) {
     VAR_20++;
     FUNC_12(VAR_9, VAR_18, "krb5_sendauth (%s)", VAR_27);
     FUNC_0(VAR_22);
     goto next_host;
 }

 VAR_23.context = VAR_9;
 VAR_23.auth_context = VAR_21;
 VAR_23.sock = VAR_22;

 VAR_18 = FUNC_1 (VAR_9, VAR_11, VAR_12, VAR_10, &VAR_23);
 if (VAR_18) {
     FUNC_13(VAR_9, "iterate to host %s failed", VAR_27);
     VAR_20++;
     goto next_host;
 }

 FUNC_4 (&VAR_24);
 VAR_18 = FUNC_14(VAR_9, VAR_21, &VAR_22, &VAR_24);
 if(VAR_18) {
     FUNC_12(VAR_9, VAR_18, "krb5_write_priv_message");
     VAR_20++;
     goto next_host;
 }

 VAR_18 = FUNC_9(VAR_9, VAR_21, &VAR_22, &VAR_24);
 if(VAR_18) {
     FUNC_12(VAR_9, VAR_18, "krb5_read_priv_message: %s", VAR_27);
     VAR_20++;
     goto next_host;
 } else
     FUNC_3 (&VAR_24);

    next_host:
 FUNC_2(VAR_9, VAR_21);
 FUNC_0(VAR_22);
    }
    if (VAR_20)
 return 1;
    return 0;
}
