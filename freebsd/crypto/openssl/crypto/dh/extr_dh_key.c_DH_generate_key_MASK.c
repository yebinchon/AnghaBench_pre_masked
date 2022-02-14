
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* meth; } ;
struct TYPE_5__ {int (* generate_key ) (TYPE_2__*) ;} ;
typedef TYPE_2__ DH ;


 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(DH *VAR_0)
{
    return VAR_0->meth->generate_key(VAR_0);
}
