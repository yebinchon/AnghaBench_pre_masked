
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int krb5_context ;
struct TYPE_3__ {int len; int * val; } ;
typedef TYPE_1__ krb5_addresses ;
typedef int buf ;


 int FUNC_0 (int *,char*,int,size_t*) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void
FUNC_2 (krb5_context VAR_0, const krb5_addresses *VAR_1)
{
    int VAR_2;
    char VAR_3[256];
    size_t VAR_4;

    for (VAR_2 = 0; VAR_2 < VAR_1->len; ++VAR_2) {
 FUNC_0 (&VAR_1->val[VAR_2], VAR_3, sizeof(VAR_3), &VAR_4);
 FUNC_1 ("%s\n", VAR_3);
    }
}
