
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int princ ;
typedef int name ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_5__ {int principal; } ;
typedef TYPE_1__ kadm5_principal_ent_rec ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,TYPE_1__*,int,char*) ;
 int FUNC_1 (void*,TYPE_1__*) ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 scalar_t__ FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_8 (krb5_context VAR_1, void *VAR_2,
   unsigned VAR_3, char **VAR_4)
{
    kadm5_principal_ent_rec VAR_5;
    char VAR_6[64];
    int VAR_7, VAR_8;
    krb5_error_code VAR_9;
    int VAR_10;

    VAR_7 = FUNC_6();
    VAR_8 = FUNC_6();

    FUNC_7 (VAR_6, sizeof(VAR_6), "%s%d", VAR_4[VAR_7 % VAR_3], VAR_8 % 1000);

    VAR_10 = VAR_0;

    FUNC_4(&VAR_5, 0, sizeof(VAR_5));
    VAR_9 = FUNC_3(VAR_1, VAR_6, &VAR_5.principal);
    if (VAR_9)
 FUNC_2(VAR_1, 1, VAR_9, "krb5_parse_name");

    VAR_9 = FUNC_0 (VAR_2, &VAR_5, VAR_10, VAR_6);
    if (VAR_9)
 FUNC_2 (VAR_1, 1, VAR_9, "kadm5_create_principal");
    FUNC_1(VAR_2, &VAR_5);
    FUNC_5 ("%s\n", VAR_6);
}
