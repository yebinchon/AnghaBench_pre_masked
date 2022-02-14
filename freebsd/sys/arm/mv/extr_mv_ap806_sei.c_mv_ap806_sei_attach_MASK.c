
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mv_ap806_sei_softc {int * mem_res; int * irq_res; int * irq_ih; int dev; TYPE_1__* isrcs; } ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_2__ {int irq; int isrc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mv_ap806_sei_softc*) ;
 int FUNC_1 (struct mv_ap806_sei_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct mv_ap806_sei_softc*,int ,int) ;
 void* FUNC_5 (int ,int ,int*,int ) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int,int ,int *,struct mv_ap806_sei_softc*,int **) ;
 int FUNC_8 (int ,int *,int *) ;
 char* FUNC_9 (int ) ;
 struct mv_ap806_sei_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int *,int ,int ,char*,char const*,int) ;
 int * FUNC_13 (int ,int ) ;
 TYPE_1__* FUNC_14 (int,int ,int) ;
 int VAR_12 ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_13)
{
 struct mv_ap806_sei_softc *VAR_14;
 phandle_t VAR_15, VAR_16;
 uint32_t VAR_17;
 const char *VAR_18;
 int VAR_19, VAR_20;

 VAR_14 = FUNC_10(VAR_13);
 VAR_14->dev = VAR_13;
 VAR_16 = FUNC_15(VAR_13);
 FUNC_1(VAR_14);


 VAR_20 = 0;
 VAR_14->mem_res = FUNC_5(VAR_13, VAR_11, &VAR_20,
     VAR_9);
 if (VAR_14->mem_res == ((void*)0)) {
  FUNC_11(VAR_13, "Cannot allocate memory resources\n");
  VAR_19 = VAR_0;
  goto fail;
 }

 VAR_20 = 0;
 VAR_14->irq_res = FUNC_5(VAR_13, VAR_10, &VAR_20, VAR_9);
 if (VAR_14->irq_res == ((void*)0)) {
  FUNC_11(VAR_13, "Cannot allocate IRQ resources\n");
  VAR_19 = VAR_0;
  goto fail;
 }


 FUNC_4(VAR_14, VAR_1, 0xFFFFFFFF);
 FUNC_4(VAR_14, VAR_2, 0xFFFFFFFF);


 VAR_14->isrcs = FUNC_14(sizeof(*VAR_14->isrcs) * VAR_5,
     VAR_6, VAR_7 | VAR_8);
 VAR_18 = FUNC_9(VAR_14->dev);
 for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++) {
  VAR_14->isrcs[VAR_17].irq = VAR_17;
  VAR_19 = FUNC_12(&VAR_14->isrcs[VAR_17].isrc,
      VAR_14->dev, 0, "%s,%u", VAR_18, VAR_17);
  if (VAR_19 != 0)
   goto fail;
 }
 VAR_15 = FUNC_3(VAR_16);;
 if (FUNC_13(VAR_13, VAR_15) == ((void*)0)) {
  FUNC_11(VAR_13, "Cannot register SEI\n");
  VAR_19 = VAR_0;
  goto fail;
 }
 if (FUNC_7(VAR_13, VAR_14->irq_res,VAR_4 | VAR_3,
     VAR_12, ((void*)0), VAR_14, &VAR_14->irq_ih)) {
  FUNC_11(VAR_13,
      "Unable to register interrupt handler\n");
  VAR_19 = VAR_0;
  goto fail;
 }

 FUNC_2(VAR_15, VAR_13);
 return (0);

fail:
 if (VAR_14->irq_ih != ((void*)0))
  FUNC_8(VAR_13, VAR_14->irq_res, VAR_14->irq_ih);
 if (VAR_14->irq_res != ((void*)0))
  FUNC_6(VAR_13, VAR_10, 0, VAR_14->irq_res);
 if (VAR_14->mem_res != ((void*)0))
  FUNC_6(VAR_13, VAR_11, 0, VAR_14->mem_res);
 FUNC_0(VAR_14);
 return (VAR_0);
}
