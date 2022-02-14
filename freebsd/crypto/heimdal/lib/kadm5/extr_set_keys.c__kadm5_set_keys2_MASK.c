
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_19__ {int key_data_ver; int * key_data_length; int * key_data_contents; int * key_data_type; } ;
typedef TYPE_3__ krb5_key_data ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_20__ {int context; } ;
typedef TYPE_4__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int int16_t ;
struct TYPE_18__ {unsigned int len; TYPE_7__* val; } ;
struct TYPE_21__ {TYPE_2__ keys; } ;
typedef TYPE_5__ hdb_entry ;
struct TYPE_17__ {int keyvalue; int keytype; } ;
struct TYPE_23__ {TYPE_6__* salt; TYPE_1__ key; int * mkvno; } ;
struct TYPE_22__ {int salt; int type; } ;
typedef TYPE_6__ Salt ;
typedef TYPE_7__ Key ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,unsigned int,TYPE_7__*) ;
 int FUNC_1 (TYPE_7__*,unsigned int) ;
 TYPE_6__* FUNC_2 (int,int) ;
 int FUNC_3 (int ,TYPE_5__*) ;
 int FUNC_4 (int ,TYPE_5__*,int ) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 TYPE_7__* FUNC_6 (unsigned int) ;

kadm5_ret_t
FUNC_7(kadm5_server_context *VAR_1,
   hdb_entry *VAR_2,
   int16_t VAR_3,
   krb5_key_data *VAR_4)
{
    krb5_error_code VAR_5;
    int VAR_6;
    unsigned VAR_7;
    Key *VAR_8;

    VAR_7 = VAR_3;
    VAR_8 = FUNC_6 (VAR_7 * sizeof(*VAR_8));
    if (VAR_8 == ((void*)0) && VAR_7 != 0)
 return VAR_0;

    FUNC_1 (VAR_8, VAR_7);

    for(VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
 VAR_8[VAR_6].mkvno = ((void*)0);
 VAR_8[VAR_6].key.keytype = VAR_4[VAR_6].key_data_type[0];
 VAR_5 = FUNC_5(&VAR_8[VAR_6].key.keyvalue,
        VAR_4[VAR_6].key_data_contents[0],
        VAR_4[VAR_6].key_data_length[0]);
 if(VAR_5)
     goto out;
 if(VAR_4[VAR_6].key_data_ver == 2) {
     Salt *VAR_9;

     VAR_9 = FUNC_2(1, sizeof(*VAR_9));
     if(VAR_9 == ((void*)0)) {
  VAR_5 = VAR_0;
  goto out;
     }
     VAR_8[VAR_6].salt = VAR_9;
     VAR_9->type = VAR_4[VAR_6].key_data_type[1];
     FUNC_5(&VAR_9->salt,
      VAR_4[VAR_6].key_data_contents[1],
      VAR_4[VAR_6].key_data_length[1]);
 } else
     VAR_8[VAR_6].salt = ((void*)0);
    }
    FUNC_0 (VAR_1->context, VAR_2->keys.len, VAR_2->keys.val);
    VAR_2->keys.len = VAR_7;
    VAR_2->keys.val = VAR_8;

    FUNC_4(VAR_1->context, VAR_2, 0);
    FUNC_3(VAR_1->context, VAR_2);

    return 0;
 out:
    FUNC_0 (VAR_1->context, VAR_7, VAR_8);
    return VAR_5;
}
