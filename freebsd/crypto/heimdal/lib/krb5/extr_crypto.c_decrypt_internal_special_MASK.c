
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _krb5_encryption_type {size_t confoundersize; size_t padsize; scalar_t__ (* encrypt ) (int ,int *,unsigned char*,size_t,int ,int,void*) ;int checksum; } ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_5__ {size_t length; int * data; } ;
typedef TYPE_1__ krb5_data ;
typedef TYPE_2__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_6__ {int key; struct _krb5_encryption_type* et; } ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (unsigned char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 unsigned char* FUNC_5 (size_t) ;
 int FUNC_6 (unsigned char*,void*,size_t) ;
 int FUNC_7 (unsigned char*,unsigned char*,size_t) ;
 int * FUNC_8 (unsigned char*,size_t) ;
 scalar_t__ FUNC_9 (int ,int *,unsigned char*,size_t,int ,int,void*) ;

__attribute__((used)) static krb5_error_code
FUNC_10(krb5_context VAR_3,
    krb5_crypto VAR_4,
    int VAR_5,
    void *VAR_6,
    size_t VAR_7,
    krb5_data *VAR_8,
    void *VAR_9)
{
    struct _krb5_encryption_type *VAR_10 = VAR_4->et;
    size_t VAR_11 = FUNC_0(VAR_10->checksum);
    size_t VAR_12 = VAR_7 - VAR_11 - VAR_10->confoundersize;
    unsigned char *VAR_13;
    krb5_error_code VAR_14;

    if ((VAR_7 % VAR_10->padsize) != 0) {
 FUNC_3(VAR_3);
 return VAR_2;
    }
    if (VAR_7 < VAR_11 + VAR_10->confoundersize) {
 FUNC_4(VAR_3, VAR_2,
          FUNC_1("Encrypted data shorter then "
      "checksum + confunder", ""));
 return VAR_2;
    }

    VAR_13 = FUNC_5 (VAR_7);
    if (VAR_13 == ((void*)0)) {
 FUNC_4(VAR_3, VAR_0, FUNC_1("malloc: out of memory", ""));
 return VAR_0;
    }
    FUNC_6(VAR_13, VAR_6, VAR_7);

    VAR_14 = (*VAR_10->encrypt)(VAR_3, &VAR_4->key, VAR_13, VAR_7, VAR_1, VAR_5, VAR_9);
    if (VAR_14) {
 FUNC_2(VAR_13);
 return VAR_14;
    }

    FUNC_7 (VAR_13, VAR_13 + VAR_11 + VAR_10->confoundersize, VAR_12);
    VAR_8->data = FUNC_8(VAR_13, VAR_12);
    if(VAR_8->data == ((void*)0) && VAR_12 != 0) {
 FUNC_2(VAR_13);
 FUNC_4(VAR_3, VAR_0, FUNC_1("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_8->length = VAR_12;
    return 0;
}
