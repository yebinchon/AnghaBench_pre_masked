
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malo_softc {int malo_invalid; int malo_dmat; void* malo_io1h; void* malo_io1t; void* malo_io0h; void* malo_io0t; int malo_dev; } ;
struct malo_pci_softc {int malo_msi; int * malo_res_mem; int malo_mem_spec; int * malo_res_irq; int malo_irq_spec; int * malo_intrhand; struct malo_softc malo_sc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int,int ,int *,struct malo_softc*,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 struct malo_pci_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,struct malo_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_10 (int ,int*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ,int ,int*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 void* FUNC_16 (int ) ;
 void* FUNC_17 (int ) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_14)
{
 int VAR_15 = VAR_3, VAR_16, VAR_17, VAR_18;
 struct malo_pci_softc *VAR_19 = FUNC_7(VAR_14);
 struct malo_softc *VAR_20 = &VAR_19->malo_sc;

 VAR_20->malo_dev = VAR_14;

 FUNC_11(VAR_14);




 VAR_19->malo_mem_spec = VAR_11;
 VAR_15 = FUNC_0(VAR_14, VAR_19->malo_mem_spec, VAR_19->malo_res_mem);
 if (VAR_15) {
  FUNC_8(VAR_14, "couldn't allocate memory resources\n");
  return (VAR_3);
 }




 VAR_20->malo_invalid = 1;

 if (FUNC_12(VAR_14, VAR_7, &VAR_18) == 0) {
  VAR_17 = FUNC_14(VAR_14);
  if (VAR_8)
   FUNC_8(VAR_14, "MSI count : %d\n", VAR_17);
 } else
  VAR_17 = 0;

 VAR_19->malo_irq_spec = VAR_10;
 if (VAR_17 == VAR_6 && VAR_13 == 0) {
  if (FUNC_10(VAR_14, &VAR_17) == 0) {
   if (VAR_17 == VAR_6) {
    FUNC_8(VAR_14, "Using %d MSI messages\n",
        VAR_17);
    VAR_19->malo_irq_spec = VAR_12;
    VAR_19->malo_msi = 1;
   } else
    FUNC_15(VAR_14);
  }
 }

 VAR_15 = FUNC_0(VAR_14, VAR_19->malo_irq_spec, VAR_19->malo_res_irq);
 if (VAR_15) {
  FUNC_8(VAR_14, "couldn't allocate IRQ resources\n");
  goto bad;
 }

 if (VAR_19->malo_msi == 0)
  VAR_15 = FUNC_5(VAR_14, VAR_19->malo_res_irq[0],
      VAR_5 | VAR_4, VAR_9, ((void*)0), VAR_20,
      &VAR_19->malo_intrhand[0]);
 else {
  for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++) {
   VAR_15 = FUNC_5(VAR_14, VAR_19->malo_res_irq[VAR_16],
       VAR_5 | VAR_4, VAR_9, ((void*)0), VAR_20,
       &VAR_19->malo_intrhand[VAR_16]);
   if (VAR_15 != 0)
    break;
  }
 }




 if (FUNC_1(FUNC_3(VAR_14),
          1, 0,
          VAR_1,
          VAR_0,
          ((void*)0), ((void*)0),
          VAR_2,
          0,
          VAR_2,
          0,
          ((void*)0),
          ((void*)0),
          &VAR_20->malo_dmat)) {
  FUNC_8(VAR_14, "cannot allocate DMA tag\n");
  goto bad1;
 }

 VAR_20->malo_io0t = FUNC_17(VAR_19->malo_res_mem[0]);
 VAR_20->malo_io0h = FUNC_16(VAR_19->malo_res_mem[0]);
 VAR_20->malo_io1t = FUNC_17(VAR_19->malo_res_mem[1]);
 VAR_20->malo_io1h = FUNC_16(VAR_19->malo_res_mem[1]);

 VAR_15 = FUNC_9(FUNC_13(VAR_14), VAR_20);

 if (VAR_15 != 0)
  goto bad2;

 return (VAR_15);

bad2:
 FUNC_2(VAR_20->malo_dmat);
bad1:
 if (VAR_19->malo_msi == 0)
  FUNC_6(VAR_14, VAR_19->malo_res_irq[0],
      VAR_19->malo_intrhand[0]);
 else {
  for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++)
   FUNC_6(VAR_14, VAR_19->malo_res_irq[VAR_16],
       VAR_19->malo_intrhand[VAR_16]);
 }
 FUNC_4(VAR_14, VAR_19->malo_irq_spec, VAR_19->malo_res_irq);
bad:
 if (VAR_19->malo_msi != 0)
  FUNC_15(VAR_14);
 FUNC_4(VAR_14, VAR_19->malo_mem_spec, VAR_19->malo_res_mem);

 return (VAR_15);
}
