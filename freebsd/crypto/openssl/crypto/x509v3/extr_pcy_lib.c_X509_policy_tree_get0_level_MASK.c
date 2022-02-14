
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nlevel; int * levels; } ;
typedef TYPE_1__ X509_POLICY_TREE ;
typedef int X509_POLICY_LEVEL ;



X509_POLICY_LEVEL *FUNC_0(const X509_POLICY_TREE *VAR_0,
                                               int VAR_1)
{
    if (!VAR_0 || (VAR_1 < 0) || (VAR_1 >= VAR_0->nlevel))
        return ((void*)0);
    return VAR_0->levels + VAR_1;
}
