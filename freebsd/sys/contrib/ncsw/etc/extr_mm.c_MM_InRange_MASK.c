
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ base; scalar_t__ end; } ;
typedef TYPE_1__ t_MemBlock ;
struct TYPE_5__ {TYPE_1__* memBlocks; } ;
typedef TYPE_2__ t_MM ;
typedef scalar_t__ t_Handle ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

bool FUNC_1(t_Handle VAR_2, uint64_t VAR_3)
{
    t_MM *VAR_4 = (t_MM*)VAR_2;
    t_MemBlock *VAR_5;

    FUNC_0(VAR_4);

    VAR_5 = VAR_4->memBlocks;

    if ((VAR_3 >= VAR_5->base) && (VAR_3 < VAR_5->end))
        return VAR_1;
    else
        return VAR_0;
}
