
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct _krb5_key_data {TYPE_6__* key; int * schedule; } ;
struct _krb5_encryption_type {TYPE_2__* keytype; } ;
struct TYPE_11__ {int length; int data; } ;
struct TYPE_13__ {TYPE_1__ saltvalue; } ;
typedef TYPE_3__ krb5_salt ;
typedef int krb5_keyblock ;
typedef int krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_14__ {int length; int data; } ;
typedef TYPE_4__ krb5_data ;
typedef int krb5_context ;
struct TYPE_15__ {int data; } ;
struct TYPE_16__ {TYPE_5__ keyvalue; int keytype; } ;
struct TYPE_12__ {int size; } ;


 int FUNC_0 (TYPE_6__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,int,int ,int ,scalar_t__,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ,struct _krb5_encryption_type*,struct _krb5_key_data*,char*,int ) ;
 struct _krb5_encryption_type* FUNC_4 (int ) ;
 int FUNC_5 (int ,struct _krb5_key_data*,struct _krb5_encryption_type*) ;
 int FUNC_6 (int ,unsigned long*,int) ;
 int FUNC_7 (int ,TYPE_6__*,int *) ;
 int FUNC_8 (TYPE_5__*,int ) ;
 int FUNC_9 (int ,int,char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static krb5_error_code
FUNC_11(krb5_context VAR_3,
    krb5_enctype VAR_4,
    krb5_data VAR_5,
    krb5_salt VAR_6,
    krb5_data VAR_7,
    krb5_keyblock *VAR_8)
{
    krb5_error_code VAR_9;
    uint32_t VAR_10;
    struct _krb5_encryption_type *VAR_11;
    struct _krb5_key_data VAR_12;

    if (VAR_7.length == 0)
 VAR_10 = VAR_2;
    else if (VAR_7.length == 4) {
 unsigned long VAR_13;
 FUNC_6(VAR_7.data, &VAR_13, 4);
 VAR_10 = ((uint32_t)VAR_13);
    } else
 return VAR_1;

    VAR_11 = FUNC_4(VAR_4);
    if (VAR_11 == ((void*)0))
 return VAR_1;

    VAR_12.schedule = ((void*)0);
    FUNC_0(VAR_12.key, 1);
    if(VAR_12.key == ((void*)0)) {
 FUNC_9 (VAR_3, VAR_0, FUNC_1("malloc: out of memory", ""));
 return VAR_0;
    }
    VAR_12.key->keytype = VAR_4;
    VAR_9 = FUNC_8(&VAR_12.key->keyvalue, VAR_11->keytype->size);
    if (VAR_9) {
 FUNC_9 (VAR_3, VAR_9, FUNC_1("malloc: out of memory", ""));
 return VAR_9;
    }

    VAR_9 = FUNC_2(VAR_5.data, VAR_5.length,
     VAR_6.saltvalue.data, VAR_6.saltvalue.length,
     VAR_10,
     VAR_11->keytype->size, VAR_12.key->keyvalue.data);
    if (VAR_9 != 1) {
 FUNC_5(VAR_3, &VAR_12, VAR_11);
 FUNC_9(VAR_3, VAR_1,
          "Error calculating s2k");
 return VAR_1;
    }

    VAR_9 = FUNC_3(VAR_3, VAR_11, &VAR_12, "kerberos", FUNC_10("kerberos"));
    if (VAR_9 == 0)
 VAR_9 = FUNC_7(VAR_3, VAR_12.key, VAR_8);
    FUNC_5(VAR_3, &VAR_12, VAR_11);

    return VAR_9;
}
