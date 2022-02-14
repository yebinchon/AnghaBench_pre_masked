
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct krb5_plugin {int dummy; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_3__ {scalar_t__ minor_version; int (* init ) (int ,int *) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,char*,struct krb5_plugin**) ;
 int FUNC_1 (struct krb5_plugin*) ;
 struct krb5_plugin* FUNC_2 (struct krb5_plugin*) ;
 TYPE_1__* FUNC_3 (struct krb5_plugin*) ;
 int FUNC_4 (int ,scalar_t__,char*) ;
 int FUNC_5 (int ,int *) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;

krb5_error_code
FUNC_6(krb5_context VAR_5)
{
    struct krb5_plugin *VAR_6 = ((void*)0), *VAR_7;
    krb5_error_code VAR_8;

    VAR_8 = FUNC_0(VAR_5, VAR_2, "windc", &VAR_6);
    if(VAR_8 != 0 || VAR_6 == ((void*)0))
 return 0;

    for (VAR_7 = VAR_6; VAR_7 != ((void*)0); VAR_7 = FUNC_2(VAR_7)) {

 VAR_4 = FUNC_3(VAR_7);
 if (VAR_4->minor_version < VAR_1)
     continue;

 (*VAR_4->init)(VAR_5, &VAR_3);
 break;
    }
    FUNC_1(VAR_6);
    if (VAR_7 == ((void*)0)) {
 FUNC_4(VAR_5, VAR_0, "Did not find any WINDC plugin");
 VAR_4 = ((void*)0);
 return VAR_0;
    }

    return 0;
}
