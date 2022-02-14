
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int keyblock; int timestamp; int vno; } ;
typedef TYPE_4__ krb5_keytab_entry ;
typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_10__ {int len; TYPE_6__* val; } ;
struct TYPE_9__ {int time; } ;
struct TYPE_11__ {TYPE_2__ keys; TYPE_1__ created_by; int kvno; } ;
struct TYPE_13__ {TYPE_3__ entry; } ;
typedef TYPE_5__ hdb_entry_ex ;
struct TYPE_14__ {int key; int * salt; int * mkvno; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *,int *) ;

krb5_error_code
FUNC_2(krb5_context VAR_1,
        const krb5_keytab_entry *VAR_2,
        hdb_entry_ex *VAR_3)
{
    VAR_3->entry.kvno = VAR_2->vno;
    VAR_3->entry.created_by.time = VAR_2->timestamp;

    VAR_3->entry.keys.val = FUNC_0(1, sizeof(VAR_3->entry.keys.val[0]));
    if (VAR_3->entry.keys.val == ((void*)0))
 return VAR_0;
    VAR_3->entry.keys.len = 1;

    VAR_3->entry.keys.val[0].mkvno = ((void*)0);
    VAR_3->entry.keys.val[0].salt = ((void*)0);

    return FUNC_1(VAR_1,
           &VAR_2->keyblock,
           &VAR_3->entry.keys.val[0].key);
}
