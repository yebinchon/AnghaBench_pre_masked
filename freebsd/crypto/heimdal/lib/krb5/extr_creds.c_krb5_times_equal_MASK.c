
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ starttime; scalar_t__ authtime; scalar_t__ endtime; scalar_t__ renew_till; } ;
typedef TYPE_1__ krb5_times ;
typedef int krb5_boolean ;



__attribute__((used)) static krb5_boolean
FUNC_0(const krb5_times *VAR_0, const krb5_times *VAR_1)
{
    return VAR_0->starttime == VAR_1->starttime &&
 VAR_0->authtime == VAR_1->authtime &&
 VAR_0->endtime == VAR_1->endtime &&
 VAR_0->renew_till == VAR_1->renew_till;
}
