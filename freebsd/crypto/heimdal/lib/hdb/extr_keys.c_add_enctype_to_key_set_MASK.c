
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {int length; int data; } ;
struct TYPE_17__ {TYPE_3__ saltvalue; int salttype; } ;
typedef TYPE_4__ krb5_salt ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
typedef int key ;
struct TYPE_14__ {int * data; scalar_t__ length; } ;
struct TYPE_15__ {TYPE_1__ keyvalue; int keytype; } ;
struct TYPE_18__ {TYPE_10__* salt; TYPE_2__ key; } ;
struct TYPE_13__ {int salt; int type; } ;
typedef TYPE_5__ Key ;


 scalar_t__ VAR_0 ;
 TYPE_10__* FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 TYPE_5__* FUNC_5 (TYPE_5__*,size_t) ;

__attribute__((used)) static krb5_error_code
FUNC_6(Key **VAR_1, size_t *VAR_2,
         krb5_enctype VAR_3, krb5_salt *VAR_4)
{
    krb5_error_code VAR_5;
    Key VAR_6, *VAR_7;

    FUNC_4(&VAR_6, 0, sizeof(VAR_6));

    VAR_7 = FUNC_5(*VAR_1, (*VAR_2 + 1) * sizeof((*VAR_1)[0]));
    if (VAR_7 == ((void*)0))
 return VAR_0;

    *VAR_1 = VAR_7;

    VAR_6.key.keytype = VAR_3;
    VAR_6.key.keyvalue.length = 0;
    VAR_6.key.keyvalue.data = ((void*)0);

    if (VAR_4) {
 VAR_6.salt = FUNC_0(1, sizeof(*VAR_6.salt));
 if (VAR_6.salt == ((void*)0)) {
     FUNC_1(&VAR_6);
     return VAR_0;
 }

 VAR_6.salt->type = VAR_4->salttype;
 FUNC_3 (&VAR_6.salt->salt);

 VAR_5 = FUNC_2(&VAR_6.salt->salt,
        VAR_4->saltvalue.data,
        VAR_4->saltvalue.length);
 if (VAR_5) {
     FUNC_1(&VAR_6);
     return VAR_5;
 }
    } else
 VAR_6.salt = ((void*)0);

    (*VAR_1)[*VAR_2] = VAR_6;

    *VAR_2 += 1;

    return 0;
}
