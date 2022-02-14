
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int time_t ;
typedef int krb5_error_code ;
typedef int hdb_entry ;
struct TYPE_5__ {int last_pw_change; } ;
struct TYPE_6__ {TYPE_1__ u; } ;
struct TYPE_7__ {TYPE_2__ data; } ;
typedef TYPE_3__ HDB_extension ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int const*,int ) ;

krb5_error_code
FUNC_1(const hdb_entry *VAR_1, time_t *VAR_2)
{
    const HDB_extension *VAR_3;

    VAR_3 = FUNC_0(VAR_1, VAR_0);
    if (VAR_3)
 *VAR_2 = VAR_3->data.u.last_pw_change;
    else
 *VAR_2 = 0;

    return 0;
}
