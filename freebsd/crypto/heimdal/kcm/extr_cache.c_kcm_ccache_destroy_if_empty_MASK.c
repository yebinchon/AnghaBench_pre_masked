
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_4__ {int name; int * creds; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;

krb5_error_code
FUNC_2(krb5_context VAR_0,
       kcm_ccache VAR_1)
{
    krb5_error_code VAR_2;

    FUNC_0(VAR_1);

    if (VAR_1->creds == ((void*)0)) {
 VAR_2 = FUNC_1(VAR_0, VAR_1->name);
    } else
 VAR_2 = 0;

    return VAR_2;
}
