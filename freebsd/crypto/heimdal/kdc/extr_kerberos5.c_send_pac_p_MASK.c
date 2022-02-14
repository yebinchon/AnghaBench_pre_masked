
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_boolean ;
struct TYPE_7__ {int length; int data; } ;
struct TYPE_9__ {TYPE_1__ padata_value; } ;
struct TYPE_8__ {int include_pac; } ;
typedef TYPE_2__ PA_PAC_REQUEST ;
typedef TYPE_3__ PA_DATA ;
typedef int KDC_REQ ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int *,int*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static krb5_boolean
FUNC_3(krb5_context VAR_3, KDC_REQ *VAR_4)
{
    krb5_error_code VAR_5;
    PA_PAC_REQUEST VAR_6;
    const PA_DATA *VAR_7;
    int VAR_8 = 0;

    VAR_7 = FUNC_0(VAR_4, &VAR_8, VAR_1);
    if (VAR_7 == ((void*)0))
 return VAR_2;

    VAR_5 = FUNC_1(VAR_7->padata_value.data,
    VAR_7->padata_value.length,
    &VAR_6,
    ((void*)0));
    if (VAR_5)
 return VAR_2;
    VAR_8 = VAR_6.include_pac;
    FUNC_2(&VAR_6);
    if (VAR_8 == 0)
 return VAR_0;
    return VAR_2;
}
