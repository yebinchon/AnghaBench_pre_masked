
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct as3722_softc {int * irq_res; int * irq_h; int dev; int bus_addr; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct as3722_softc*) ;
 int FUNC_1 (struct as3722_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct as3722_softc*) ;
 int FUNC_3 (struct as3722_softc*,int ) ;
 int FUNC_4 (struct as3722_softc*) ;
 int VAR_5 ;
 int FUNC_5 (struct as3722_softc*,int ) ;
 int FUNC_6 (struct as3722_softc*,int ) ;
 int FUNC_7 (struct as3722_softc*,int ) ;
 int * FUNC_8 (int ,int ,int*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int *) ;
 int FUNC_11 (int ,int *,int,int *,int ,struct as3722_softc*,int **) ;
 int FUNC_12 (int ,int *,int *) ;
 char* FUNC_13 (int ) ;
 struct as3722_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,int *) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_6)
{
 struct as3722_softc *VAR_7;
 const char *VAR_8;
 int VAR_9, VAR_10, VAR_11;
 phandle_t VAR_12;

 VAR_7 = FUNC_14(VAR_6);
 VAR_7->dev = VAR_6;
 VAR_7->bus_addr = FUNC_19(VAR_6);
 VAR_12 = FUNC_20(VAR_7->dev);
 VAR_8 = FUNC_13(VAR_6);
 VAR_9 = FUNC_15(VAR_6);
 VAR_10 = 0;
 FUNC_1(VAR_7);

 VAR_11 = 0;
 VAR_7->irq_res = FUNC_8(VAR_6, VAR_4, &VAR_11,
     VAR_3);
 if (VAR_7->irq_res == ((void*)0)) {
  FUNC_16(VAR_6, "Cannot allocate interrupt.\n");
  VAR_10 = VAR_0;
  goto fail;
 }

 VAR_10 = FUNC_5(VAR_7, VAR_12);
 if (VAR_10 != 0)
  goto fail;
 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10 != 0)
  goto fail;
 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10 != 0)
  goto fail;
 VAR_10 = FUNC_6(VAR_7, VAR_12);
 if (VAR_10 != 0)
  goto fail;
 VAR_10 = FUNC_3(VAR_7, VAR_12);
 if (VAR_10 != 0)
  goto fail;
 VAR_10 = FUNC_7(VAR_7, VAR_12);
 if (VAR_10 != 0)
  goto fail;

 FUNC_18(VAR_6, ((void*)0));
 FUNC_17(VAR_6, "default");


 VAR_10 = FUNC_11(VAR_6, VAR_7->irq_res, VAR_2 | VAR_1,
     ((void*)0), VAR_5, VAR_7, &VAR_7->irq_h);
 if (VAR_10) {
  FUNC_16(VAR_6, "Cannot setup interrupt.\n");
  goto fail;
 }
 return (FUNC_9(VAR_6));

fail:
 if (VAR_7->irq_h != ((void*)0))
  FUNC_12(VAR_6, VAR_7->irq_res, VAR_7->irq_h);
 if (VAR_7->irq_res != ((void*)0))
  FUNC_10(VAR_6, VAR_4, 0, VAR_7->irq_res);
 FUNC_0(VAR_7);
 return (VAR_10);
}
