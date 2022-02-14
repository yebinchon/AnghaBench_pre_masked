
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int krb5_cc_cache_cursor ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 char* FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 int FUNC_8 (int ,int,scalar_t__,char*,char const*) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (int ,int ,char**) ;
 int FUNC_11 (char*,char*) ;

__attribute__((used)) static void
FUNC_12(krb5_context VAR_2, const char *VAR_3, int VAR_4)
{
    krb5_cc_cache_cursor VAR_5;
    krb5_error_code VAR_6;
    krb5_ccache VAR_7;

    VAR_6 = FUNC_2 (VAR_2, VAR_3, &VAR_5);
    if (VAR_6 == VAR_0)
 return;
    else if (VAR_6)
 FUNC_8(VAR_2, 1, VAR_6, "krb5_cc_cache_get_first(%s)", VAR_3);


    while ((VAR_6 = FUNC_3 (VAR_2, VAR_5, &VAR_7)) == 0) {
 krb5_principal VAR_8;
 char *VAR_9;

 if (VAR_1)
     FUNC_11("name: %s\n", FUNC_6(VAR_2, VAR_7));
 VAR_6 = FUNC_7(VAR_2, VAR_7, &VAR_8);
 if (VAR_6 == 0) {
     VAR_6 = FUNC_10(VAR_2, VAR_8, &VAR_9);
     if (VAR_6 == 0) {
  if (VAR_1)
      FUNC_11("\tprincipal: %s\n", VAR_9);
  FUNC_0(VAR_9);
     }
     FUNC_9(VAR_2, VAR_8);
 }
 if (VAR_4)
     FUNC_5(VAR_2, VAR_7);
 else
     FUNC_4(VAR_2, VAR_7);
    }

    FUNC_1(VAR_2, VAR_5);
}
