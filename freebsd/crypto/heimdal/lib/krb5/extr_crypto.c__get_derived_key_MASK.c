
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct _krb5_key_data {int key; } ;
typedef int krb5_error_code ;
typedef TYPE_3__* krb5_crypto ;
typedef int krb5_context ;
typedef int constant ;
struct TYPE_7__ {int key; } ;
struct TYPE_8__ {int num_key_usage; int et; TYPE_2__ key; TYPE_1__* key_usage; } ;
struct TYPE_6__ {unsigned int usage; struct _krb5_key_data key; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int ,struct _krb5_key_data*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,unsigned int,int) ;
 struct _krb5_key_data* FUNC_3 (TYPE_3__*,unsigned int) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_1,
   krb5_crypto VAR_2,
   unsigned VAR_3,
   struct _krb5_key_data **VAR_4)
{
    int VAR_5;
    struct _krb5_key_data *VAR_6;
    unsigned char VAR_7[5];

    for(VAR_5 = 0; VAR_5 < VAR_2->num_key_usage; VAR_5++)
 if(VAR_2->key_usage[VAR_5].usage == VAR_3) {
     *VAR_4 = &VAR_2->key_usage[VAR_5].key;
     return 0;
 }
    VAR_6 = FUNC_3(VAR_2, VAR_3);
    if(VAR_6 == ((void*)0)) {
 FUNC_5(VAR_1, VAR_0, FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    FUNC_4(VAR_1, VAR_2->key.key, &VAR_6->key);
    FUNC_2(VAR_7, VAR_3, 5);
    FUNC_1(VAR_1, VAR_2->et, VAR_6, VAR_7, sizeof(VAR_7));
    *VAR_4 = VAR_6;
    return 0;
}
