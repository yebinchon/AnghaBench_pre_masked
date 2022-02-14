
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_krbhst_data {int hosts; int * index; } ;
typedef int krb5_boolean ;



__attribute__((used)) static krb5_boolean
FUNC_0(const struct krb5_krbhst_data *VAR_0)
{
    return VAR_0->index == &VAR_0->hosts;
}
