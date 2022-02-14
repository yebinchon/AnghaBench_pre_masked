
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct axidma_softc {int * ih; int * res; int bsh; int bst; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int,int *,int ,struct axidma_softc*,int *) ;
 struct axidma_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_6)
{
 struct axidma_softc *VAR_7;
 phandle_t VAR_8, VAR_9;
 int VAR_10;

 VAR_7 = FUNC_4(VAR_6);
 VAR_7->dev = VAR_6;

 if (FUNC_2(VAR_6, VAR_5, VAR_7->res)) {
  FUNC_5(VAR_6, "could not allocate resources.\n");
  return (VAR_0);
 }


 VAR_7->bst = FUNC_8(VAR_7->res[0]);
 VAR_7->bsh = FUNC_7(VAR_7->res[0]);


 VAR_10 = FUNC_3(VAR_6, VAR_7->res[1], VAR_2 | VAR_1,
     ((void*)0), VAR_4, VAR_7, &VAR_7->ih[0]);
 if (VAR_10) {
  FUNC_5(VAR_6, "Unable to alloc interrupt resource.\n");
  return (VAR_0);
 }


 VAR_10 = FUNC_3(VAR_6, VAR_7->res[2], VAR_2 | VAR_1,
     ((void*)0), VAR_3, VAR_7, &VAR_7->ih[1]);
 if (VAR_10) {
  FUNC_5(VAR_6, "Unable to alloc interrupt resource.\n");
  return (VAR_0);
 }

 VAR_9 = FUNC_6(VAR_6);
 VAR_8 = FUNC_1(VAR_9);
 FUNC_0(VAR_8, VAR_6);

 return (0);
}
