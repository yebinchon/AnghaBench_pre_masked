
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct bhndb_pci_softc {int dev; } ;
struct bhndb_devinfo {int addrspace; } ;
typedef int * device_t ;
typedef scalar_t__ bus_size_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ,scalar_t__,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bhndb_pci_softc*) ;
 scalar_t__ FUNC_2 (struct bhndb_pci_softc*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int *,int ,int ,int ,scalar_t__) ;
 struct bhndb_devinfo* FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_6(struct bhndb_pci_softc *VAR_6)
{
 bus_size_t VAR_7;
 int VAR_8;





 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7 > 0) {
  struct bhndb_devinfo *VAR_9;
  device_t VAR_10;

  if (VAR_5) {
   FUNC_5(VAR_6->dev, "found SPROM (%ju bytes)\n",
       (uintmax_t)VAR_7);
  }



  VAR_10 = FUNC_0(VAR_6->dev,
      VAR_2 + VAR_1, "bhnd_nvram", -1);
  if (VAR_10 == ((void*)0)) {
   FUNC_5(VAR_6->dev, "failed to add sprom device\n");
   return (VAR_3);
  }



  VAR_9 = FUNC_4(VAR_10);
  VAR_9->addrspace = VAR_0;

  VAR_8 = FUNC_3(VAR_10, VAR_4, 0,
      FUNC_1(VAR_6), VAR_7);
  if (VAR_8) {
   FUNC_5(VAR_6->dev,
       "failed to register sprom resources\n");
   return (VAR_8);
  }
 }

 return (0);
}
