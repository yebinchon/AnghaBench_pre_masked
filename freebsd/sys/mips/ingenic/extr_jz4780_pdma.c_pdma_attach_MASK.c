
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdma_softc {int ih; int * res; int bsh; int bst; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct pdma_softc*,int ) ;
 int FUNC_3 (struct pdma_softc*,int ,int) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int,int *,int ,struct pdma_softc*,int *) ;
 struct pdma_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_10)
{
 struct pdma_softc *VAR_11;
 phandle_t VAR_12, VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_11 = FUNC_6(VAR_10);
 VAR_11->dev = VAR_10;

 if (FUNC_4(VAR_10, VAR_9, VAR_11->res)) {
  FUNC_7(VAR_10, "could not allocate resources for device\n");
  return (VAR_3);
 }


 VAR_11->bst = FUNC_10(VAR_11->res[0]);
 VAR_11->bsh = FUNC_9(VAR_11->res[0]);


 VAR_14 = FUNC_5(VAR_10, VAR_11->res[1], VAR_5 | VAR_4,
     ((void*)0), VAR_8, VAR_11, &VAR_11->ih);
 if (VAR_14) {
  FUNC_7(VAR_10, "Unable to alloc interrupt resource.\n");
  return (VAR_3);
 }

 VAR_13 = FUNC_8(VAR_10);
 VAR_12 = FUNC_1(VAR_13);
 FUNC_0(VAR_12, VAR_10);

 VAR_15 = FUNC_2(VAR_11, VAR_6);
 VAR_15 &= ~(VAR_2 | VAR_0);
 VAR_15 |= (VAR_1);
 FUNC_3(VAR_11, VAR_6, VAR_15);

 FUNC_3(VAR_11, VAR_7, 0);

 return (0);
}
