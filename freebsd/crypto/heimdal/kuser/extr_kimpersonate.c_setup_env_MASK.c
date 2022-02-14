
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int FUNC_0 () ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,int,scalar_t__,char*) ;
 int FUNC_4 (int ,int,char*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int *) ;
 int FUNC_8 (int ,char*,scalar_t__) ;
 int FUNC_9 (scalar_t__,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_11 (krb5_context VAR_8, krb5_keytab *VAR_9)
{
    krb5_error_code VAR_10;

    if (VAR_2)
 VAR_10 = FUNC_6 (VAR_8, VAR_2, VAR_9);
    else
 VAR_10 = FUNC_5 (VAR_8, VAR_9);
    if (VAR_10)
 FUNC_3 (VAR_8, 1, VAR_10, "resolving keytab");

    if (VAR_1 == ((void*)0))
 FUNC_4 (VAR_8, 1, "missing client principal");
    VAR_10 = FUNC_7 (VAR_8, VAR_1, &VAR_0);
    if (VAR_10)
 FUNC_3 (VAR_8, 1, VAR_10, "resolvning client name");

    if (VAR_4 == ((void*)0))
 FUNC_4 (VAR_8, 1, "missing server principal");
    VAR_10 = FUNC_7 (VAR_8, VAR_4, &VAR_3);
    if (VAR_10)
 FUNC_3 (VAR_8, 1, VAR_10, "resolvning client name");

    if (VAR_7) {
 int VAR_11;

 VAR_11 = FUNC_9(VAR_7,
           FUNC_0(), 0);
 if (VAR_11 <= 0) {
     FUNC_8 (VAR_8, "bad ticket flags: `%s'", VAR_7);
     FUNC_10 (FUNC_0(), VAR_5);
     FUNC_1 (1);
 }
 if (VAR_11)
     VAR_6 = FUNC_2 (VAR_11);
    }
}
