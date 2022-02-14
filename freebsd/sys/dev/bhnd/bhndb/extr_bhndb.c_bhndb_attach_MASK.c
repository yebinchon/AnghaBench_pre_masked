
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct bhnd_chipid {int dummy; } ;
struct bhnd_core_info {int dummy; } ;
struct bhndb_softc {int services; int * bus_res; int dev; int parent_dev; int * bus_dev; struct bhnd_chipid chipid; struct bhnd_core_info bridge_core; } ;
struct bhndb_hwcfg {int dummy; } ;
struct bhndb_hw_priority {int dummy; } ;
struct bhndb_hw {int name; struct bhndb_hwcfg* cfg; } ;
struct bhndb_devinfo {int addrspace; } ;
struct bhnd_erom_io {int dummy; } ;
typedef int device_t ;
typedef int bhnd_erom_t ;
typedef int bhnd_erom_class_t ;


 int VAR_0 ;
 struct bhndb_hwcfg* FUNC_0 (int ,int ) ;
 struct bhndb_hw_priority* FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct bhndb_softc*) ;
 int FUNC_4 (struct bhndb_softc*) ;
 int VAR_1 ;
 int * FUNC_5 (int ,int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_6 (int *,struct bhnd_chipid*,struct bhnd_erom_io*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct bhnd_erom_io*) ;
 struct bhnd_erom_io* FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int ,int ,struct bhndb_hwcfg const*) ;
 int FUNC_13 (struct bhndb_softc*,struct bhnd_core_info*,int ,struct bhndb_hw const**) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct bhndb_softc*,int *,int *,struct bhnd_core_info*,int ,struct bhndb_hw_priority const*) ;
 scalar_t__ VAR_5 ;
 struct bhndb_devinfo* FUNC_16 (int *) ;
 int FUNC_17 (int ) ;
 struct bhndb_softc* FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,...) ;

int
FUNC_20(device_t VAR_6, struct bhnd_chipid *VAR_7,
    struct bhnd_core_info *VAR_8, u_int VAR_9,
    struct bhnd_core_info *VAR_10, bhnd_erom_class_t *VAR_11)
{
 struct bhndb_devinfo *VAR_12;
 struct bhndb_softc *VAR_13;
 const struct bhndb_hw *VAR_14;
 const struct bhndb_hwcfg *VAR_15;
 const struct bhndb_hw_priority *VAR_16;
 struct bhnd_erom_io *VAR_17;
 bhnd_erom_t *VAR_18;
 int VAR_19;

 VAR_13 = FUNC_18(VAR_6);
 VAR_13->dev = VAR_6;
 VAR_13->parent_dev = FUNC_17(VAR_6);
 VAR_13->bridge_core = *VAR_10;
 VAR_13->chipid = *VAR_7;

 if ((VAR_19 = FUNC_11(&VAR_13->services)))
  return (VAR_19);

 FUNC_4(VAR_13);

 VAR_18 = ((void*)0);


 if ((VAR_19 = FUNC_13(VAR_13, VAR_8, VAR_9, &VAR_14))) {
  FUNC_19(VAR_13->dev, "unable to identify device, "
      " using generic bridge resource definitions\n");

  VAR_15 = FUNC_0(VAR_13->parent_dev, VAR_6);
  VAR_14 = ((void*)0);
 } else {
  VAR_15 = VAR_14->cfg;
 }

 if (VAR_14 != ((void*)0) && (VAR_5 || FUNC_2(VAR_4))) {
  FUNC_19(VAR_13->dev, "%s resource configuration\n", VAR_14->name);
 }



 VAR_13->bus_res = FUNC_12(VAR_13->dev, VAR_13->parent_dev, VAR_15);
 if (VAR_13->bus_res == ((void*)0)) {
  FUNC_19(VAR_13->dev, "failed to allocate bridge resource "
      "state\n");
  VAR_19 = VAR_2;
  goto failed;
 }


 VAR_13->bus_dev = FUNC_5(VAR_6, VAR_1, "bhnd", -1);
 if (VAR_13->bus_dev == ((void*)0)) {
  VAR_19 = VAR_3;
  goto failed;
 }

 VAR_12 = FUNC_16(VAR_13->bus_dev);
 VAR_12->addrspace = VAR_0;



 VAR_17 = FUNC_9(VAR_13->bus_dev, 0);
 if ((VAR_18 = FUNC_6(VAR_11, VAR_7, VAR_17)) == ((void*)0)) {
  FUNC_8(VAR_17);
  VAR_19 = VAR_3;
  goto failed;
 }


 VAR_16 = FUNC_1(VAR_13->parent_dev, VAR_13->dev);
 VAR_19 = FUNC_15(VAR_13, VAR_18, VAR_13->bus_res, VAR_8, VAR_9,
     VAR_16);
 if (VAR_19) {
  FUNC_19(VAR_13->dev, "failed to initialize resource "
      "priority configuration: %d\n", VAR_19);
  goto failed;
 }


 FUNC_7(VAR_18);
 VAR_18 = ((void*)0);

 return (0);

failed:
 FUNC_3(VAR_13);

 if (VAR_13->bus_res != ((void*)0))
  FUNC_14(VAR_13->bus_res);

 if (VAR_18 != ((void*)0))
  FUNC_7(VAR_18);

 FUNC_10(&VAR_13->services);

 return (VAR_19);
}
