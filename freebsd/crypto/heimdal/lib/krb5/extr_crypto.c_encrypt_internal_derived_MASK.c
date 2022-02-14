
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct _krb5_key_data {int dummy; } ;
struct _krb5_encryption_type {size_t confoundersize; size_t padsize; scalar_t__ (* encrypt ) (int ,struct _krb5_key_data*,unsigned char*,size_t,int,unsigned int,void*) ;int keyed_checksum; } ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_12__ {unsigned char* data; size_t length; } ;
typedef TYPE_2__ krb5_data ;
typedef TYPE_3__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_11__ {size_t length; void const* data; } ;
struct TYPE_14__ {TYPE_1__ checksum; } ;
struct TYPE_13__ {struct _krb5_encryption_type* et; } ;
typedef TYPE_4__ Checksum ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__*,int ,struct _krb5_key_data**) ;
 scalar_t__ FUNC_5 (int ,struct _krb5_key_data*) ;
 unsigned char* FUNC_6 (int,size_t) ;
 scalar_t__ FUNC_7 (int ,int ,TYPE_3__*,int ,unsigned char*,size_t,TYPE_4__*) ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (unsigned char*,size_t) ;
 int FUNC_12 (int ,scalar_t__,int ) ;
 int FUNC_13 (unsigned char*,void const*,size_t) ;
 int FUNC_14 (unsigned char*,int ,size_t) ;
 scalar_t__ FUNC_15 (int ,struct _krb5_key_data*,unsigned char*,size_t,int,unsigned int,void*) ;

__attribute__((used)) static krb5_error_code
FUNC_16(krb5_context VAR_2,
    krb5_crypto VAR_3,
    unsigned VAR_4,
    const void *VAR_5,
    size_t VAR_6,
    krb5_data *VAR_7,
    void *VAR_8)
{
    size_t VAR_9, VAR_10, VAR_11, VAR_12;
    Checksum VAR_13;
    unsigned char *VAR_14, *VAR_15;
    krb5_error_code VAR_16;
    struct _krb5_key_data *VAR_17;
    const struct _krb5_encryption_type *VAR_18 = VAR_3->et;

    VAR_11 = FUNC_0(VAR_18->keyed_checksum);

    VAR_9 = VAR_18->confoundersize + VAR_6;
    VAR_10 = (VAR_9 + VAR_18->padsize - 1) &~ (VAR_18->padsize - 1);
    VAR_12 = VAR_10 + VAR_11;
    VAR_14 = FUNC_6(1, VAR_12);
    if(VAR_14 == ((void*)0)) {
 FUNC_12(VAR_2, VAR_0, FUNC_3("malloc: out of memory", ""));
 return VAR_0;
    }

    VAR_15 = VAR_14;
    FUNC_11(VAR_15, VAR_18->confoundersize);
    VAR_15 += VAR_18->confoundersize;
    FUNC_13(VAR_15, VAR_5, VAR_6);

    VAR_16 = FUNC_7(VAR_2,
     VAR_18->keyed_checksum,
     VAR_3,
     FUNC_2(VAR_4),
     VAR_14,
     VAR_10,
     &VAR_13);
    if(VAR_16 == 0 && VAR_13.checksum.length != VAR_11) {
 FUNC_9 (&VAR_13);
 FUNC_10 (VAR_2);
 VAR_16 = VAR_1;
    }
    if(VAR_16)
 goto fail;
    FUNC_13(VAR_14 + VAR_10, VAR_13.checksum.data, VAR_13.checksum.length);
    FUNC_9 (&VAR_13);
    VAR_16 = FUNC_4(VAR_2, VAR_3, FUNC_1(VAR_4), &VAR_17);
    if(VAR_16)
 goto fail;
    VAR_16 = FUNC_5(VAR_2, VAR_17);
    if(VAR_16)
 goto fail;
    VAR_16 = (*VAR_18->encrypt)(VAR_2, VAR_17, VAR_14, VAR_10, 1, VAR_4, VAR_8);
    if (VAR_16)
 goto fail;
    VAR_7->data = VAR_14;
    VAR_7->length = VAR_12;
    return 0;
 fail:
    FUNC_14(VAR_14, 0, VAR_12);
    FUNC_8(VAR_14);
    return VAR_16;
}
