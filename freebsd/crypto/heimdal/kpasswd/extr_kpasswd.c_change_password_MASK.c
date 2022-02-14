
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int pwbuf ;
typedef int * krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_6__ {scalar_t__ length; scalar_t__ data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 (char**,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int,scalar_t__,char*) ;
 int FUNC_6 (int ,int,char*) ;
 char* FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ,int ,char*,int *,int*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_9 (int ,int *,char**) ;
 int FUNC_10 (int ,scalar_t__,char*) ;
 int FUNC_11 (char*,char*,char*,int,char*) ;

__attribute__((used)) static int
FUNC_12(krb5_context VAR_1,
  krb5_principal VAR_2,
  krb5_ccache VAR_3)
{
    krb5_data VAR_4, VAR_5;
    int VAR_6;
    krb5_error_code VAR_7;
    char VAR_8[VAR_0];
    char *VAR_9, *VAR_10;

    FUNC_4 (&VAR_4);
    FUNC_4 (&VAR_5);

    VAR_10 = VAR_9 = ((void*)0);
    if (VAR_2 == ((void*)0))
 FUNC_1(&VAR_9, "New password: ");
    else {
 VAR_7 = FUNC_9(VAR_1, VAR_2, &VAR_10);
 if (VAR_7)
     FUNC_5(VAR_1, 1, VAR_7, "krb5_unparse_name");

 FUNC_1(&VAR_9, "New password for %s: ", VAR_10);
    }

    if (VAR_9 == ((void*)0))
 FUNC_6 (VAR_1, 1, "out of memory");

    VAR_7 = FUNC_0 (VAR_8, sizeof(VAR_8), VAR_9, 1);
    FUNC_2(VAR_9);
    if (VAR_10)
 FUNC_2(VAR_10);
    if (VAR_7 != 0) {
 return 1;
    }

    VAR_7 = FUNC_8 (VAR_1, VAR_3, VAR_8,
       VAR_2,
       &VAR_6,
       &VAR_4,
       &VAR_5);
    if (VAR_7) {
 FUNC_10 (VAR_1, VAR_7, "krb5_set_password_using_ccache");
 return 1;
    }

    FUNC_11 ("%s%s%.*s\n", FUNC_7(VAR_1, VAR_6),
     VAR_5.length > 0 ? " : " : "",
     (int)VAR_5.length,
     VAR_5.length > 0 ? (char *)VAR_5.data : "");

    FUNC_3 (&VAR_4);
    FUNC_3 (&VAR_5);

    return VAR_7 != 0;
}
