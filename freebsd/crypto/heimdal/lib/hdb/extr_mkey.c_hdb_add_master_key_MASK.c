
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef TYPE_2__* hdb_master_key ;
struct TYPE_5__ {int vno; } ;
struct TYPE_6__ {struct TYPE_6__* next; TYPE_1__ keytab; } ;


 scalar_t__ FUNC_0 (int ,int,int *,int ,TYPE_2__**) ;
 int FUNC_1 (int,int ) ;

krb5_error_code
FUNC_2(krb5_context VAR_0, krb5_keyblock *VAR_1,
     hdb_master_key *VAR_2)
{
    int VAR_3 = 0;
    hdb_master_key VAR_4;
    krb5_error_code VAR_5;

    for(VAR_4 = *VAR_2; VAR_4; VAR_4 = VAR_4->next)
 VAR_3 = FUNC_1(VAR_3, VAR_4->keytab.vno);
    VAR_3++;
    VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_1, 0, &VAR_4);
    if(VAR_5)
 return VAR_5;
    VAR_4->next = *VAR_2;
    *VAR_2 = VAR_4;
    return 0;
}
