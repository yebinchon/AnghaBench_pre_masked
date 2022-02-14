
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int cred ;


 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int ,int,scalar_t__,char*,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ,char*,int *,int *,int ,int *,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (int *,int ,int) ;
 unsigned int FUNC_8 () ;
 unsigned int FUNC_9 (char const*,char***) ;

__attribute__((used)) static void
FUNC_10 (const char *VAR_0, unsigned VAR_1)
{
    krb5_principal VAR_2;
    krb5_context VAR_3;
    krb5_error_code VAR_4;
    krb5_creds VAR_5;
    int VAR_6;
    char **VAR_7;
    unsigned VAR_8;

    VAR_4 = FUNC_5 (&VAR_3);
    if (VAR_4)
 FUNC_0 (1, "krb5_init_context failed: %d", VAR_4);

    VAR_8 = FUNC_9 (VAR_0, &VAR_7);

    for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
 char *VAR_9 = VAR_7[FUNC_8() % VAR_8];

 FUNC_7(&VAR_5, 0, sizeof(VAR_5));

 VAR_4 = FUNC_6 (VAR_3, VAR_9, &VAR_2);
 if (VAR_4)
     FUNC_1 (VAR_3, 1, VAR_4, "krb5_parse_name %s", VAR_9);

 VAR_4 = FUNC_4 (VAR_3, &VAR_5, VAR_2, "",
         ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0));
 if (VAR_4)
     FUNC_2 (VAR_3, &VAR_5);
 FUNC_3(VAR_3, VAR_2);
    }
}
