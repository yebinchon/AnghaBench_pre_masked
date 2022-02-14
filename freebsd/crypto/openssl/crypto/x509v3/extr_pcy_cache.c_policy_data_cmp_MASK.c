
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valid_policy; } ;
typedef TYPE_1__ X509_POLICY_DATA ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const X509_POLICY_DATA *const *VAR_0,
                           const X509_POLICY_DATA *const *VAR_1)
{
    return FUNC_0((*VAR_0)->valid_policy, (*VAR_1)->valid_policy);
}
