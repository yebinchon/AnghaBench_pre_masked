
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* dma_active; } ;
struct sc_info {TYPE_1__ pch; TYPE_1__ rch; } ;
typedef int device_t ;


 void* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct sc_info*,int) ;
 struct sc_info* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
    struct sc_info *VAR_1;

    VAR_1 = FUNC_2(VAR_0);

    VAR_1->rch.dma_active = FUNC_0(&VAR_1->rch, 0);
    VAR_1->pch.dma_active = FUNC_0(&VAR_1->pch, 0);

    FUNC_1(VAR_1, 3);

    return 0;
}
