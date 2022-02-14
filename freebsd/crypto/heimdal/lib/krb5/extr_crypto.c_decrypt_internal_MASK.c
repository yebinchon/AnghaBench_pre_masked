
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct _krb5_encryption_type {size_t padsize; size_t confoundersize; int checksum; scalar_t__ (* encrypt ) (int ,int *,unsigned char*,size_t,int ,int ,void*) ;} ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_8__ {size_t length; int * data; } ;
typedef TYPE_1__ krb5_data ;
typedef TYPE_2__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_10__ {int cksumtype; int checksum; } ;
struct TYPE_9__ {int key; struct _krb5_encryption_type* et; } ;
typedef TYPE_3__ Checksum ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,unsigned char*,size_t) ;
 int FUNC_8 (int ,scalar_t__,int ) ;
 unsigned char* FUNC_9 (size_t) ;
 int FUNC_10 (unsigned char*,void*,size_t) ;
 int FUNC_11 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_12 (unsigned char*,int ,size_t) ;
 int * FUNC_13 (unsigned char*,size_t) ;
 scalar_t__ FUNC_14 (int ,int *,unsigned char*,size_t,int ,int ,void*) ;
 scalar_t__ FUNC_15 (int ,int *,int ,unsigned char*,size_t,TYPE_3__*) ;

__attribute__((used)) static krb5_error_code
FUNC_16(krb5_context VAR_2,
   krb5_crypto VAR_3,
   void *VAR_4,
   size_t VAR_5,
   krb5_data *VAR_6,
   void *VAR_7)
{
    krb5_error_code VAR_8;
    unsigned char *VAR_9;
    Checksum VAR_10;
    size_t VAR_11, VAR_12;
    struct _krb5_encryption_type *VAR_13 = VAR_3->et;

    if ((VAR_5 % VAR_13->padsize) != 0) {
 FUNC_6(VAR_2);
 return VAR_1;
    }
    VAR_11 = FUNC_0(VAR_13->checksum);
    if (VAR_5 < VAR_11 + VAR_13->confoundersize) {
 FUNC_8(VAR_2, VAR_1,
          FUNC_2("Encrypted data shorter then "
      "checksum + confunder", ""));
 return VAR_1;
    }

    VAR_9 = FUNC_9(VAR_5);
    if(VAR_5 != 0 && VAR_9 == ((void*)0)) {
 FUNC_8(VAR_2, VAR_0, FUNC_2("malloc: out of memory", ""));
 return VAR_0;
    }
    FUNC_10(VAR_9, VAR_4, VAR_5);

    VAR_8 = FUNC_3(VAR_2, &VAR_3->key);
    if(VAR_8) {
 FUNC_4(VAR_9);
 return VAR_8;
    }
    VAR_8 = (*VAR_13->encrypt)(VAR_2, &VAR_3->key, VAR_9, VAR_5, 0, 0, VAR_7);
    if (VAR_8) {
 FUNC_4(VAR_9);
 return VAR_8;
    }
    VAR_8 = FUNC_7(&VAR_10.checksum, VAR_9 + VAR_13->confoundersize, VAR_11);
    if(VAR_8) {
  FUNC_4(VAR_9);
  return VAR_8;
    }
    FUNC_12(VAR_9 + VAR_13->confoundersize, 0, VAR_11);
    VAR_10.cksumtype = FUNC_1(VAR_13->checksum);
    VAR_8 = FUNC_15(VAR_2, ((void*)0), 0, VAR_9, VAR_5, &VAR_10);
    FUNC_5(&VAR_10);
    if(VAR_8) {
 FUNC_4(VAR_9);
 return VAR_8;
    }
    VAR_12 = VAR_5 - VAR_13->confoundersize - VAR_11;
    FUNC_11(VAR_9, VAR_9 + VAR_13->confoundersize + VAR_11, VAR_12);
    VAR_6->data = FUNC_13(VAR_9, VAR_12);
    if(VAR_6->data == ((void*)0) && VAR_12 != 0) {
 FUNC_4(VAR_9);
 FUNC_8(VAR_2, VAR_0, FUNC_2("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_6->length = VAR_12;
    return 0;
}
