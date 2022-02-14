
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int* indexes; size_t depth; } ;
typedef TYPE_1__ BN_STACK ;



__attribute__((used)) static unsigned int FUNC_0(BN_STACK *VAR_0)
{
    return VAR_0->indexes[--(VAR_0->depth)];
}
