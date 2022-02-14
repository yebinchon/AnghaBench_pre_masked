
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_paddr_t ;
typedef int uintmax_t ;
typedef int uint32_t ;
struct ofw_bus_devinfo {int obd_name; } ;
struct dpaa_portals_softc {int sc_dp_size; int sc_dp_pa; int sc_dev; } ;
struct dpaa_portals_devinfo {int di_intr_rid; int di_res; } ;
typedef scalar_t__ phandle_t ;
typedef scalar_t__ ihandle_t ;
typedef int device_t ;
typedef int cpu_num ;
typedef int cpu ;
typedef int cell_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int*,int) ;
 int FUNC_2 (scalar_t__,char*,int,void**) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,void*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int ) ;
 struct dpaa_portals_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 scalar_t__ FUNC_10 (int ,struct dpaa_portals_devinfo*,int) ;
 int FUNC_11 (scalar_t__,int*,int*) ;
 int VAR_1 ;
 int FUNC_12 (struct ofw_bus_devinfo*) ;
 scalar_t__ FUNC_13 (struct ofw_bus_devinfo*,scalar_t__) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ,scalar_t__,int *,int*) ;
 int FUNC_16 (scalar_t__,char*) ;
 scalar_t__ FUNC_17 (int ,scalar_t__,int,int,int *) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;

__attribute__((used)) static int
FUNC_23(device_t VAR_2)
{
 struct dpaa_portals_softc *VAR_3;
 phandle_t VAR_4, VAR_5, VAR_6;
 vm_paddr_t VAR_7, VAR_8;
 vm_size_t VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12;
 ihandle_t VAR_13;
 int VAR_14, VAR_15, VAR_16;
 struct dpaa_portals_devinfo VAR_17;
 struct ofw_bus_devinfo VAR_18 = {};
 cell_t *VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_15 = 0;
 VAR_3 = FUNC_8(VAR_2);
 VAR_3->sc_dev = VAR_2;

 VAR_4 = FUNC_14(VAR_2);


 FUNC_11(FUNC_14(FUNC_7(VAR_2)), &VAR_11, &VAR_12);
 FUNC_11(VAR_4, &VAR_10, &VAR_12);

 VAR_20 = FUNC_2(VAR_4, "ranges",
     sizeof(*VAR_19), (void **)&VAR_19);
 if (VAR_20 < VAR_10 + VAR_11 + VAR_12)
  return (VAR_0);
 VAR_7 = VAR_8 = 0;
 VAR_9 = 0;
 for (VAR_21 = 0; VAR_21 < VAR_10; VAR_21++) {
  VAR_7 <<= 32;
  VAR_7 |= VAR_19[VAR_21];
 }
 for (; VAR_21 < VAR_11 + VAR_10; VAR_21++) {
  VAR_8 <<= 32;
  VAR_8 |= VAR_19[VAR_21];
 }
 VAR_7 += VAR_8;
 for (; VAR_21 < VAR_12 + VAR_11 + VAR_10; VAR_21++) {
  VAR_9 = (uintmax_t)VAR_9 << 32;
  VAR_9 |= VAR_19[VAR_21];
 }
 FUNC_6(VAR_19);
 VAR_3->sc_dp_size = VAR_9;
 VAR_3->sc_dp_pa = VAR_7;


 for (VAR_5 = FUNC_0(VAR_4); VAR_5 != 0; VAR_5 = FUNC_5(VAR_5)) {
  if (VAR_15 >= VAR_1)
   break;
  if (!FUNC_16(VAR_5, "fsl,qman-portal")) {
   continue;
  }

  if (FUNC_3(VAR_5, "cpu-handle", (void *)&VAR_13,
      sizeof(VAR_13)) <= 0) {
   VAR_13 = FUNC_18(VAR_15);
   if (VAR_13 <= 0)
    continue;
  }

  VAR_6 = FUNC_4(VAR_13);
  if (FUNC_1(VAR_6, "reg", &VAR_14, sizeof(VAR_14)) <= 0) {
   FUNC_9(VAR_2, "Could not retrieve CPU number.\n");
   return (VAR_0);
  }

  VAR_15++;

  if (FUNC_13(&VAR_18, VAR_5) != 0) {
   FUNC_9(VAR_2, "could not set up devinfo\n");
   continue;
  }

  FUNC_22(&VAR_17.di_res);
  if (FUNC_17(VAR_2, VAR_5, VAR_10, VAR_12, &VAR_17.di_res)) {
   FUNC_9(VAR_2, "%s: could not process 'reg' "
       "property\n", VAR_18.obd_name);
   FUNC_12(&VAR_18);
   continue;
  }
  if (FUNC_15(VAR_2, VAR_5, &VAR_17.di_res, &VAR_16)) {
   FUNC_9(VAR_2, "%s: could not process "
       "'interrupts' property\n", VAR_18.obd_name);
   FUNC_21(&VAR_17.di_res);
   FUNC_12(&VAR_18);
   continue;
  }
  VAR_17.di_intr_rid = VAR_16;

  if (FUNC_10(VAR_2, &VAR_17, VAR_14))
   goto err;
 }

 FUNC_12(&VAR_18);

 return (FUNC_19(VAR_2));
err:
 FUNC_21(&VAR_17.di_res);
 FUNC_12(&VAR_18);
 FUNC_20(VAR_2);
 return (VAR_0);
}
