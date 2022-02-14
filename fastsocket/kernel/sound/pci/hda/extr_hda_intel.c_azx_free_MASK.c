
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ area; } ;
struct azx {int init_failed; int num_streams; scalar_t__ irq; scalar_t__ fw; struct azx* azx_dev; int pci; scalar_t__ region_requested; TYPE_1__ posbuf; TYPE_1__ rb; TYPE_1__ bdl; scalar_t__ remap_addr; scalar_t__ msi; scalar_t__ initialized; scalar_t__ vga_switcheroo_registered; scalar_t__ bus; scalar_t__ disabled; int probe_wait; } ;


 int FUNC_0 (struct azx*) ;
 int FUNC_1 (struct azx*) ;
 int FUNC_2 (struct azx*) ;
 int FUNC_3 (struct azx*) ;
 int FUNC_4 (struct azx*,struct azx*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,void*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct azx*) ;
 int FUNC_9 (struct azx*,TYPE_1__*,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (scalar_t__) ;
 scalar_t__ FUNC_16 (struct azx*) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct azx *VAR_0)
{
 int VAR_1;

 FUNC_1(VAR_0);

 FUNC_2(VAR_0);

 VAR_0->init_failed = 1;
 FUNC_5(&VAR_0->probe_wait);

 if (FUNC_16(VAR_0)) {
  if (VAR_0->disabled && VAR_0->bus)
   FUNC_15(VAR_0->bus);
  if (VAR_0->vga_switcheroo_registered)
   FUNC_17(VAR_0->pci);
 }

 if (VAR_0->initialized) {
  FUNC_0(VAR_0);
  for (VAR_1 = 0; VAR_1 < VAR_0->num_streams; VAR_1++)
   FUNC_4(VAR_0, &VAR_0->azx_dev[VAR_1]);
  FUNC_3(VAR_0);
 }

 if (VAR_0->irq >= 0)
  FUNC_6(VAR_0->irq, (void*)VAR_0);
 if (VAR_0->msi)
  FUNC_11(VAR_0->pci);
 if (VAR_0->remap_addr)
  FUNC_7(VAR_0->remap_addr);

 if (VAR_0->azx_dev) {
  for (VAR_1 = 0; VAR_1 < VAR_0->num_streams; VAR_1++)
   if (VAR_0->azx_dev[VAR_1].bdl.area) {
    FUNC_9(VAR_0, &VAR_0->azx_dev[VAR_1].bdl, 0);
    FUNC_14(&VAR_0->azx_dev[VAR_1].bdl);
   }
 }
 if (VAR_0->rb.area) {
  FUNC_9(VAR_0, &VAR_0->rb, 0);
  FUNC_14(&VAR_0->rb);
 }
 if (VAR_0->posbuf.area) {
  FUNC_9(VAR_0, &VAR_0->posbuf, 0);
  FUNC_14(&VAR_0->posbuf);
 }
 if (VAR_0->region_requested)
  FUNC_12(VAR_0->pci);
 FUNC_10(VAR_0->pci);
 FUNC_8(VAR_0->azx_dev);




 FUNC_8(VAR_0);

 return 0;
}
