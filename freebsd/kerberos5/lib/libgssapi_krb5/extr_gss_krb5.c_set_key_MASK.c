
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ length; int data; } ;
struct TYPE_7__ {TYPE_1__ keyvalue; int keytype; } ;
typedef TYPE_2__ krb5_keyblock ;
typedef int krb5_error_code ;
struct TYPE_8__ {scalar_t__ length; int * data; int type; } ;
typedef TYPE_3__ gss_krb5_lucid_key_t ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int ,scalar_t__) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_keyblock *VAR_1, gss_krb5_lucid_key_t *VAR_2)
{
    VAR_2->type = VAR_1->keytype;
    VAR_2->length = VAR_1->keyvalue.length;
    VAR_2->data = FUNC_0(VAR_2->length);
    if (VAR_2->data == ((void*)0) && VAR_2->length != 0)
 return VAR_0;
    FUNC_1(VAR_2->data, VAR_1->keyvalue.data, VAR_2->length);
    return 0;
}
