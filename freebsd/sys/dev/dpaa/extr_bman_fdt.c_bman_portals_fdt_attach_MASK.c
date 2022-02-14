
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* vm_size_t ;
typedef scalar_t__ vm_paddr_t ;
typedef int uint32_t ;
struct resource_list_entry {scalar_t__ start; void* end; } ;
struct ofw_bus_devinfo {int obd_name; } ;
struct dpaa_portals_softc {scalar_t__ sc_dp_pa; void* sc_dp_size; int sc_dev; } ;
struct dpaa_portals_devinfo {int di_intr_rid; int di_res; } ;
typedef scalar_t__ phandle_t ;
typedef scalar_t__ ihandle_t ;
typedef int device_t ;
typedef int cpu_num ;
typedef int cpu ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__,char*,void*,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct dpaa_portals_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 scalar_t__ FUNC_10 (int ,struct dpaa_portals_devinfo*,int) ;
 int FUNC_11 (scalar_t__,int *,int *) ;
 int VAR_2 ;
 int FUNC_12 (struct ofw_bus_devinfo*) ;
 scalar_t__ FUNC_13 (struct ofw_bus_devinfo*,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,scalar_t__,int *,int*) ;
 int FUNC_16 (scalar_t__,char*) ;
 scalar_t__ FUNC_17 (int ,scalar_t__,int ,int ,int *) ;
 int FUNC_18 (scalar_t__,int ,scalar_t__*,void**,int *) ;
 struct resource_list_entry* FUNC_19 (int *,int ,int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 void* FUNC_22 (void*,void*) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_3)
{
 struct dpaa_portals_softc *VAR_4;
 struct resource_list_entry *VAR_5;
 phandle_t VAR_6, VAR_7, VAR_8;
 vm_paddr_t VAR_9;
 vm_size_t VAR_10;
 uint32_t VAR_11, VAR_12;
 ihandle_t VAR_13;
 int VAR_14, VAR_15, VAR_16;
 struct dpaa_portals_devinfo VAR_17;
 struct ofw_bus_devinfo VAR_18 = {};

 VAR_15 = 0;
 VAR_4 = FUNC_8(VAR_3);
 VAR_4->sc_dev = VAR_3;

 VAR_6 = FUNC_14(VAR_3);
 FUNC_11(VAR_6, &VAR_11, &VAR_12);


 for (VAR_7 = FUNC_0(VAR_6); VAR_7 != 0; VAR_7 = FUNC_4(VAR_7)) {
  if (VAR_15 >= VAR_2)
   break;
  if (!FUNC_16(VAR_7, "fsl,bman-portal")) {
   continue;
  }

  if (FUNC_2(VAR_7, "cpu-handle", (void *)&VAR_13,
      sizeof(VAR_13)) <= 0) {
   VAR_13 = FUNC_5(VAR_15);
   if (VAR_13 <= 0)
    continue;
  }

  VAR_8 = FUNC_3(VAR_13);
  if (FUNC_1(VAR_8, "reg", &VAR_14, sizeof(VAR_14)) <= 0) {
   FUNC_9(VAR_3, "Could not retrieve CPU number.\n");
   return (VAR_0);
  }

  VAR_15++;

  if (FUNC_13(&VAR_18, VAR_7) != 0) {
   FUNC_9(VAR_3, "could not set up devinfo\n");
   continue;
  }

  FUNC_21(&VAR_17.di_res);
  if (FUNC_17(VAR_3, VAR_7, VAR_11, VAR_12, &VAR_17.di_res)) {
   FUNC_9(VAR_3, "%s: could not process 'reg' "
       "property\n", VAR_18.obd_name);
   FUNC_12(&VAR_18);
   continue;
  }
  if (FUNC_15(VAR_3, VAR_7, &VAR_17.di_res, &VAR_16)) {
   FUNC_9(VAR_3, "%s: could not process "
       "'interrupts' property\n", VAR_18.obd_name);
   FUNC_20(&VAR_17.di_res);
   FUNC_12(&VAR_18);
   continue;
  }
  VAR_17.di_intr_rid = VAR_16;

  FUNC_18(VAR_7, 0, &VAR_9, &VAR_10, ((void*)0));
  VAR_5 = FUNC_19(&VAR_17.di_res, VAR_1, 0);

  if (VAR_4->sc_dp_pa == 0)
   VAR_4->sc_dp_pa = VAR_9 - VAR_5->start;

  VAR_10 = VAR_5->end + 1;
  VAR_5 = FUNC_19(&VAR_17.di_res, VAR_1, 1);
  VAR_10 = FUNC_22(VAR_5->end + 1, VAR_10);
  VAR_4->sc_dp_size = FUNC_22(VAR_4->sc_dp_size, VAR_10);

  if (FUNC_10(VAR_3, &VAR_17, VAR_14))
   goto err;
 }

 FUNC_12(&VAR_18);

 return (FUNC_6(VAR_3));
err:
 FUNC_20(&VAR_17.di_res);
 FUNC_12(&VAR_18);
 FUNC_7(VAR_3);
 return (VAR_0);
}
