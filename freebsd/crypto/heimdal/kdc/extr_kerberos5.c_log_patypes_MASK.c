
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rk_strpool {int dummy; } ;
typedef int krb5_kdc_configuration ;
typedef int krb5_context ;
struct TYPE_5__ {size_t len; TYPE_1__* val; } ;
struct TYPE_4__ {int padata_type; } ;
typedef TYPE_2__ METHOD_DATA ;






 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int ,char*,...) ;
 char* FUNC_2 (struct rk_strpool*) ;
 struct rk_strpool* FUNC_3 (struct rk_strpool*,char*,...) ;

__attribute__((used)) static void
FUNC_4(krb5_context VAR_0,
     krb5_kdc_configuration *VAR_1,
     METHOD_DATA *VAR_2)
{
    struct rk_strpool *VAR_3 = ((void*)0);
    char *VAR_4;
    size_t VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_2->len; VAR_5++) {
 switch(VAR_2->val[VAR_5].padata_type) {
 case 129:
     VAR_3 = FUNC_3(VAR_3, "PK-INIT(ietf)");
     break;
 case 128:
     VAR_3 = FUNC_3(VAR_3, "PK-INIT(win2k)");
     break;
 case 130:
     VAR_3 = FUNC_3(VAR_3, "OCSP");
     break;
 case 131:
     VAR_3 = FUNC_3(VAR_3, "encrypted-timestamp");
     break;
 default:
     VAR_3 = FUNC_3(VAR_3, "%d", VAR_2->val[VAR_5].padata_type);
     break;
 }
 if (VAR_3 && VAR_5 + 1 < VAR_2->len)
     VAR_3 = FUNC_3(VAR_3, ", ");
 if (VAR_3 == ((void*)0)) {
     FUNC_1(VAR_0, VAR_1, 0, "out of memory");
     return;
 }
    }
    if (VAR_3 == ((void*)0))
 VAR_3 = FUNC_3(VAR_3, "none");

    VAR_4 = FUNC_2(VAR_3);
    FUNC_1(VAR_0, VAR_1, 0, "Client sent patypes: %s", VAR_4);
    FUNC_0(VAR_4);
}
