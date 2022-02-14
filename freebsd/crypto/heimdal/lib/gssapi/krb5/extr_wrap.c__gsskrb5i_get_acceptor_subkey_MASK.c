
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* gsskrb5_ctx ;
struct TYPE_3__ {int more_flags; int auth_context; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int **) ;
 scalar_t__ FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int ,char*) ;

krb5_error_code
FUNC_3(const gsskrb5_ctx VAR_2,
         krb5_context VAR_3,
         krb5_keyblock **VAR_4)
{
    krb5_error_code VAR_5;
    *VAR_4 = ((void*)0);

    if (VAR_2->more_flags & VAR_1) {
 VAR_5 = FUNC_1(VAR_3,
          VAR_2->auth_context,
          VAR_4);
    } else {
 VAR_5 = FUNC_0(VAR_3,
         VAR_2->auth_context,
         VAR_4);
    }
    if (VAR_5 == 0 && *VAR_4 == ((void*)0)) {
 FUNC_2(VAR_3, 0, "No acceptor subkey available");
 return VAR_0;
    }
    return VAR_5;
}
