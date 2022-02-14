
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct krb5_plugin {int dummy; } ;
struct TYPE_3__ {scalar_t__ minor_version; scalar_t__ (* send_to_kdc ) (int ,void*,int *,int ,int const*,int *) ;int (* fini ) (void*) ;int (* init ) (int ,void**) ;} ;
typedef TYPE_1__ krb5plugin_send_to_kdc_ftable ;
typedef int krb5_krbhst_info ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ,struct krb5_plugin**) ;
 int FUNC_2 (struct krb5_plugin*) ;
 struct krb5_plugin* FUNC_3 (struct krb5_plugin*) ;
 TYPE_1__* FUNC_4 (struct krb5_plugin*) ;
 int FUNC_5 (int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_6 (int ,void**) ;
 scalar_t__ FUNC_7 (int ,void*,int *,int ,int const*,int *) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static krb5_error_code
FUNC_9(krb5_context VAR_3,
  krb5_krbhst_info *VAR_4,
  time_t VAR_5,
  const krb5_data *VAR_6,
  krb5_data *VAR_7)
{
    struct krb5_plugin *VAR_8 = ((void*)0), *VAR_9;
    krb5_error_code VAR_10;

    VAR_10 = FUNC_1(VAR_3, VAR_2, VAR_1, &VAR_8);
    if(VAR_10 != 0 || VAR_8 == ((void*)0))
 return VAR_0;

    for (VAR_9 = VAR_8; VAR_9 != ((void*)0); VAR_9 = FUNC_3(VAR_9)) {
 krb5plugin_send_to_kdc_ftable *VAR_11;
 void *VAR_12;

 VAR_11 = FUNC_4(VAR_9);
 if (VAR_11->minor_version != 0)
     continue;

 (*VAR_11->init)(VAR_3, &VAR_12);
 VAR_10 = (*VAR_11->send_to_kdc)(VAR_3, VAR_12, VAR_4,
          VAR_5, VAR_6, VAR_7);
 (*VAR_11->fini)(VAR_12);
 if (VAR_10 == 0)
     break;
 if (VAR_10 != VAR_0) {
     FUNC_5(VAR_3, VAR_10,
       FUNC_0("Plugin send_to_kdc failed to "
          "lookup with error: %d", ""), VAR_10);
     break;
 }
    }
    FUNC_2(VAR_8);
    return VAR_0;
}
