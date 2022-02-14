
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct krb5_plugin {int dummy; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {scalar_t__ version; } ;
typedef TYPE_1__ krb5_cc_ops ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,struct krb5_plugin**) ;
 int FUNC_1 (struct krb5_plugin*) ;
 struct krb5_plugin* FUNC_2 (struct krb5_plugin*) ;
 TYPE_1__* FUNC_3 (struct krb5_plugin*) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int ) ;

krb5_error_code
FUNC_5(krb5_context VAR_4)
{
    struct krb5_plugin * VAR_5 = ((void*)0);
    struct krb5_plugin *VAR_6;
    krb5_error_code VAR_7;

    VAR_7 = FUNC_0(VAR_4, VAR_2, VAR_1,
                             &VAR_5);
    if (VAR_7)
        return VAR_7;

    for (VAR_6 = VAR_5; VAR_6 != ((void*)0); VAR_6 = FUNC_2(VAR_6)) {
        krb5_cc_ops * VAR_8;
        krb5_error_code VAR_9;

        VAR_8 = FUNC_3(VAR_6);
        if (VAR_8 != ((void*)0) && VAR_8->version == VAR_0) {
            VAR_9 = FUNC_4(VAR_4, VAR_8, VAR_3);
            if (VAR_9 != 0)
                VAR_7 = VAR_9;
        }
    }

    FUNC_1(VAR_5);

    return VAR_7;
}
