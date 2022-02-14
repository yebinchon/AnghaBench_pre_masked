
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int data; int length; } ;
struct TYPE_14__ {TYPE_1__ saltvalue; int salttype; } ;
typedef TYPE_4__ krb5_salt ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
struct TYPE_16__ {int keytype; } ;
struct TYPE_15__ {TYPE_7__ key; TYPE_3__* salt; } ;
struct TYPE_12__ {int data; int length; } ;
struct TYPE_13__ {TYPE_2__ salt; int type; } ;
typedef TYPE_5__ Key ;


 int FUNC_0 (int ,size_t,TYPE_5__*) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_5__**,size_t*,int ) ;
 scalar_t__ FUNC_2 (int ,int ,char const*,TYPE_4__,TYPE_7__*) ;

krb5_error_code
FUNC_3(krb5_context VAR_0,
         krb5_principal VAR_1,
         const char *VAR_2,
         Key **VAR_3, size_t *VAR_4)
{
    krb5_error_code VAR_5;
    size_t VAR_6;

    VAR_5 = FUNC_1(VAR_0, VAR_1,
    VAR_3, VAR_4, 0);
    if (VAR_5)
 return VAR_5;

    for (VAR_6 = 0; VAR_6 < (*VAR_4); VAR_6++) {
 krb5_salt VAR_7;

 VAR_7.salttype = (*VAR_3)[VAR_6].salt->type;
 VAR_7.saltvalue.length = (*VAR_3)[VAR_6].salt->salt.length;
 VAR_7.saltvalue.data = (*VAR_3)[VAR_6].salt->salt.data;

 VAR_5 = FUNC_2 (VAR_0,
           (*VAR_3)[VAR_6].key.keytype,
           VAR_2,
           VAR_7,
           &(*VAR_3)[VAR_6].key);

 if(VAR_5)
     break;
    }

    if(VAR_5) {
 FUNC_0 (VAR_0, *VAR_4, *VAR_3);
 return VAR_5;
    }
    return VAR_5;
}
