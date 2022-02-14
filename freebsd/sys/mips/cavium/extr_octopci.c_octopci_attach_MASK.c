
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* rm_descr; void* rm_type; } ;
struct octopci_softc {int sc_bus; scalar_t__ sc_mem1_next; scalar_t__ sc_io_next; TYPE_1__ sc_mem1; TYPE_1__ sc_io; void* sc_mem1_base; void* sc_io_base; scalar_t__ sc_domain; int sc_dev; } ;
typedef int device_t ;


 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,char*,int) ;
 struct octopci_softc* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ FUNC_11 (int ) ;
 unsigned int FUNC_12 (int ,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int,int ,int ,int ,unsigned int,int) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_11)
{
 struct octopci_softc *VAR_12;
 unsigned VAR_13;
 int VAR_14;

 VAR_12 = FUNC_8(VAR_11);
 VAR_12->sc_dev = VAR_11;

 if (FUNC_11(VAR_8)) {
  VAR_12->sc_domain = FUNC_9(VAR_11);

  VAR_14 = FUNC_6(VAR_12->sc_domain);
  if (VAR_14 != 0) {
   FUNC_10(VAR_11, "Failed to put PCIe bus in host mode.\n");
   return (VAR_7);
  }






  VAR_12->sc_bus = 1;

  VAR_12->sc_io_base = FUNC_1(FUNC_4(VAR_12->sc_domain));
  VAR_12->sc_io.rm_descr = "Cavium Octeon PCIe I/O Ports";

  VAR_12->sc_mem1_base = FUNC_1(FUNC_5(VAR_12->sc_domain));
  VAR_12->sc_mem1.rm_descr = "Cavium Octeon PCIe Memory";
 } else {
  FUNC_13(VAR_11);

  VAR_12->sc_domain = 0;
  VAR_12->sc_bus = 0;

  VAR_12->sc_io_base = FUNC_0(FUNC_2(VAR_0, VAR_5));
  VAR_12->sc_io.rm_descr = "Cavium Octeon PCI I/O Ports";

  VAR_12->sc_mem1_base = FUNC_0(FUNC_2(VAR_0, VAR_6));
  VAR_12->sc_mem1.rm_descr = "Cavium Octeon PCI Memory";
 }

 VAR_12->sc_io.rm_type = VAR_10;
 VAR_14 = FUNC_15(&VAR_12->sc_io);
 if (VAR_14 != 0)
  return (VAR_14);

 VAR_14 = FUNC_16(&VAR_12->sc_io, VAR_1,
     VAR_1 + VAR_2);
 if (VAR_14 != 0)
  return (VAR_14);

 VAR_12->sc_mem1.rm_type = VAR_10;
 VAR_14 = FUNC_15(&VAR_12->sc_mem1);
 if (VAR_14 != 0)
  return (VAR_14);

 VAR_14 = FUNC_16(&VAR_12->sc_mem1, VAR_3,
     VAR_3 + VAR_4);
 if (VAR_14 != 0)
  return (VAR_14);




 VAR_12->sc_io_next = 0;
 VAR_12->sc_mem1_next = 0;




 FUNC_14(VAR_11, VAR_12->sc_bus, 0, 0, VAR_9, 0xff, 1);
 VAR_13 = FUNC_12(VAR_11, VAR_12->sc_bus);
 FUNC_14(VAR_11, VAR_12->sc_bus, 0, 0, VAR_9, VAR_13, 1);

 FUNC_7(VAR_11, "pci", -1);

 return (FUNC_3(VAR_11));
}
