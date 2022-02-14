
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ofw_cpulist_softc {int sc_addr_cells; } ;
struct ofw_bus_devinfo {int obd_name; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int *,int) ;
 struct ofw_cpulist_softc* FUNC_5 (int *) ;
 int FUNC_6 (int *,char*,int ) ;
 int FUNC_7 (int *,struct ofw_bus_devinfo*) ;
 int FUNC_8 (struct ofw_bus_devinfo*,int ) ;
 struct ofw_bus_devinfo* FUNC_9 (int,int ,int) ;
 int FUNC_10 (struct ofw_bus_devinfo*) ;
 scalar_t__ FUNC_11 (struct ofw_bus_devinfo*,scalar_t__) ;
 scalar_t__ FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_3)
{
 struct ofw_cpulist_softc *VAR_4;
 phandle_t VAR_5, VAR_6;
 device_t VAR_7;
 struct ofw_bus_devinfo *VAR_8;

 VAR_4 = FUNC_5(VAR_3);
 VAR_5 = FUNC_12(VAR_3);

 VAR_4->sc_addr_cells = 1;
 FUNC_1(VAR_5, "#address-cells", &VAR_4->sc_addr_cells,
     sizeof(VAR_4->sc_addr_cells));

 for (VAR_6 = FUNC_0(VAR_5); VAR_6 != 0; VAR_6 = FUNC_2(VAR_6)) {
  VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_0, VAR_1 | VAR_2);

                if (FUNC_11(VAR_8, VAR_6) != 0) {
                        FUNC_8(VAR_8, VAR_0);
                        continue;
                }
                VAR_7 = FUNC_4(VAR_3, ((void*)0), -1);
                if (VAR_7 == ((void*)0)) {
                        FUNC_6(VAR_3, "<%s>: device_add_child failed\n",
                            VAR_8->obd_name);
                        FUNC_10(VAR_8);
                        FUNC_8(VAR_8, VAR_0);
                        continue;
                }
  FUNC_7(VAR_7, VAR_8);
 }

 return (FUNC_3(VAR_3));
}
