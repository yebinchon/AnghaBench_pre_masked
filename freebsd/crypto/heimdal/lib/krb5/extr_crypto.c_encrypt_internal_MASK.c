
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct _krb5_encryption_type {size_t confoundersize; size_t padsize; scalar_t__ (* encrypt ) (int ,int *,unsigned char*,size_t,int,int ,void*) ;int checksum; } ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_11__ {unsigned char* data; size_t length; } ;
typedef TYPE_2__ krb5_data ;
typedef TYPE_3__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_10__ {size_t length; void const* data; } ;
struct TYPE_13__ {TYPE_1__ checksum; } ;
struct TYPE_12__ {int key; struct _krb5_encryption_type* et; } ;
typedef TYPE_4__ Checksum ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 unsigned char* FUNC_3 (int,size_t) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_3__*,int ,unsigned char*,size_t,TYPE_4__*) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned char*,size_t) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 int FUNC_10 (unsigned char*,void const*,size_t) ;
 int FUNC_11 (unsigned char*,int ,size_t) ;
 scalar_t__ FUNC_12 (int ,int *,unsigned char*,size_t,int,int ,void*) ;

__attribute__((used)) static krb5_error_code
FUNC_13(krb5_context VAR_2,
   krb5_crypto VAR_3,
   const void *VAR_4,
   size_t VAR_5,
   krb5_data *VAR_6,
   void *VAR_7)
{
    size_t VAR_8, VAR_9, VAR_10;
    Checksum VAR_11;
    unsigned char *VAR_12, *VAR_13;
    krb5_error_code VAR_14;
    const struct _krb5_encryption_type *VAR_15 = VAR_3->et;

    VAR_10 = FUNC_0(VAR_15->checksum);

    VAR_8 = VAR_15->confoundersize + VAR_10 + VAR_5;
    VAR_9 = (VAR_8 + VAR_15->padsize - 1) &~ (VAR_15->padsize - 1);
    VAR_12 = FUNC_3(1, VAR_9);
    if(VAR_12 == ((void*)0)) {
 FUNC_9(VAR_2, VAR_0, FUNC_1("malloc: out of memory", ""));
 return VAR_0;
    }

    VAR_13 = VAR_12;
    FUNC_8(VAR_13, VAR_15->confoundersize);
    VAR_13 += VAR_15->confoundersize;
    FUNC_11(VAR_13, 0, VAR_10);
    VAR_13 += VAR_10;
    FUNC_10(VAR_13, VAR_4, VAR_5);

    VAR_14 = FUNC_4(VAR_2,
     VAR_15->checksum,
     VAR_3,
     0,
     VAR_12,
     VAR_9,
     &VAR_11);
    if(VAR_14 == 0 && VAR_11.checksum.length != VAR_10) {
 FUNC_7 (VAR_2);
 FUNC_6(&VAR_11);
 VAR_14 = VAR_1;
    }
    if(VAR_14)
 goto fail;
    FUNC_10(VAR_12 + VAR_15->confoundersize, VAR_11.checksum.data, VAR_11.checksum.length);
    FUNC_6(&VAR_11);
    VAR_14 = FUNC_2(VAR_2, &VAR_3->key);
    if(VAR_14)
 goto fail;
    VAR_14 = (*VAR_15->encrypt)(VAR_2, &VAR_3->key, VAR_12, VAR_9, 1, 0, VAR_7);
    if (VAR_14) {
 FUNC_11(VAR_12, 0, VAR_9);
 FUNC_5(VAR_12);
 return VAR_14;
    }
    VAR_6->data = VAR_12;
    VAR_6->length = VAR_9;
    return 0;
 fail:
    FUNC_11(VAR_12, 0, VAR_9);
    FUNC_5(VAR_12);
    return VAR_14;
}
