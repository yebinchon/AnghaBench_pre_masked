
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pl190_intc_softc {int dev; struct pl190_intc_irqsrc* isrcs; int * intc_res; int mtx; } ;
struct pl190_intc_irqsrc {int irq; int isrc; } ;
struct intr_pic {int dummy; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct pl190_intc_softc*,scalar_t__) ;
 int FUNC_1 (struct pl190_intc_softc*,int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int * FUNC_3 (int ,int ,int*,int ) ;
 char* FUNC_4 (int ) ;
 struct pl190_intc_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,int ,int ,char*,char const*,int) ;
 int FUNC_8 (int ,int ,int ,struct pl190_intc_softc*,int ) ;
 struct intr_pic* FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,char*,char*,int ) ;
 int FUNC_11 (int ) ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_12(device_t VAR_10)
{
 struct pl190_intc_softc *VAR_11;
 uint32_t VAR_12;
 int VAR_13, VAR_14;
 struct pl190_intc_irqsrc *VAR_15;
 struct intr_pic *VAR_16;
 int VAR_17;
 uint32_t VAR_18;
 const char *VAR_19;
 phandle_t VAR_20;

 VAR_11 = FUNC_5(VAR_10);
 VAR_11->dev = VAR_10;
 FUNC_10(&VAR_11->mtx, FUNC_4(VAR_10), "pl190",
     VAR_1);


 VAR_14 = 0;
 VAR_11->intc_res = FUNC_3(VAR_10, VAR_3, &VAR_14,
     VAR_2);
 if (VAR_11->intc_res == ((void*)0)) {
  FUNC_6(VAR_10, "Error: could not allocate memory resources\n");
  return (VAR_0);
 }




 FUNC_1(VAR_11, VAR_5, 0x00000000);

 FUNC_1(VAR_11, VAR_4, 0xffffffff);

 VAR_12 = 0;
 for (VAR_13 = 3; VAR_13 >= 0; VAR_13--) {
  VAR_12 = (VAR_12 << 8) |
       (FUNC_0(VAR_11, VAR_6 + VAR_13*4) & 0xff);
 }

 FUNC_6(VAR_10, "Peripheral ID: %08x\n", VAR_12);

 VAR_12 = 0;
 for (VAR_13 = 3; VAR_13 >= 0; VAR_13--) {
  VAR_12 = (VAR_12 << 8) |
       (FUNC_0(VAR_11, VAR_7 + VAR_13*4) & 0xff);
 }

 FUNC_6(VAR_10, "PrimeCell ID: %08x\n", VAR_12);


 VAR_15 = VAR_11->isrcs;
 VAR_19 = FUNC_4(VAR_11->dev);
 for (VAR_18 = 0; VAR_18 < VAR_8; VAR_18++) {
  VAR_15[VAR_18].irq = VAR_18;
  VAR_17 = FUNC_7(&VAR_15[VAR_18].isrc, VAR_11->dev,
      0, "%s,%u", VAR_19, VAR_18);
  if (VAR_17 != 0)
   return (VAR_17);
 }

 VAR_20 = FUNC_2(FUNC_11(VAR_11->dev));
 VAR_16 = FUNC_9(VAR_11->dev, VAR_20);
 if (VAR_16 == ((void*)0))
  return (VAR_0);

 return (FUNC_8(VAR_11->dev, VAR_20, VAR_9, VAR_11, 0));
}
