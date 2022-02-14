
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int keytype; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef int kblock ;
struct TYPE_22__ {int context; } ;
typedef TYPE_3__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_20__ {size_t len; TYPE_5__* val; } ;
struct TYPE_23__ {TYPE_1__ keys; int principal; } ;
typedef TYPE_4__ hdb_entry ;
struct TYPE_24__ {TYPE_2__ key; } ;
typedef TYPE_5__ Key ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,size_t,TYPE_5__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_4__*) ;
 int FUNC_3 (int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_5__**,size_t*,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_7 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_8 (int ,int ,TYPE_2__*) ;
 TYPE_2__* FUNC_9 (size_t) ;
 int FUNC_10 (TYPE_2__*,int ,size_t) ;

kadm5_ret_t
FUNC_11 (kadm5_server_context *VAR_1,
     hdb_entry *VAR_2,
     krb5_keyblock **VAR_3,
     int *VAR_4)
{
   krb5_keyblock *VAR_5 = ((void*)0);
   kadm5_ret_t VAR_6 = 0;
   int VAR_7;
   size_t VAR_8, VAR_9;
   Key *VAR_10;

   VAR_6 = FUNC_4(VAR_1->context, VAR_2->principal,
          &VAR_10, &VAR_9, 1);
   if (VAR_6)
 return VAR_6;

   VAR_5 = FUNC_9(VAR_9 * sizeof(VAR_5[0]));
   if (VAR_5 == ((void*)0)) {
 VAR_6 = VAR_0;
 FUNC_0 (VAR_1->context, VAR_9, VAR_10);
 return VAR_6;
   }
   FUNC_10(VAR_5, 0, VAR_9 * sizeof(VAR_5[0]));

   VAR_7 = -1;
   for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {






 if (VAR_7 != -1 && FUNC_5(VAR_10[VAR_8].key.keytype)) {
     VAR_6 = FUNC_6 (VAR_1->context,
            &VAR_5[VAR_7],
            &VAR_5[VAR_8]);
     if (VAR_6)
  goto out;
     VAR_5[VAR_8].keytype = VAR_10[VAR_8].key.keytype;
 } else {
     VAR_6 = FUNC_8 (VAR_1->context,
       VAR_10[VAR_8].key.keytype,
       &VAR_5[VAR_8]);
     if (VAR_6)
  goto out;

     if (FUNC_5(VAR_10[VAR_8].key.keytype))
  VAR_7 = VAR_8;
 }

 VAR_6 = FUNC_6 (VAR_1->context,
        &VAR_5[VAR_8],
        &VAR_10[VAR_8].key);
 if (VAR_6)
     goto out;
   }

out:
   if(VAR_6) {
 for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8)
     FUNC_7 (VAR_1->context, &VAR_5[VAR_8]);
 FUNC_1(VAR_5);
 FUNC_0 (VAR_1->context, VAR_9, VAR_10);
 return VAR_6;
   }

   FUNC_0 (VAR_1->context, VAR_2->keys.len, VAR_2->keys.val);
   VAR_2->keys.val = VAR_10;
   VAR_2->keys.len = VAR_9;
   *VAR_3 = VAR_5;
   *VAR_4 = VAR_9;

   FUNC_3(VAR_1->context, VAR_2, 0);
   FUNC_2(VAR_1->context, VAR_2);

   return 0;
}
