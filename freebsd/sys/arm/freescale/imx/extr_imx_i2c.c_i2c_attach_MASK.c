
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wrkstr ;
struct i2c_softc {int rb_pinctl_idx; int rb_sdapin; int rb_sclpin; int dev; int debug; int * iicbus; int * res; scalar_t__ rid; } ;
typedef int phandle_t ;
typedef int ich_func_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int * FUNC_3 (int ,int ,scalar_t__*,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int * FUNC_5 (int ,char*,int) ;
 struct i2c_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int ,char*,int *) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,char*,char*,int*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_7)
{
 char VAR_8[16];
 struct i2c_softc *VAR_9;
 phandle_t VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_6(VAR_7);
 VAR_9->dev = VAR_7;
 VAR_9->rid = 0;

 VAR_9->res = FUNC_3(VAR_7, VAR_5, &VAR_9->rid,
     VAR_4);
 if (VAR_9->res == ((void*)0)) {
  FUNC_9(VAR_7, "could not allocate resources");
  return (VAR_1);
 }

 VAR_9->iicbus = FUNC_5(VAR_7, "iicbus", -1);
 if (VAR_9->iicbus == ((void*)0)) {
  FUNC_9(VAR_7, "could not add iicbus child");
  return (VAR_1);
 }


 FUNC_1(FUNC_7(VAR_9->dev),
     FUNC_2(FUNC_8(VAR_9->dev)),
     VAR_3, "debug", VAR_0, &VAR_9->debug, 0,
     "Enable debug; 1=reads/writes, 2=add starts/stops");






 VAR_10 = FUNC_14(VAR_9->dev);

 VAR_11 = FUNC_10(VAR_7, VAR_10, "scl-gpios",
     &VAR_9->rb_sclpin);
 if (VAR_11 != 0)
  goto no_recovery;
 VAR_11 = FUNC_10(VAR_7, VAR_10, "sda-gpios",
     &VAR_9->rb_sdapin);
 if (VAR_11 != 0)
  goto no_recovery;






 FUNC_12(VAR_9->rb_sclpin, VAR_2);
 FUNC_12(VAR_9->rb_sdapin, VAR_2);
 FUNC_11(VAR_9->rb_sclpin, 1);
 FUNC_11(VAR_9->rb_sdapin, 1);







 VAR_11 = FUNC_13(VAR_10, "pinctrl-names", "gpio", &VAR_12);
 if (VAR_11 == 0) {
  FUNC_15(VAR_8, sizeof(VAR_8), "pinctrl-%d", VAR_12);
  if (FUNC_0(VAR_10, "pinctrl-0") && FUNC_0(VAR_10, VAR_8))
   VAR_9->rb_pinctl_idx = VAR_12;
 }

no_recovery:




 FUNC_4((ich_func_t)VAR_6, VAR_7);
 return (0);
}
