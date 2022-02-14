
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma_was_active; } ;
struct TYPE_4__ {int dma_was_active; } ;
struct sc_info {int lock; TYPE_1__ rch; TYPE_2__ pch; } ;
typedef int device_t ;


 int FUNC_0 (struct sc_info*,TYPE_2__*) ;
 int FUNC_1 (struct sc_info*,TYPE_1__*) ;
 int FUNC_2 (struct sc_info*,int) ;
 struct sc_info* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_0)
{
 struct sc_info *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_1->lock);
 VAR_1->pch.dma_was_active = FUNC_0(VAR_1, &VAR_1->pch);
 VAR_1->rch.dma_was_active = FUNC_1(VAR_1, &VAR_1->rch);
 FUNC_2(VAR_1, 3);
 FUNC_5(VAR_1->lock);
 return 0;
}
