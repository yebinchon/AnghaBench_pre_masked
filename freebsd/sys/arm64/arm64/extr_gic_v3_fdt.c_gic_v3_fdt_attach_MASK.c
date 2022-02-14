
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nregions; } ;
struct gic_v3_softc {scalar_t__ gic_nchildren; int gic_children; int * gic_pic; TYPE_1__ gic_redists; int gic_bus; int dev; } ;
typedef int redist_regions ;
typedef int pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (intptr_t,int ) ;
 scalar_t__ FUNC_1 (int ,char*,int*,int) ;
 intptr_t FUNC_2 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ,int *,scalar_t__*) ;
 struct gic_v3_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,intptr_t,int ,struct gic_v3_softc*,scalar_t__) ;
 int * FUNC_10 (int ,intptr_t) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_6)
{
 struct gic_v3_softc *VAR_7;
 pcell_t VAR_8;
 intptr_t VAR_9;
 int VAR_10;

 VAR_7 = FUNC_4(VAR_6);
 VAR_7->dev = VAR_6;
 VAR_7->gic_bus = VAR_1;




 if (FUNC_1(FUNC_11(VAR_6), "#redistributor-regions",
     &VAR_8, sizeof(VAR_8)) <= 0)
  VAR_7->gic_redists.nregions = 1;
 else
  VAR_7->gic_redists.nregions = VAR_8;

 VAR_10 = FUNC_6(VAR_6);
 if (VAR_10 != 0)
  goto error;

 VAR_9 = FUNC_2(FUNC_11(VAR_6));
 VAR_7->gic_pic = FUNC_10(VAR_6, VAR_9);
 if (VAR_7->gic_pic == ((void*)0)) {
  FUNC_5(VAR_6, "could not register PIC\n");
  VAR_10 = VAR_0;
  goto error;
 }


 FUNC_0(VAR_9, VAR_6);

 if (FUNC_9(VAR_6, VAR_9, VAR_4, VAR_7,
     VAR_3 - VAR_2 + 1) != 0) {
  VAR_10 = VAR_0;
  goto error;
 }






 if (FUNC_8(VAR_6) != 0) {
  if (VAR_5) {
   FUNC_5(VAR_6,
       "Failed to attach ITS to this GIC\n");
  }
 }

 if (FUNC_3(VAR_6, &VAR_7->gic_children, &VAR_7->gic_nchildren) != 0)
  VAR_7->gic_nchildren = 0;

 return (VAR_10);

error:
 if (VAR_5) {
  FUNC_5(VAR_6,
      "Failed to attach. Error %d\n", VAR_10);
 }

 FUNC_7(VAR_6);

 return (VAR_10);
}
