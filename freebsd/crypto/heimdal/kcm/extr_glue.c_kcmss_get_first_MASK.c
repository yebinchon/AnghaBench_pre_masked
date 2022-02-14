
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int * krb5_cc_cursor ;
typedef TYPE_1__* kcm_ccache ;
struct TYPE_4__ {int * creds; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static krb5_error_code
FUNC_2 (krb5_context VAR_1,
   krb5_ccache VAR_2,
   krb5_cc_cursor *VAR_3)
{
    kcm_ccache VAR_4 = FUNC_0(VAR_2);

    FUNC_1(VAR_4);

    *VAR_3 = VAR_4->creds;

    return (*VAR_3 == ((void*)0)) ? VAR_0 : 0;
}
