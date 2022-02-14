
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct _krb5_key_data {int dummy; } ;
struct _krb5_encryption_type {size_t confoundersize; size_t padsize; int keyed_checksum; scalar_t__ (* encrypt ) (int ,struct _krb5_key_data*,unsigned char*,size_t,int ,unsigned int,void*) ;} ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_11__ {unsigned long length; int * data; } ;
typedef TYPE_2__ krb5_data ;
typedef TYPE_3__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_10__ {unsigned char* data; size_t length; } ;
struct TYPE_13__ {int cksumtype; TYPE_1__ checksum; } ;
struct TYPE_12__ {struct _krb5_encryption_type* et; } ;
typedef TYPE_4__ Checksum ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (int ,TYPE_3__*,int ,struct _krb5_key_data**) ;
 scalar_t__ FUNC_6 (int ,struct _krb5_key_data*) ;
 int FUNC_7 (unsigned char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__,int ) ;
 unsigned char* FUNC_10 (size_t) ;
 int FUNC_11 (unsigned char*,void*,size_t) ;
 int FUNC_12 (unsigned char*,unsigned char*,unsigned long) ;
 int * FUNC_13 (unsigned char*,unsigned long) ;
 scalar_t__ FUNC_14 (int ,struct _krb5_key_data*,unsigned char*,size_t,int ,unsigned int,void*) ;
 scalar_t__ FUNC_15 (int ,TYPE_3__*,int ,unsigned char*,size_t,TYPE_4__*) ;

__attribute__((used)) static krb5_error_code
FUNC_16(krb5_context VAR_2,
    krb5_crypto VAR_3,
    unsigned VAR_4,
    void *VAR_5,
    size_t VAR_6,
    krb5_data *VAR_7,
    void *VAR_8)
{
    size_t VAR_9;
    Checksum VAR_10;
    unsigned char *VAR_11;
    krb5_error_code VAR_12;
    struct _krb5_key_data *VAR_13;
    struct _krb5_encryption_type *VAR_14 = VAR_3->et;
    unsigned long VAR_15;

    VAR_9 = FUNC_0(VAR_14->keyed_checksum);
    if (VAR_6 < VAR_9 + VAR_14->confoundersize) {
 FUNC_9(VAR_2, VAR_1,
          FUNC_4("Encrypted data shorter then "
      "checksum + confunder", ""));
 return VAR_1;
    }

    if (((VAR_6 - VAR_9) % VAR_14->padsize) != 0) {
 FUNC_8(VAR_2);
 return VAR_1;
    }

    VAR_11 = FUNC_10(VAR_6);
    if(VAR_6 != 0 && VAR_11 == ((void*)0)) {
 FUNC_9(VAR_2, VAR_0, FUNC_4("malloc: out of memory", ""));
 return VAR_0;
    }
    FUNC_11(VAR_11, VAR_5, VAR_6);

    VAR_6 -= VAR_9;

    VAR_12 = FUNC_5(VAR_2, VAR_3, FUNC_2(VAR_4), &VAR_13);
    if(VAR_12) {
 FUNC_7(VAR_11);
 return VAR_12;
    }
    VAR_12 = FUNC_6(VAR_2, VAR_13);
    if(VAR_12) {
 FUNC_7(VAR_11);
 return VAR_12;
    }
    VAR_12 = (*VAR_14->encrypt)(VAR_2, VAR_13, VAR_11, VAR_6, 0, VAR_4, VAR_8);
    if (VAR_12) {
 FUNC_7(VAR_11);
 return VAR_12;
    }

    VAR_10.checksum.data = VAR_11 + VAR_6;
    VAR_10.checksum.length = VAR_9;
    VAR_10.cksumtype = FUNC_1(VAR_14->keyed_checksum);

    VAR_12 = FUNC_15(VAR_2,
     VAR_3,
     FUNC_3(VAR_4),
     VAR_11,
     VAR_6,
     &VAR_10);
    if(VAR_12) {
 FUNC_7(VAR_11);
 return VAR_12;
    }
    VAR_15 = VAR_6 - VAR_14->confoundersize;
    FUNC_12(VAR_11, VAR_11 + VAR_14->confoundersize, VAR_15);
    VAR_7->data = FUNC_13(VAR_11, VAR_15);
    if(VAR_7->data == ((void*)0) && VAR_15 != 0) {
 FUNC_7(VAR_11);
 FUNC_9(VAR_2, VAR_0, FUNC_4("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_7->length = VAR_15;
    return 0;
}
