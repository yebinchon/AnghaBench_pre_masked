
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct _krb5_key_data {TYPE_3__* key; } ;
struct _krb5_checksum_type {int flags; } ;
typedef scalar_t__ krb5_error_code ;
typedef TYPE_2__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_8__ {size_t length; scalar_t__ data; } ;
struct TYPE_10__ {TYPE_1__ keyvalue; } ;
struct TYPE_9__ {struct _krb5_key_data key; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,unsigned int,struct _krb5_key_data**) ;
 scalar_t__ FUNC_2 (int ,struct _krb5_key_data*) ;
 struct _krb5_key_data* FUNC_3 (TYPE_2__*,int) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*,TYPE_3__**) ;
 int FUNC_5 (int ,scalar_t__,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_3,
   krb5_crypto VAR_4,
   unsigned VAR_5,
   struct _krb5_checksum_type *VAR_6,
   struct _krb5_key_data **VAR_7)
{
    krb5_error_code VAR_8 = 0;

    if(VAR_6->flags & VAR_1)
 VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7);
    else if(VAR_6->flags & VAR_2) {
 size_t VAR_9;

 *VAR_7 = FUNC_3(VAR_4, 0xff );
 if(*VAR_7 == ((void*)0)) {
     FUNC_5(VAR_3, VAR_0, FUNC_0("malloc: out of memory", ""));
     return VAR_0;
 }
 VAR_8 = FUNC_4(VAR_3, VAR_4->key.key, &(*VAR_7)->key);
 if(VAR_8)
     return VAR_8;
 for(VAR_9 = 0; VAR_9 < (*VAR_7)->key->keyvalue.length; VAR_9++)
     ((unsigned char*)(*VAR_7)->key->keyvalue.data)[VAR_9] ^= 0xF0;
    } else {
 *VAR_7 = &VAR_4->key;
    }
    if(VAR_8 == 0)
 VAR_8 = FUNC_2(VAR_3, *VAR_7);
    return VAR_8;
}
