
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ q; scalar_t__ p; } ;
typedef TYPE_1__ DSA ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;

int FUNC_2(const DSA *VAR_0)
{
    if (VAR_0->p && VAR_0->q)
        return FUNC_1(FUNC_0(VAR_0->p), FUNC_0(VAR_0->q));
    return -1;
}
