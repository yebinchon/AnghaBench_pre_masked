
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int hx509_validate_ctx ;
struct TYPE_10__ {size_t length; int data; } ;
typedef TYPE_3__ heim_any ;
struct TYPE_8__ {unsigned int len; int* val; } ;
struct TYPE_9__ {TYPE_1__ name_string; } ;
struct TYPE_11__ {int realm; TYPE_2__ principalName; } ;
typedef TYPE_4__ KRB5PrincipalName ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,size_t,TYPE_4__*,size_t*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,char*,...) ;

__attribute__((used)) static int
FUNC_3(hx509_validate_ctx VAR_2, heim_any *VAR_3)
{
    KRB5PrincipalName VAR_4;
    unsigned VAR_5;
    size_t VAR_6;
    int VAR_7;

    VAR_7 = FUNC_0(VAR_3->data, VAR_3->length, &VAR_4, &VAR_6);
    if (VAR_7) {
 FUNC_2(VAR_2, VAR_0,
         "Decoding kerberos name in SAN failed: %d", VAR_7);
 return 1;
    }

    if (VAR_6 != VAR_3->length) {
 FUNC_2(VAR_2, VAR_0,
         "Decoding kerberos name have extra bits on the end");
 return 1;
    }


    for (VAR_5 = 0; VAR_5 < VAR_4.principalName.name_string.len; VAR_5++) {
 FUNC_2(VAR_2, VAR_1, "%s",
         VAR_4.principalName.name_string.val[VAR_5]);
 if (VAR_5 + 1 < VAR_4.principalName.name_string.len)
     FUNC_2(VAR_2, VAR_1, "/");
    }
    FUNC_2(VAR_2, VAR_1, "@");
    FUNC_2(VAR_2, VAR_1, "%s", VAR_4.realm);

    FUNC_1(&VAR_4);
    return 0;
}
