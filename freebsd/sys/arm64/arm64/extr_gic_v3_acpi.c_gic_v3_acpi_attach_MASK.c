
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gic_v3_softc {scalar_t__ gic_nchildren; int gic_children; int * gic_pic; int gic_bus; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ,int *,scalar_t__*) ;
 struct gic_v3_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,struct gic_v3_softc*,scalar_t__) ;
 int * FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_7)
{
 struct gic_v3_softc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_1(VAR_7);
 VAR_8->dev = VAR_7;
 VAR_8->gic_bus = VAR_2;

 VAR_9 = FUNC_4(VAR_7);
 if (VAR_9 != 0)
  goto error;

 VAR_9 = FUNC_5(VAR_7);
 if (VAR_9 != 0)
  goto error;

 VAR_8->gic_pic = FUNC_8(VAR_7, VAR_0);
 if (VAR_8->gic_pic == ((void*)0)) {
  FUNC_2(VAR_7, "could not register PIC\n");
  VAR_9 = VAR_1;
  goto error;
 }

 if (FUNC_7(VAR_7, VAR_0, VAR_5, VAR_8,
     VAR_4 - VAR_3 + 1) != 0) {
  VAR_9 = VAR_1;
  goto error;
 }






 FUNC_3(VAR_7);

 if (FUNC_0(VAR_7, &VAR_8->gic_children, &VAR_8->gic_nchildren) !=0)
  VAR_8->gic_nchildren = 0;

 return (0);

error:
 if (VAR_6) {
  FUNC_2(VAR_7,
      "Failed to attach. Error %d\n", VAR_9);
 }

 FUNC_6(VAR_7);

 return (VAR_9);
}
