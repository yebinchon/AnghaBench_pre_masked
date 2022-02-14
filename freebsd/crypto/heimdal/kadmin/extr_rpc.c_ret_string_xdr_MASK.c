
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
struct TYPE_4__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(krb5_storage *VAR_0, char **VAR_1)
{
    krb5_data VAR_2;
    *VAR_1 = ((void*)0);
    FUNC_0(FUNC_5(VAR_0, &VAR_2));
    if (VAR_2.length) {
 *VAR_1 = FUNC_3(VAR_2.length + 1);
 FUNC_1(*VAR_1 != ((void*)0));
 FUNC_4(*VAR_1, VAR_2.data, VAR_2.length);
 (*VAR_1)[VAR_2.length] = '\0';
    }
    FUNC_2(&VAR_2);
    return 0;
}
