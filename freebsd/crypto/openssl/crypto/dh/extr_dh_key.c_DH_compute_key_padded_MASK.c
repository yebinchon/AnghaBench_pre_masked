
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int p; TYPE_1__* meth; } ;
struct TYPE_5__ {int (* compute_key ) (unsigned char*,int const*,TYPE_2__*) ;} ;
typedef TYPE_2__ DH ;
typedef int BIGNUM ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned char*,unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int ,int) ;
 int FUNC_3 (unsigned char*,int const*,TYPE_2__*) ;

int FUNC_4(unsigned char *VAR_0, const BIGNUM *VAR_1, DH *VAR_2)
{
    int VAR_3, VAR_4;
    VAR_3 = VAR_2->meth->compute_key(VAR_0, VAR_1, VAR_2);
    if (VAR_3 <= 0)
        return VAR_3;
    VAR_4 = FUNC_0(VAR_2->p) - VAR_3;
    if (VAR_4 > 0) {
        FUNC_1(VAR_0 + VAR_4, VAR_0, VAR_3);
        FUNC_2(VAR_0, 0, VAR_4);
    }
    return VAR_3 + VAR_4;
}
