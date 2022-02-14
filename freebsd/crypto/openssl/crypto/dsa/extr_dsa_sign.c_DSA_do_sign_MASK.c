
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int * (* dsa_do_sign ) (unsigned char const*,int,TYPE_2__*) ;} ;
typedef int DSA_SIG ;
typedef TYPE_2__ DSA ;


 int * FUNC_0 (unsigned char const*,int,TYPE_2__*) ;

DSA_SIG *FUNC_1(const unsigned char *VAR_0, int VAR_1, DSA *VAR_2)
{
    return VAR_2->meth->dsa_do_sign(VAR_0, VAR_1, VAR_2);
}
