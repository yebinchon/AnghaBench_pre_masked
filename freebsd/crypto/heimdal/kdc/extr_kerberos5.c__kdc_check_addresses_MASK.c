
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_8__ {scalar_t__ check_ticket_addresses; scalar_t__ allow_null_ticket_addresses; } ;
typedef TYPE_2__ krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ krb5_boolean ;
typedef int krb5_address ;
struct TYPE_9__ {size_t len; TYPE_1__* val; } ;
struct TYPE_7__ {scalar_t__ addr_type; } ;
typedef TYPE_3__ HostAddresses ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *,TYPE_3__*) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,struct sockaddr const*,int *) ;

krb5_boolean
FUNC_3(krb5_context VAR_3,
       krb5_kdc_configuration *VAR_4,
       HostAddresses *VAR_5, const struct sockaddr *VAR_6)
{
    krb5_error_code VAR_7;
    krb5_address VAR_8;
    krb5_boolean VAR_9;
    krb5_boolean VAR_10 = VAR_2;
    size_t VAR_11;

    if(VAR_4->check_ticket_addresses == 0)
 return VAR_2;

    if(VAR_5 == ((void*)0))
 return VAR_4->allow_null_ticket_addresses;

    for (VAR_11 = 0; VAR_11 < VAR_5->len; ++VAR_11) {
 if (VAR_5->val[VAR_11].addr_type != VAR_1) {
     VAR_10 = VAR_0;
 }
    }







    if(VAR_10)
 return VAR_4->allow_null_ticket_addresses;

    VAR_7 = FUNC_2 (VAR_3, VAR_6, &VAR_8);
    if(VAR_7)
 return VAR_0;

    VAR_9 = FUNC_0(VAR_3, &VAR_8, VAR_5);
    FUNC_1 (VAR_3, &VAR_8);
    return VAR_9;
}
