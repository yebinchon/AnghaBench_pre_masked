
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intsmb_softc {int cfg_irq9; int sb8xx; int io_rid; int poll; int * io_res; int * smbus; scalar_t__ isbusy; int irq_hand; int * irq_res; int lock; int dev; } ;
typedef int device_t ;




 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;


 int VAR_9 ;

 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int ,int,int,int) ;
 int FUNC_2 (int ,int *,int,int *,int ,struct intsmb_softc*,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int * FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ) ;
 struct intsmb_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (int *) ;
 int VAR_17 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ,char*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int) ;
 int FUNC_14 (int ,int ,int,int) ;
 int FUNC_15 (char*,int) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_18)
{
 struct intsmb_softc *VAR_19 = FUNC_6(VAR_18);
 int VAR_20, VAR_21, VAR_22;
 int VAR_23;
 char *VAR_24;

 VAR_19->dev = VAR_18;

 FUNC_10(&VAR_19->lock, FUNC_5(VAR_18), "intsmb", VAR_4);

 VAR_19->cfg_irq9 = 0;
 switch (FUNC_11(VAR_18)) {

 case 0x71138086:
 case 0x719b8086:

  VAR_19->cfg_irq9 = 1;
  break;

 case 131:
  if (FUNC_12(VAR_18) >= VAR_0)
   VAR_19->sb8xx = 1;
  break;
 case 132:
 case 133:
  VAR_19->sb8xx = 1;
  break;
 }

 if (VAR_19->sb8xx) {
  VAR_20 = FUNC_16(VAR_18);
  if (VAR_20 != 0)
   goto fail;
  else
   goto no_intr;
 }

 VAR_19->io_rid = VAR_6;
 VAR_19->io_res = FUNC_0(VAR_18, VAR_15, &VAR_19->io_rid,
     VAR_13);
 if (VAR_19->io_res == ((void*)0)) {
  FUNC_7(VAR_18, "Could not allocate I/O space\n");
  VAR_20 = VAR_1;
  goto fail;
 }

 if (VAR_19->cfg_irq9) {
  FUNC_14(VAR_18, VAR_5, 0x9, 1);
  FUNC_14(VAR_18, VAR_7,
      130 | VAR_8, 1);
 }
 VAR_22 = FUNC_13(VAR_18, VAR_7, 1);
 VAR_19->poll = (VAR_22 & VAR_8) == 0;
 VAR_23 = VAR_22 & VAR_9;
 switch (VAR_23) {
 case 128:
  VAR_24 = "SMI";
  break;
 case 130:
  VAR_24 = "IRQ 9";
  break;
 case 129:
  VAR_24 = "PCI IRQ";
  break;
 default:
  VAR_24 = "BOGUS";
 }

 FUNC_7(VAR_18, "intr %s %s ", VAR_24,
     VAR_19->poll == 0 ? "enabled" : "disabled");
 FUNC_15("revision %d\n", FUNC_13(VAR_18, VAR_10, 1));

 if (!VAR_19->poll && VAR_23 == 128) {
  FUNC_7(VAR_18,
      "using polling mode when configured interrupt is SMI\n");
  VAR_19->poll = 1;
 }

 if (VAR_19->poll)
     goto no_intr;

 if (VAR_23 != 130 && VAR_23 != 129) {
  FUNC_7(VAR_18, "Unsupported interrupt mode\n");
  VAR_20 = VAR_1;
  goto fail;
 }


 VAR_21 = 0;
 if (VAR_19->cfg_irq9)
  FUNC_1(VAR_18, VAR_16, VAR_21, 9, 1);

 VAR_19->irq_res = FUNC_0(VAR_18, VAR_16, &VAR_21,
     VAR_14 | VAR_13);
 if (VAR_19->irq_res == ((void*)0)) {
  FUNC_7(VAR_18, "Could not allocate irq\n");
  VAR_20 = VAR_1;
  goto fail;
 }

 VAR_20 = FUNC_2(VAR_18, VAR_19->irq_res, VAR_3 | VAR_2,
     ((void*)0), VAR_17, VAR_19, &VAR_19->irq_hand);
 if (VAR_20) {
  FUNC_7(VAR_18, "Failed to map intr\n");
  goto fail;
 }

no_intr:
 VAR_19->isbusy = 0;
 VAR_19->smbus = FUNC_4(VAR_18, "smbus", -1);
 if (VAR_19->smbus == ((void*)0)) {
  FUNC_7(VAR_18, "failed to add smbus child\n");
  VAR_20 = VAR_1;
  goto fail;
 }
 VAR_20 = FUNC_8(VAR_19->smbus);
 if (VAR_20) {
  FUNC_7(VAR_18, "failed to probe+attach smbus child\n");
  goto fail;
 }





 return (0);

fail:
 FUNC_9(VAR_18);
 return (VAR_20);
}
