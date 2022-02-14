
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gic_v3_softc {int gic_nchildren; } ;
struct TYPE_5__ {int obd_name; } ;
struct TYPE_4__ {int gic_domain; } ;
struct gic_v3_ofw_devinfo {TYPE_2__ di_dinfo; int di_rl; TYPE_1__ di_gic_dinfo; } ;
typedef int size_cells ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;
typedef int device_t ;
typedef int addr_cells ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,char*,int*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int) ;
 struct gic_v3_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ,struct gic_v3_ofw_devinfo*) ;
 int FUNC_8 (struct gic_v3_ofw_devinfo*,int ) ;
 struct gic_v3_ofw_devinfo* FUNC_9 (int,int ,int) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,scalar_t__,int,int,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_4)
{
 struct gic_v3_ofw_devinfo *VAR_5;
 struct gic_v3_softc *VAR_6;
 device_t VAR_7;
 phandle_t VAR_8, VAR_9;
 pcell_t VAR_10, VAR_11;

 VAR_6 = FUNC_5(VAR_4);
 VAR_8 = FUNC_12(VAR_4);
 if (VAR_8 > 0) {
  VAR_10 = 2;
  FUNC_1(VAR_8, "#address-cells", &VAR_10,
      sizeof(VAR_10));
  VAR_11 = 2;
  FUNC_1(VAR_8, "#size-cells", &VAR_11,
      sizeof(VAR_11));

  for (VAR_9 = FUNC_0(VAR_8); VAR_9 > 0; VAR_9 = FUNC_2(VAR_9)) {

   VAR_5 = FUNC_9(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);


   if (FUNC_1(VAR_9, "numa-node-id",
       &VAR_5->di_gic_dinfo.gic_domain,
       sizeof(VAR_5->di_gic_dinfo.gic_domain)) <= 0) {
    VAR_5->di_gic_dinfo.gic_domain = -1;
   }

   if (FUNC_11(&VAR_5->di_dinfo, VAR_9)) {
    if (VAR_3) {
     FUNC_6(VAR_4,
         "Could not set up devinfo for ITS\n");
    }
    FUNC_8(VAR_5, VAR_0);
    continue;
   }


   FUNC_15(&VAR_5->di_rl);
   FUNC_13(VAR_4, VAR_9, VAR_10, VAR_11,
       &VAR_5->di_rl);




   VAR_7 = FUNC_4(VAR_4, ((void*)0), -1);
   if (!VAR_7) {
    if (VAR_3) {
     FUNC_6(VAR_4,
         "Could not add child: %s\n",
         VAR_5->di_dinfo.obd_name);
    }
    FUNC_14(&VAR_5->di_rl);
    FUNC_10(&VAR_5->di_dinfo);
    FUNC_8(VAR_5, VAR_0);
    continue;
   }

   VAR_6->gic_nchildren++;
   FUNC_7(VAR_7, VAR_5);
  }
 }

 return (FUNC_3(VAR_4));
}
