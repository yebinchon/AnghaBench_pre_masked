
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edma_softc {int device_id; int err_ih; int * res; int tc_ih; void* bsh_tcd; void* bst_tcd; void* bsh; void* bst; int channel_free; int channel_configure; int dma_request; int dma_setup; int dma_stop; int dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int*,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int,int *,int ,struct edma_softc*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 struct edma_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_11)
{
 struct edma_softc *VAR_12;
 phandle_t VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_12 = FUNC_4(VAR_11);
 VAR_12->dev = VAR_11;

 if ((VAR_13 = FUNC_6(VAR_12->dev)) == -1)
  return (VAR_0);

 if ((VAR_15 = FUNC_1(VAR_13, "device-id")) <= 0)
  return (VAR_0);

 FUNC_0(VAR_13, "device-id", &VAR_14, VAR_15);
 VAR_12->device_id = VAR_14;

 VAR_12->dma_stop = VAR_7;
 VAR_12->dma_setup = VAR_6;
 VAR_12->dma_request = VAR_5;
 VAR_12->channel_configure = VAR_3;
 VAR_12->channel_free = VAR_4;

 if (FUNC_2(VAR_11, VAR_9, VAR_12->res)) {
  FUNC_5(VAR_11, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_12->bst = FUNC_8(VAR_12->res[0]);
 VAR_12->bsh = FUNC_7(VAR_12->res[0]);
 VAR_12->bst_tcd = FUNC_8(VAR_12->res[1]);
 VAR_12->bsh_tcd = FUNC_7(VAR_12->res[1]);


 if (FUNC_3(VAR_11, VAR_12->res[2], VAR_2 | VAR_1,
  ((void*)0), VAR_10, VAR_12, &VAR_12->tc_ih)) {
  FUNC_5(VAR_11, "Unable to alloc DMA intr resource.\n");
  return (VAR_0);
 }

 if (FUNC_3(VAR_11, VAR_12->res[3], VAR_2 | VAR_1,
  ((void*)0), VAR_8, VAR_12, &VAR_12->err_ih)) {
  FUNC_5(VAR_11, "Unable to alloc DMA Err intr resource.\n");
  return (VAR_0);
 }

 return (0);
}
