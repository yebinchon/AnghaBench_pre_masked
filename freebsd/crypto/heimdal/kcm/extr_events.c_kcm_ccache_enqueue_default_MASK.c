
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
struct TYPE_5__ {int ccache; } ;
typedef TYPE_1__ kcm_event ;
typedef int kcm_ccache ;
typedef int event ;


 scalar_t__ FUNC_0 (int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

krb5_error_code
FUNC_3(krb5_context VAR_0,
      kcm_ccache VAR_1,
      krb5_creds *VAR_2)
{
    kcm_event VAR_3;
    krb5_error_code VAR_4;

    FUNC_2(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.ccache = VAR_1;

    VAR_4 = FUNC_0(VAR_0, &VAR_3, VAR_2);
    if (VAR_4)
 return VAR_4;

    VAR_4 = FUNC_1(VAR_0, &VAR_3);
    if (VAR_4)
 return VAR_4;

    return 0;
}
