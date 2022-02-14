
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mv_pcib_ctrl_softc {int addr_cells; int size_cells; } ;
struct TYPE_5__ {int obd_name; } ;
struct mv_pcib_ctrl_devinfo {int di_rl; TYPE_2__ di_dinfo; } ;
typedef scalar_t__ phandle_t ;
typedef int (* get_rl_t ) (int *,scalar_t__,int,int,int *) ;
typedef int * device_t ;
struct TYPE_4__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int * FUNC_3 (int *,int *,int) ;
 struct mv_pcib_ctrl_softc* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,struct mv_pcib_ctrl_devinfo*) ;
 int FUNC_7 (struct mv_pcib_ctrl_devinfo*,int ) ;
 struct mv_pcib_ctrl_devinfo* FUNC_8 (int,int ,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (scalar_t__,struct mv_pcib_ctrl_softc*) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_12 (int *) ;
 TYPE_1__* FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_6)
{
 struct mv_pcib_ctrl_devinfo *VAR_7;
 struct mv_pcib_ctrl_softc *VAR_8;
 device_t VAR_9;
 phandle_t VAR_10, VAR_11;
 get_rl_t VAR_12;

 VAR_10 = FUNC_12(VAR_6);
 VAR_8 = FUNC_4(VAR_6);
 if (VAR_10 > 0) {
  VAR_8->addr_cells = 1;
  if (FUNC_1(VAR_10, "#address-cells", &(VAR_8->addr_cells),
      sizeof(VAR_8->addr_cells)) <= 0)
   return(VAR_0);

  VAR_8->size_cells = 1;
  if (FUNC_1(VAR_10, "#size-cells", &(VAR_8->size_cells),
      sizeof(VAR_8->size_cells)) <= 0)
   return(VAR_0);

  for (VAR_11 = FUNC_0(VAR_10); VAR_11 > 0; VAR_11 = FUNC_2(VAR_11)) {
   VAR_7 = FUNC_8(sizeof(*VAR_7), VAR_1, VAR_2 | VAR_3);
   if (FUNC_11(&VAR_7->di_dinfo, VAR_11)) {
    if (VAR_4) {
     FUNC_5(VAR_6,
         "Could not set up devinfo for PCI\n");
    }
    FUNC_7(VAR_7, VAR_1);
    continue;
   }

   VAR_9 = FUNC_3(VAR_6, ((void*)0), -1);
   if (VAR_9 == ((void*)0)) {
    if (VAR_4) {
     FUNC_5(VAR_6,
         "Could not add child: %s\n",
         VAR_7->di_dinfo.obd_name);
    }
    FUNC_10(&VAR_7->di_dinfo);
    FUNC_7(VAR_7, VAR_1);
    continue;
   }

   FUNC_14(&VAR_7->di_rl);
   VAR_12 = (get_rl_t) FUNC_13(VAR_6,
       VAR_5)->ocd_data;
   if (VAR_12 != ((void*)0))
    VAR_12(VAR_9, VAR_11, VAR_8->addr_cells,
        VAR_8->size_cells, &VAR_7->di_rl);

   FUNC_6(VAR_9, VAR_7);
  }
 }

 if (FUNC_9(VAR_10, VAR_8) < 0) {
  FUNC_5(VAR_6, "could not get ranges\n");
  return (VAR_0);
 }

 return (0);
}
