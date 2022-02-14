
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ salttype; int saltvalue; } ;
typedef TYPE_2__ krb5_salt ;
typedef int krb5_boolean ;
struct TYPE_8__ {TYPE_1__* salt; } ;
struct TYPE_6__ {scalar_t__ type; int salt; } ;
typedef TYPE_3__ Key ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static krb5_boolean
FUNC_1(const krb5_salt *VAR_2, const Key *VAR_3)
{
    if (VAR_3->salt == ((void*)0))
 return VAR_1;
    if (VAR_2->salttype != VAR_3->salt->type)
 return VAR_0;
    if (FUNC_0(&VAR_2->saltvalue, &VAR_3->salt->salt))
 return VAR_0;
    return VAR_1;
}
