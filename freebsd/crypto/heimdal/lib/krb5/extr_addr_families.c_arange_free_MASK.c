
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct arange {int high; int low; } ;
typedef int krb5_context ;
struct TYPE_5__ {struct arange* data; } ;
struct TYPE_4__ {TYPE_2__ address; } ;
typedef TYPE_1__ krb5_address ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int
FUNC_2 (krb5_context VAR_0, krb5_address *VAR_1)
{
    struct arange *VAR_2;
    VAR_2 = VAR_1->address.data;
    FUNC_1(VAR_0, &VAR_2->low);
    FUNC_1(VAR_0, &VAR_2->high);
    FUNC_0(&VAR_1->address);
    return 0;
}
