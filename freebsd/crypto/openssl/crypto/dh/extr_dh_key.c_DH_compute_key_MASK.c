
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int (* compute_key ) (unsigned char*,int const*,TYPE_2__*) ;} ;
typedef TYPE_2__ DH ;
typedef int BIGNUM ;


 int FUNC_0 (unsigned char*,int const*,TYPE_2__*) ;

int FUNC_1(unsigned char *VAR_0, const BIGNUM *VAR_1, DH *VAR_2)
{
    return VAR_2->meth->compute_key(VAR_0, VAR_1, VAR_2);
}
