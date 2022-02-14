
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ti_edma3_softc {int * ih_cookie; int * irq_res; int * mem_res; int sc_dev; } ;
typedef int device_t ;
struct TYPE_2__ {int description; int * handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int,int *,int ,struct ti_edma3_softc*,int *) ;
 struct ti_edma3_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ti_edma3_softc* VAR_9 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_10)
{
 struct ti_edma3_softc *VAR_11 = FUNC_2(VAR_10);
 uint32_t VAR_12;
 int VAR_13;
 int VAR_14;

 if (VAR_9)
  return (VAR_1);

 VAR_9 = VAR_11;
 VAR_11->sc_dev = VAR_10;


 VAR_13 = FUNC_0(VAR_10, VAR_8, VAR_11->mem_res);
 if (VAR_13) {
  FUNC_3(VAR_10, "Error: could not allocate mem resources\n");
  return (VAR_1);
 }


 VAR_13 = FUNC_0(VAR_10, VAR_7, VAR_11->irq_res);
 if (VAR_13) {
  FUNC_3(VAR_10, "Error: could not allocate irq resources\n");
  return (VAR_1);
 }


 FUNC_5(VAR_0);

 VAR_12 = FUNC_4(VAR_4);

 FUNC_3(VAR_10, "EDMA revision %08x\n", VAR_12);



 for (VAR_14 = 0; VAR_14 < VAR_5; ++VAR_14) {
  VAR_13 = FUNC_1(VAR_10, VAR_11->irq_res[VAR_14], VAR_3 |
      VAR_2, ((void*)0), *VAR_6[VAR_14].handler,
      VAR_11, &VAR_11->ih_cookie[VAR_14]);
  if (VAR_13) {
   FUNC_3(VAR_10, "could not setup %s\n",
       VAR_6[VAR_14].description);
   return (VAR_13);
  }
 }

 return (0);
}
