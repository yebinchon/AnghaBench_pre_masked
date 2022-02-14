
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * order; } ;
typedef TYPE_1__ EC_GROUP ;


 int FUNC_0 (int *) ;

int FUNC_1(const EC_GROUP *VAR_0)
{
    if (VAR_0->order == ((void*)0))
        return 0;
    return FUNC_0(VAR_0->order);
}
