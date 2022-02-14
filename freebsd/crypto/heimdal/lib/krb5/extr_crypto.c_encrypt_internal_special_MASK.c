
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _krb5_encryption_type {size_t confoundersize; scalar_t__ (* encrypt ) (int ,int *,char*,size_t,int ,int,void*) ;int checksum; } ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_5__ {char* data; size_t length; } ;
typedef TYPE_1__ krb5_data ;
typedef TYPE_2__* krb5_crypto ;
typedef int krb5_context ;
struct TYPE_6__ {int key; struct _krb5_encryption_type* et; } ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,size_t) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*,void const*,size_t) ;
 int FUNC_7 (char*,int ,size_t) ;
 scalar_t__ FUNC_8 (int ,int *,char*,size_t,int ,int,void*) ;

__attribute__((used)) static krb5_error_code
FUNC_9(krb5_context VAR_2,
    krb5_crypto VAR_3,
    int VAR_4,
    const void *VAR_5,
    size_t VAR_6,
    krb5_data *VAR_7,
    void *VAR_8)
{
    struct _krb5_encryption_type *VAR_9 = VAR_3->et;
    size_t VAR_10 = FUNC_0(VAR_9->checksum);
    size_t VAR_11 = VAR_6 + VAR_10 + VAR_9->confoundersize;
    char *VAR_12, *VAR_13;
    krb5_error_code VAR_14;

    VAR_12 = FUNC_5 (VAR_11);
    if (VAR_12 == ((void*)0)) {
 FUNC_4(VAR_2, VAR_0, FUNC_1("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_13 = VAR_12;
    FUNC_7 (VAR_13, 0, VAR_10);
    VAR_13 += VAR_10;
    FUNC_3(VAR_13, VAR_9->confoundersize);
    VAR_13 += VAR_9->confoundersize;
    FUNC_6 (VAR_13, VAR_5, VAR_6);
    VAR_14 = (*VAR_9->encrypt)(VAR_2, &VAR_3->key, VAR_12, VAR_11, VAR_1, VAR_4, VAR_8);
    if (VAR_14) {
 FUNC_7(VAR_12, 0, VAR_11);
 FUNC_2(VAR_12);
 return VAR_14;
    }
    VAR_7->data = VAR_12;
    VAR_7->length = VAR_11;
    return 0;
}
