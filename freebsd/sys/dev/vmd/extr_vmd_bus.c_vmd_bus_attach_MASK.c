
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmd_softc {int vmd_io_resource; int * vmd_regs_resource; } ;
struct pci_devinfo {int resources; } ;
typedef scalar_t__ rman_res_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct vmd_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,struct pci_devinfo*) ;
 struct pci_devinfo* FUNC_6 (int ,int ,scalar_t__,int,int,int) ;
 int FUNC_7 (int *,int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4)
{
 struct vmd_softc *VAR_5;
 struct pci_devinfo *VAR_6;
 rman_res_t VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_5 = FUNC_2(FUNC_1(VAR_4));


 VAR_9 = VAR_10 = VAR_11 = 0;
 VAR_6 = FUNC_6(FUNC_1(VAR_4), VAR_4,
      VAR_1 - FUNC_3(FUNC_1(VAR_4)),
      VAR_9, VAR_10, VAR_11);
 if (VAR_6 == ((void*)0)) {
  FUNC_4(VAR_4, "Cannot allocate dinfo!\n");
  return (VAR_0);
 }

 FUNC_5(VAR_4, VAR_6);

 VAR_7 = FUNC_9(VAR_5->vmd_regs_resource[1]);
 VAR_8 = FUNC_8(VAR_5->vmd_regs_resource[1]);
 FUNC_7(&VAR_6->resources, VAR_3, VAR_7, VAR_8,
     VAR_8 - VAR_7 + 1);

 VAR_7 = FUNC_9(VAR_5->vmd_io_resource);
 VAR_8 = FUNC_8(VAR_5->vmd_io_resource);
 FUNC_7(&VAR_6->resources, VAR_2, VAR_7, VAR_8,
     VAR_8 - VAR_7 + 1);

 FUNC_0(VAR_4);

 return (0);
}
