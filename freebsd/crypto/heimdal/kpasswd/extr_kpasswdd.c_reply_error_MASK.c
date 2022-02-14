
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr {int dummy; } ;
typedef int krb5_realm ;
typedef int * krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int **,int ,char*,char*,int *) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 scalar_t__ FUNC_5 (int *,int ,char const*) ;
 int FUNC_6 (int,struct sockaddr*,int,int *,int *) ;

__attribute__((used)) static void
FUNC_7 (krb5_realm VAR_1,
      int VAR_2,
      struct sockaddr *VAR_3,
      int VAR_4,
      krb5_error_code VAR_5,
      uint16_t VAR_6,
      const char *VAR_7)
{
    krb5_error_code VAR_8;
    krb5_data VAR_9;
    krb5_data VAR_10;
    krb5_principal VAR_11 = ((void*)0);

    if (FUNC_5(&VAR_10, VAR_6, VAR_7))
 return;

    if (VAR_1) {
 VAR_8 = FUNC_2 (VAR_0, &VAR_11, VAR_1,
       "kadmin", "changepw", ((void*)0));
 if (VAR_8) {
     FUNC_0 (&VAR_10);
     return;
 }
    }

    VAR_8 = FUNC_3 (VAR_0,
    VAR_5,
    ((void*)0),
    &VAR_10,
    ((void*)0),
    VAR_11,
    ((void*)0),
    ((void*)0),
    &VAR_9);
    if (VAR_11)
 FUNC_1(VAR_0, VAR_11);
    FUNC_0 (&VAR_10);
    if (VAR_8) {
 FUNC_4 (VAR_0, VAR_8, "Could not even generate error reply");
 return;
    }
    FUNC_6 (VAR_2, VAR_3, VAR_4, ((void*)0), &VAR_9);
    FUNC_0 (&VAR_9);
}
