
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct krb5_plugin {int dummy; } ;
struct krb5_krbhst_data {int flags; int realm; } ;
struct TYPE_3__ {scalar_t__ minor_version; scalar_t__ (* lookup ) (void*,int,int ,int ,int ,int ,struct krb5_krbhst_data*) ;int (* fini ) (void*) ;int (* init ) (int ,void**) ;} ;
typedef TYPE_1__ krb5plugin_service_locate_ftable ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef enum locate_service_type { ____Placeholder_locate_service_type } locate_service_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int,char*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,struct krb5_plugin**) ;
 int FUNC_3 (struct krb5_plugin*) ;
 struct krb5_plugin* FUNC_4 (struct krb5_plugin*) ;
 TYPE_1__* FUNC_5 (struct krb5_plugin*) ;
 int VAR_4 ;
 int FUNC_6 (int ,scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_7 (int ,void**) ;
 scalar_t__ FUNC_8 (void*,int,int ,int ,int ,int ,struct krb5_krbhst_data*) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static void
FUNC_10(krb5_context VAR_5,
   struct krb5_krbhst_data *VAR_6,
   enum locate_service_type VAR_7)
{
    struct krb5_plugin *VAR_8 = ((void*)0), *VAR_9;
    krb5_error_code VAR_10;

    VAR_10 = FUNC_2(VAR_5, VAR_3,
       VAR_1, &VAR_8);
    if(VAR_10 != 0 || VAR_8 == ((void*)0))
 return;

    for (VAR_9 = VAR_8; VAR_9 != ((void*)0); VAR_9 = FUNC_4(VAR_9)) {
 krb5plugin_service_locate_ftable *VAR_11;
 void *VAR_12;

 VAR_11 = FUNC_5(VAR_9);
 if (VAR_11->minor_version != 0)
     continue;

 (*VAR_11->init)(VAR_5, &VAR_12);
 VAR_10 = (*VAR_11->lookup)(VAR_12, VAR_7, VAR_6->realm, 0, 0, VAR_4, VAR_6);
 (*VAR_11->fini)(VAR_12);
 if (VAR_10 && VAR_10 != VAR_2) {
     FUNC_6(VAR_5, VAR_10,
       FUNC_0("Locate plugin failed to lookup realm %s: %d", ""),
       VAR_6->realm, VAR_10);
     break;
 } else if (VAR_10 == 0) {
     FUNC_1(VAR_5, 2, "plugin found result for realm %s", VAR_6->realm);
     VAR_6->flags |= VAR_0;
 }

    }
    FUNC_3(VAR_8);
}
