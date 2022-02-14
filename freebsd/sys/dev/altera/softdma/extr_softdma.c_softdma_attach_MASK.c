
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct softdma_softc {int ih; int * res; void* bsh_c; void* bst_c; void* bsh; void* bst; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int,int *,int ,struct softdma_softc*,int *) ;
 struct softdma_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_5)
{
 struct softdma_softc *VAR_6;
 phandle_t VAR_7, VAR_8;
 int VAR_9;

 VAR_6 = FUNC_4(VAR_5);
 VAR_6->dev = VAR_5;

 if (FUNC_2(VAR_5, VAR_4, VAR_6->res)) {
  FUNC_5(VAR_5,
      "could not allocate resources for device\n");
  return (VAR_0);
 }


 VAR_6->bst = FUNC_8(VAR_6->res[0]);
 VAR_6->bsh = FUNC_7(VAR_6->res[0]);


 VAR_6->bst_c = FUNC_8(VAR_6->res[1]);
 VAR_6->bsh_c = FUNC_7(VAR_6->res[1]);


 VAR_9 = FUNC_3(VAR_5, VAR_6->res[2], VAR_2 | VAR_1,
     ((void*)0), VAR_3, VAR_6, &VAR_6->ih);
 if (VAR_9) {
  FUNC_5(VAR_5, "Unable to alloc interrupt resource.\n");
  return (VAR_0);
 }

 VAR_8 = FUNC_6(VAR_5);
 VAR_7 = FUNC_1(VAR_8);
 FUNC_0(VAR_7, VAR_5);

 return (0);
}
