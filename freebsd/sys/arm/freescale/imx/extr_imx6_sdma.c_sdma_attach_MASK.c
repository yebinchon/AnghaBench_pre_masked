
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_softc {int ih; int * res; int bsh; int bst; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sdma_softc*) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int,int *,int ,struct sdma_softc*,int *) ;
 struct sdma_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct sdma_softc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 struct sdma_softc* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6)
{
 struct sdma_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_6);
 VAR_7->dev = VAR_6;

 if (FUNC_1(VAR_6, VAR_5, VAR_7->res)) {
  FUNC_4(VAR_6, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_7->bst = FUNC_7(VAR_7->res[0]);
 VAR_7->bsh = FUNC_6(VAR_7->res[0]);

 VAR_4 = VAR_7;


 VAR_8 = FUNC_2(VAR_6, VAR_7->res[1], VAR_2 | VAR_1,
     ((void*)0), VAR_3, VAR_7, &VAR_7->ih);
 if (VAR_8) {
  FUNC_4(VAR_6, "Unable to alloc interrupt resource.\n");
  return (VAR_0);
 }

 if (FUNC_5(VAR_7) == -1)
  return (VAR_0);

 if (FUNC_0(VAR_7) == -1)
  return (VAR_0);

 return (0);
}
