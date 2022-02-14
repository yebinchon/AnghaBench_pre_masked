
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_13__ {int context; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_12__ {unsigned int len; TYPE_4__* val; } ;
struct TYPE_14__ {TYPE_1__ keys; } ;
typedef TYPE_3__ hdb_entry ;
struct TYPE_15__ {int * salt; int key; int * mkvno; } ;
typedef TYPE_4__ Key ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,unsigned int,TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*,unsigned int) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int *) ;
 TYPE_4__* FUNC_5 (unsigned int) ;

kadm5_ret_t
FUNC_6(kadm5_server_context *VAR_1,
   hdb_entry *VAR_2,
   int VAR_3,
   krb5_keyblock *VAR_4)
{
    krb5_error_code VAR_5;
    int VAR_6;
    unsigned VAR_7;
    Key *VAR_8;

    VAR_7 = VAR_3;
    VAR_8 = FUNC_5 (VAR_7 * sizeof(*VAR_8));
    if (VAR_8 == ((void*)0) && VAR_7 != 0)
 return VAR_0;

    FUNC_1 (VAR_8, VAR_7);

    for(VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
 VAR_8[VAR_6].mkvno = ((void*)0);
 VAR_5 = FUNC_4 (VAR_1->context,
        &VAR_4[VAR_6],
        &VAR_8[VAR_6].key);
 if(VAR_5)
     goto out;
 VAR_8[VAR_6].salt = ((void*)0);
    }
    FUNC_0 (VAR_1->context, VAR_2->keys.len, VAR_2->keys.val);
    VAR_2->keys.len = VAR_7;
    VAR_2->keys.val = VAR_8;

    FUNC_3(VAR_1->context, VAR_2, 0);
    FUNC_2(VAR_1->context, VAR_2);

    return 0;
 out:
    FUNC_0 (VAR_1->context, VAR_7, VAR_8);
    return VAR_5;
}
