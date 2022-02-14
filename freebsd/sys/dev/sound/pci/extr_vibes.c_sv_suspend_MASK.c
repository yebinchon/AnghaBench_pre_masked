
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_active; int dma_was_active; } ;
struct sc_info {TYPE_1__ pch; TYPE_1__ rch; } ;
typedef int device_t ;


 int VAR_0 ;
 struct sc_info* FUNC_0 (int ) ;
 int FUNC_1 (struct sc_info*) ;
 int FUNC_2 (struct sc_info*,int) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct sc_info *VAR_2 = FUNC_0(VAR_1);

 VAR_2->rch.dma_was_active = VAR_2->rch.dma_active;
 FUNC_3(((void*)0), &VAR_2->rch, VAR_0);

 VAR_2->pch.dma_was_active = VAR_2->pch.dma_active;
 FUNC_3(((void*)0), &VAR_2->pch, VAR_0);

 FUNC_1(VAR_2);
 FUNC_2(VAR_2, 3);

 return 0;
}
