
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* rm_descr; void* rm_type; } ;
struct generic_pcie_core_softc {TYPE_1__ io_rman; TYPE_1__ mem_rman; int * res; int bsh; int bst; int dmat; scalar_t__ coherent; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int * FUNC_0 (int ,int ,int*,int ) ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 struct generic_pcie_core_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;

int
FUNC_8(device_t VAR_8)
{
 struct generic_pcie_core_softc *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_8);
 VAR_9->dev = VAR_8;


 VAR_10 = FUNC_1(FUNC_2(VAR_8),
     1, 0,
     VAR_1,
     VAR_1,
     ((void*)0), ((void*)0),
     VAR_2,
     VAR_3,
     VAR_2,
     VAR_9->coherent ? VAR_0 : 0,
     ((void*)0), ((void*)0),
     &VAR_9->dmat);
 if (VAR_10 != 0)
  return (VAR_10);

 VAR_11 = 0;
 VAR_9->res = FUNC_0(VAR_8, VAR_7, &VAR_11, VAR_5);
 if (VAR_9->res == ((void*)0)) {
  FUNC_4(VAR_8, "could not map memory.\n");
  return (VAR_4);
 }

 VAR_9->bst = FUNC_6(VAR_9->res);
 VAR_9->bsh = FUNC_5(VAR_9->res);

 VAR_9->mem_rman.rm_type = VAR_6;
 VAR_9->mem_rman.rm_descr = "PCIe Memory";
 VAR_9->io_rman.rm_type = VAR_6;
 VAR_9->io_rman.rm_descr = "PCIe IO window";


 VAR_10 = FUNC_7(&VAR_9->mem_rman);
 if (VAR_10) {
  FUNC_4(VAR_8, "rman_init() failed. error = %d\n", VAR_10);
  return (VAR_10);
 }

 VAR_10 = FUNC_7(&VAR_9->io_rman);
 if (VAR_10) {
  FUNC_4(VAR_8, "rman_init() failed. error = %d\n", VAR_10);
  return (VAR_10);
 }

 return (0);
}
