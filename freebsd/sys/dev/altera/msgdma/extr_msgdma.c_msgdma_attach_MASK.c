
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msgdma_softc {int ih; int * res; void* bsh_d; void* bst_d; void* bsh; void* bst; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct msgdma_softc*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int,int *,int ,struct msgdma_softc*,int *) ;
 struct msgdma_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct msgdma_softc*) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;
 void* FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_7)
{
 struct msgdma_softc *VAR_8;
 phandle_t VAR_9, VAR_10;
 int VAR_11;

 VAR_8 = FUNC_5(VAR_7);
 VAR_8->dev = VAR_7;

 if (FUNC_3(VAR_7, VAR_6, VAR_8->res)) {
  FUNC_6(VAR_7, "could not allocate resources for device\n");
  return (VAR_2);
 }


 VAR_8->bst = FUNC_10(VAR_8->res[0]);
 VAR_8->bsh = FUNC_9(VAR_8->res[0]);


 VAR_8->bst_d = FUNC_10(VAR_8->res[1]);
 VAR_8->bsh_d = FUNC_9(VAR_8->res[1]);


 VAR_11 = FUNC_4(VAR_7, VAR_8->res[2], VAR_4 | VAR_3,
     ((void*)0), VAR_5, VAR_8, &VAR_8->ih);
 if (VAR_11) {
  FUNC_6(VAR_7, "Unable to alloc interrupt resource.\n");
  return (VAR_2);
 }

 VAR_10 = FUNC_8(VAR_7);
 VAR_9 = FUNC_1(VAR_10);
 FUNC_0(VAR_9, VAR_7);

 if (FUNC_7(VAR_8) != 0)
  return (-1);

 FUNC_2(VAR_8, VAR_1, VAR_0);

 return (0);
}
