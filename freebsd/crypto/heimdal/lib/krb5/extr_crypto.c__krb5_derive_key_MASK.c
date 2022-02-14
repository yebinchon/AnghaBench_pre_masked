
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct _krb5_key_type {int bits; int type; } ;
struct _krb5_key_data {int * schedule; TYPE_2__* key; } ;
struct _krb5_encryption_type {int blocksize; int (* encrypt ) (int ,struct _krb5_key_data*,void*,size_t,int,int ,int *) ;struct _krb5_key_type* keytype; } ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_3__ {unsigned char* data; unsigned int length; } ;
struct TYPE_4__ {TYPE_1__ keyvalue; } ;




 scalar_t__ VAR_0 ;

 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ,struct _krb5_key_data*) ;
 int FUNC_2 (int ,TYPE_2__*,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_3 (void*,size_t,unsigned char*,size_t) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (int ,struct _krb5_key_data*,struct _krb5_encryption_type*) ;
 int FUNC_6 (int ,scalar_t__,int ,...) ;
 void* FUNC_7 (size_t) ;
 int FUNC_8 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_9 (unsigned char*,int ,unsigned int) ;
 int FUNC_10 (int ,struct _krb5_key_data*,unsigned char*,unsigned int,int,int ,int *) ;
 int FUNC_11 (int ,struct _krb5_key_data*,void*,size_t,int,int ,int *) ;

krb5_error_code
FUNC_12(krb5_context VAR_2,
   struct _krb5_encryption_type *VAR_3,
   struct _krb5_key_data *VAR_4,
   const void *VAR_5,
   size_t VAR_6)
{
    unsigned char *VAR_7 = ((void*)0);
    unsigned int VAR_8 = 0, VAR_9;
    krb5_error_code VAR_10 = 0;
    struct _krb5_key_type *VAR_11 = VAR_3->keytype;

    VAR_10 = FUNC_1(VAR_2, VAR_4);
    if(VAR_10)
 return VAR_10;
    if(VAR_3->blocksize * 8 < VAR_11->bits || VAR_6 != VAR_3->blocksize) {
 VAR_8 = (VAR_11->bits + VAR_3->blocksize * 8 - 1) / (VAR_3->blocksize * 8);
 VAR_7 = FUNC_7(VAR_8 * VAR_3->blocksize);
 if(VAR_7 == ((void*)0)) {
     VAR_10 = VAR_0;
     FUNC_6(VAR_2, VAR_10, FUNC_0("malloc: out of memory", ""));
     goto out;
 }
 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7, VAR_3->blocksize);
 if (VAR_10) {
     FUNC_6(VAR_2, VAR_10, FUNC_0("malloc: out of memory", ""));
     goto out;
 }

 for(VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
     if(VAR_9 > 0)
  FUNC_8(VAR_7 + VAR_9 * VAR_3->blocksize,
         VAR_7 + (VAR_9 - 1) * VAR_3->blocksize,
         VAR_3->blocksize);
     (*VAR_3->encrypt)(VAR_2, VAR_4, VAR_7 + VAR_9 * VAR_3->blocksize, VAR_3->blocksize,
      1, 0, ((void*)0));
 }
    } else {

 void *VAR_12 = FUNC_7(VAR_6);
 size_t VAR_13 = (VAR_11->bits + 7) / 8;

 if(VAR_6 != 0 && VAR_12 == ((void*)0)) {
     VAR_10 = VAR_0;
     FUNC_6(VAR_2, VAR_10, FUNC_0("malloc: out of memory", ""));
     goto out;
 }
 FUNC_8(VAR_12, VAR_5, VAR_6);
 (*VAR_3->encrypt)(VAR_2, VAR_4, VAR_12, VAR_6, 1, 0, ((void*)0));
 VAR_7 = FUNC_7(VAR_13);
 if(VAR_13 != 0 && VAR_7 == ((void*)0)) {
     FUNC_4(VAR_12);
     VAR_10 = VAR_0;
     FUNC_6(VAR_2, VAR_10, FUNC_0("malloc: out of memory", ""));
     goto out;
 }
 VAR_10 = FUNC_3(VAR_12, VAR_6, VAR_7, VAR_13);
 FUNC_4(VAR_12);
 if (VAR_10) {
     FUNC_6(VAR_2, VAR_10, FUNC_0("malloc: out of memory", ""));
     goto out;
 }
    }


    switch(VAR_11->type) {
    case 128:
 FUNC_2(VAR_2, VAR_4->key, VAR_7, VAR_8 * VAR_3->blocksize);
 break;
    case 130:
    case 129:
 FUNC_8(VAR_4->key->keyvalue.data, VAR_7, VAR_4->key->keyvalue.length);
 break;
    default:
 VAR_10 = VAR_1;
 FUNC_6(VAR_2, VAR_10,
          FUNC_0("derive_key() called with unknown keytype (%u)", ""),
          VAR_11->type);
 break;
    }
 out:
    if (VAR_4->schedule) {
 FUNC_5(VAR_2, VAR_4, VAR_3);
 VAR_4->schedule = ((void*)0);
    }
    if (VAR_7) {
 FUNC_9(VAR_7, 0, VAR_8 * VAR_3->blocksize);
 FUNC_4(VAR_7);
    }
    return VAR_10;
}
