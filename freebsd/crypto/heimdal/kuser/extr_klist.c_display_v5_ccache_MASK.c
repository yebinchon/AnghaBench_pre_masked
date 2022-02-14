
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int,scalar_t__,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_9 (krb5_context VAR_1, krb5_ccache VAR_2,
     int VAR_3, int VAR_4,
     int VAR_5, int VAR_6)
{
    krb5_error_code VAR_7;
    krb5_principal VAR_8;
    int VAR_9 = 0;


    VAR_7 = FUNC_4 (VAR_1, VAR_2, &VAR_8);
    if (VAR_7) {
 if(VAR_7 == VAR_0) {
     if (!VAR_3)
  FUNC_7(VAR_1, FUNC_0("No ticket file: %s", ""),
      FUNC_3(VAR_1, VAR_2));
     return 1;
 } else
     FUNC_5 (VAR_1, 1, VAR_7, "krb5_cc_get_principal");
    }
    if (VAR_3)
 VAR_9 = FUNC_1 (VAR_1, VAR_2, VAR_8, ((void*)0));
    else
 FUNC_8 (VAR_1, VAR_2, VAR_8, VAR_4,
         VAR_5, VAR_6);

    VAR_7 = FUNC_2 (VAR_1, VAR_2);
    if (VAR_7)
 FUNC_5 (VAR_1, 1, VAR_7, "krb5_cc_close");

    FUNC_6 (VAR_1, VAR_8);

    return VAR_9;
}
