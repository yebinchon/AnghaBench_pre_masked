
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct ata_promise_sx4 {int busy; int queue; int mtx; } ;
struct ata_pci_controller {int channels; void* r_res1; void* r_rid1; void* r_type1; void* r_res2; void* r_rid2; void* r_type2; int getrev; void* setmode; void* reset; void* ch_detach; void* ch_attach; TYPE_1__* chip; struct ata_promise_sx4* chipset_data; int handle; int r_irq; } ;
typedef int device_t ;
struct TYPE_2__ {int cfg1; int const cfg2; } ;


 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int) ;
 int VAR_0 ;
 int FUNC_2 (void*,int,int) ;
 int FUNC_3 (void*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_4 (int) ;
 int const VAR_7 ;

 int VAR_8 ;
 void* VAR_9 ;
 int FUNC_5 (int *) ;
 int VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 scalar_t__ FUNC_6 (int ,int ) ;
 void* FUNC_7 (int ,void*,void**,int ) ;
 int FUNC_8 (int ,void*,void*,void*) ;
 int FUNC_9 (int ,int ,int ,int *,int ,struct ata_pci_controller*,int *) ;
 int FUNC_10 (int ,int ,int ,int ,int *) ;
 int FUNC_11 (int ,int ,int ) ;
 struct ata_pci_controller* FUNC_12 (int ) ;
 int FUNC_13 (int ,char*,...) ;
 struct ata_promise_sx4* FUNC_14 (int,int ,int) ;
 int FUNC_15 (int *,char*,int *,int ) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (void*) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_22)
{
    struct ata_pci_controller *VAR_23 = FUNC_12(VAR_22);
    int VAR_24;

    if (FUNC_6(VAR_22, VAR_10))
 return VAR_2;

    switch (VAR_23->chip->cfg1) {
    case 133:

 FUNC_2(VAR_23->r_res1, 0x11, FUNC_0(VAR_23->r_res1, 0x11) | 0x0a);


    case 132:

 FUNC_2(VAR_23->r_res1, 0x1f, FUNC_0(VAR_23->r_res1, 0x1f) | 0x01);
 VAR_23->ch_attach = VAR_12;
 VAR_23->ch_detach = VAR_11;
 VAR_23->setmode = VAR_19;
 return 0;

    case 128:
 VAR_23->ch_attach = VAR_21;
 VAR_23->ch_detach = VAR_11;
 VAR_23->setmode = VAR_19;
 return 0;

    case 134:
 VAR_23->r_type1 = VAR_9;
 VAR_23->r_rid1 = FUNC_4(4);
 if (!(VAR_23->r_res1 = FUNC_7(VAR_22, VAR_23->r_type1,
          &VAR_23->r_rid1, VAR_8)))
     goto failnfree;
 VAR_23->r_type2 = VAR_9;
 VAR_23->r_rid2 = FUNC_4(3);
 if (!(VAR_23->r_res2 = FUNC_7(VAR_22, VAR_23->r_type2,
          &VAR_23->r_rid2, VAR_8)))
     goto failnfree;

 if (VAR_23->chip->cfg2 == VAR_7) {
     struct ata_promise_sx4 *VAR_25;
     u_int32_t VAR_26 = FUNC_1(VAR_23->r_res2, 0x000c0080);

     if (FUNC_11(VAR_22, VAR_23->r_irq, VAR_23->handle) ||
  FUNC_9(VAR_22, VAR_23->r_irq, VAR_0, ((void*)0),
          VAR_20, VAR_23, &VAR_23->handle)) {
  FUNC_13(VAR_22, "unable to setup interrupt\n");
  goto failnfree;
     }


     FUNC_13(VAR_22, "DIMM size %dMB @ 0x%08x%s\n",
     (((VAR_26 >> 16) & 0xff)-((VAR_26 >> 24) & 0xff)+1) << 4,
     ((VAR_26 >> 24) & 0xff),
     FUNC_1(VAR_23->r_res2, 0x000c0088) & (1<<16) ?
     " ECC enabled" : "" );


     FUNC_3(VAR_23->r_res2, 0x000c000c,
       (FUNC_1(VAR_23->r_res2, 0x000c000c) & 0xffff0000));


     VAR_25 = FUNC_14(sizeof(struct ata_promise_sx4),
     VAR_4, VAR_5 | VAR_6);
     if (VAR_25 == ((void*)0)) {
  FUNC_13(VAR_22, "Cannot allocate HPKT\n");
  goto failnfree;
     }
     FUNC_15(&VAR_25->mtx, "ATA promise HPKT lock", ((void*)0), VAR_3);
     FUNC_5(&VAR_25->queue);
     VAR_25->busy = 0;
     VAR_23->chipset_data = VAR_25;
     VAR_23->ch_attach = VAR_13;
     VAR_23->ch_detach = VAR_14;
     VAR_23->reset = VAR_17;
     VAR_23->setmode = VAR_19;
     VAR_23->channels = 4;
     return 0;
 }


 if (FUNC_11(VAR_22, VAR_23->r_irq, VAR_23->handle) ||
     FUNC_9(VAR_22, VAR_23->r_irq, VAR_0, ((void*)0),
          VAR_16, VAR_23, &VAR_23->handle)) {
  FUNC_13(VAR_22, "unable to setup interrupt\n");
  goto failnfree;
 }

 switch (VAR_23->chip->cfg2) {
 case 131:
     VAR_23->channels = ((FUNC_1(VAR_23->r_res2, 0x48) & 0x01) > 0) +
        ((FUNC_1(VAR_23->r_res2, 0x48) & 0x02) > 0) + 2;
     goto sata150;
 case 136:
     VAR_23->channels = 3;
     goto sata150;
 case 130:
     VAR_23->channels = 4;
sata150:
     VAR_24 = 0x6c;
     break;

 case 135:
     VAR_23->channels = 3;
     goto sataii;
 case 129:
 default:
     VAR_23->channels = 4;
sataii:
     VAR_24 = 0x60;
     break;
 }


 VAR_23->chipset_data = (void *)(uintptr_t)0xffffffff;


 FUNC_3(VAR_23->r_res2, VAR_24, 0x000000ff);


 if ((VAR_23->chip->cfg2 == 129) || (VAR_23->chip->cfg2 == 135))
     FUNC_3(VAR_23->r_res2, 0x44, FUNC_1(VAR_23->r_res2, 0x44) | 0x2000);

 VAR_23->ch_attach = VAR_13;
 VAR_23->ch_detach = VAR_14;
 VAR_23->reset = VAR_17;
 VAR_23->setmode = VAR_18;
 VAR_23->getrev = VAR_15;

 return 0;
    }

failnfree:
    if (VAR_23->r_res2)
 FUNC_8(VAR_22, VAR_23->r_type2, VAR_23->r_rid2, VAR_23->r_res2);
    if (VAR_23->r_res1)
 FUNC_8(VAR_22, VAR_23->r_type1, VAR_23->r_rid1, VAR_23->r_res1);
    return VAR_2;
}
