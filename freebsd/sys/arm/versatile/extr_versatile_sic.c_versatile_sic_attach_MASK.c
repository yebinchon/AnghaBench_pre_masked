
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct versatile_sic_softc {int dev; struct versatile_sic_irqsrc* isrcs; int intrh; int * irq_res; int * mem_res; int mtx; } ;
struct versatile_sic_irqsrc {size_t irq; int isrc; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct versatile_sic_softc*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_2 (int ,int ,int*,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int *,struct versatile_sic_softc*,int *) ;
 char* FUNC_4 (int ) ;
 struct versatile_sic_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *,int ,int ,char*,char const*,size_t) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *,char*,char*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_12(device_t VAR_9)
{
 struct versatile_sic_softc *VAR_10 = FUNC_5(VAR_9);
 int VAR_11, VAR_12;
 uint32_t VAR_13;
 const char *VAR_14;
 struct versatile_sic_irqsrc *VAR_15;

 VAR_10->dev = VAR_9;
 FUNC_9(&VAR_10->mtx, FUNC_4(VAR_9), "sic",
     VAR_2);


 VAR_11 = 0;
 VAR_10->mem_res = FUNC_2(VAR_9, VAR_7, &VAR_11,
     VAR_3);
 if (VAR_10->mem_res == ((void*)0)) {
  FUNC_6(VAR_9, "Error: could not allocate memory resources\n");
  return (VAR_0);
 }


 VAR_11 = 0;
 VAR_10->irq_res = FUNC_2(VAR_9, VAR_6, &VAR_11,
     VAR_3);
 if (VAR_10->irq_res == ((void*)0)) {
  FUNC_6(VAR_9, "could not allocate IRQ resources\n");
  FUNC_11(VAR_9);
  return (VAR_0);
 }

 if ((FUNC_3(VAR_9, VAR_10->irq_res, VAR_1,
     VAR_8, ((void*)0), VAR_10, &VAR_10->intrh))) {
  FUNC_6(VAR_9,
      "unable to register interrupt handler\n");
  FUNC_11(VAR_9);
  return (VAR_0);
 }


 FUNC_1(VAR_10, VAR_4, 0xffffffff);


 VAR_15 = VAR_10->isrcs;
 VAR_14 = FUNC_4(VAR_10->dev);
 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
  VAR_15[VAR_13].irq = VAR_13;
  VAR_12 = FUNC_7(&VAR_15[VAR_13].isrc, VAR_10->dev,
      0, "%s,%u", VAR_14, VAR_13);
  if (VAR_12 != 0)
   return (VAR_12);
 }

 FUNC_8(VAR_9, FUNC_0(FUNC_10(VAR_9)));

 return (0);
}
