
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct arange {int low; int high; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_7__ {struct arange* data; } ;
struct TYPE_6__ {TYPE_2__ address; int addr_type; } ;
typedef TYPE_1__ krb5_address ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int
FUNC_4 (krb5_context VAR_1, const krb5_address *VAR_2,
      krb5_address *VAR_3)
{
    krb5_error_code VAR_4;
    struct arange *VAR_5, *VAR_6;

    VAR_3->addr_type = VAR_0;
    VAR_4 = FUNC_1(&VAR_3->address, sizeof(*VAR_6));
    if(VAR_4)
 return VAR_4;
    VAR_5 = VAR_2->address.data;
    VAR_6 = VAR_3->address.data;
    VAR_4 = FUNC_0(VAR_1, &VAR_5->low, &VAR_6->low);
    if(VAR_4) {
 FUNC_2(&VAR_3->address);
 return VAR_4;
    }
    VAR_4 = FUNC_0(VAR_1, &VAR_5->high, &VAR_6->high);
    if(VAR_4) {
 FUNC_3(VAR_1, &VAR_6->low);
 FUNC_2(&VAR_3->address);
 return VAR_4;
    }
    return 0;
}
