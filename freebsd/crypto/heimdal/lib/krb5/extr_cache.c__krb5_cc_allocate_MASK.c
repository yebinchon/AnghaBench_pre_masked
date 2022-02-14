
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_1__* krb5_ccache ;
typedef int krb5_cc_ops ;
struct TYPE_4__ {int const* ops; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int) ;

krb5_error_code
FUNC_3(krb5_context VAR_1,
    const krb5_cc_ops *VAR_2,
    krb5_ccache *VAR_3)
{
    krb5_ccache VAR_4;

    VAR_4 = FUNC_2 (sizeof(*VAR_4));
    if(VAR_4 == ((void*)0)) {
 FUNC_1(VAR_1, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_4->ops = VAR_2;
    *VAR_3 = VAR_4;

    return 0;
}
