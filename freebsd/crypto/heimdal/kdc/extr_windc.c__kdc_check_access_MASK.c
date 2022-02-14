
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_kdc_configuration ;
typedef int krb5_error_code ;
typedef int krb5_data ;
typedef int krb5_context ;
typedef int hdb_entry_ex ;
struct TYPE_6__ {int (* client_access ) (int ,int ,int *,int *,char const*,int *,char const*,TYPE_1__*,int *) ;} ;
struct TYPE_5__ {scalar_t__ msg_type; } ;
typedef TYPE_1__ KDC_REQ ;


 int FUNC_0 (int ,int *,int *,char const*,int *,char const*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,int *,int *,char const*,int *,char const*,TYPE_1__*,int *) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

krb5_error_code
FUNC_2(krb5_context VAR_3,
    krb5_kdc_configuration *VAR_4,
    hdb_entry_ex *VAR_5, const char *VAR_6,
    hdb_entry_ex *VAR_7, const char *VAR_8,
    KDC_REQ *VAR_9,
    krb5_data *VAR_10)
{
    if (VAR_2 == ((void*)0))
     return FUNC_0(VAR_3, VAR_4,
       VAR_5, VAR_6,
       VAR_7, VAR_8,
       VAR_9->msg_type == VAR_0);

    return (VAR_2->client_access)(VAR_1,
        VAR_3, VAR_4,
        VAR_5, VAR_6,
        VAR_7, VAR_8,
        VAR_9, VAR_10);
}
