
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int hdb_entry ;
struct TYPE_5__ {scalar_t__ last_pw_change; } ;
struct TYPE_6__ {TYPE_1__ u; int element; } ;
struct TYPE_7__ {TYPE_2__ data; int mandatory; } ;
typedef TYPE_3__ HDB_extension ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *) ;

krb5_error_code
FUNC_2(krb5_context VAR_2,
        hdb_entry *VAR_3,
        time_t VAR_4)
{
    HDB_extension VAR_5;

    VAR_5.mandatory = VAR_0;
    VAR_5.data.element = VAR_1;
    if (VAR_4 == 0)
 VAR_4 = FUNC_1(((void*)0));
    VAR_5.data.u.last_pw_change = VAR_4;

    return FUNC_0(VAR_2, VAR_3, &VAR_5);
}
