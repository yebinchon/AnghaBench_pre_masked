
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct emu_sc_info {int lock; TYPE_1__* ihandler; } ;
struct TYPE_2__ {int inte_mask; int * irq_func; int * softc; scalar_t__ intr_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct emu_sc_info*,int ,int) ;
 int FUNC_1 (struct emu_sc_info*,int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct emu_sc_info *VAR_2, int VAR_3)
{
 uint32_t VAR_4;
 int VAR_5;

 FUNC_2(&VAR_2->lock);

 if (VAR_2->ihandler[VAR_3].inte_mask == 0) {
  FUNC_3(&VAR_2->lock);
  return (-1);
 }

 VAR_4 = FUNC_0(VAR_2, VAR_0, 4);
 VAR_4 &= ~VAR_2->ihandler[VAR_3].inte_mask;

 VAR_2->ihandler[VAR_3].inte_mask = 0;
 VAR_2->ihandler[VAR_3].intr_mask = 0;
 VAR_2->ihandler[VAR_3].softc = ((void*)0);
 VAR_2->ihandler[VAR_3].irq_func = ((void*)0);


 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if (VAR_2->ihandler[VAR_5].inte_mask != 0)
   VAR_4 |= VAR_2->ihandler[VAR_5].inte_mask;

 FUNC_1(VAR_2, VAR_0, VAR_4, 4);

 FUNC_3(&VAR_2->lock);
 return (VAR_3);
}
