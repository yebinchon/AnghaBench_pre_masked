
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int base; } ;
typedef TYPE_1__ t_MemBlock ;
struct TYPE_5__ {TYPE_1__* memBlocks; } ;
typedef TYPE_2__ t_MM ;
typedef scalar_t__ t_Handle ;


 int FUNC_0 (TYPE_2__*) ;

uint64_t FUNC_1(t_Handle VAR_0)
{
    t_MM *VAR_1 = (t_MM*)VAR_0;
    t_MemBlock *VAR_2;

    FUNC_0(VAR_1);

    VAR_2 = VAR_1->memBlocks;
    return VAR_2->base;
}
