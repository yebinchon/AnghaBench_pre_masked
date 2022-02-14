
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_8__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int krb5_context ;
struct TYPE_11__ {size_t len; TYPE_5__* val; } ;
struct TYPE_14__ {TYPE_3__ keys; } ;
struct TYPE_12__ {TYPE_8__ entry; int (* free_entry ) (int ,TYPE_4__*) ;} ;
typedef TYPE_4__ hdb_entry_ex ;
struct TYPE_9__ {int length; int data; } ;
struct TYPE_10__ {TYPE_1__ keyvalue; } ;
struct TYPE_13__ {TYPE_2__ key; } ;
typedef TYPE_5__ Key ;


 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_4__*) ;

void
FUNC_3(krb5_context VAR_0, hdb_entry_ex *VAR_1)
{
    size_t VAR_2;

    if (VAR_1->free_entry)
 (*VAR_1->free_entry)(VAR_0, VAR_1);

    for(VAR_2 = 0; VAR_2 < VAR_1->entry.keys.len; ++VAR_2) {
 Key *VAR_3 = &VAR_1->entry.keys.val[VAR_2];

 FUNC_1 (VAR_3->key.keyvalue.data, 0, VAR_3->key.keyvalue.length);
    }
    FUNC_0(&VAR_1->entry);
}
