
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct aw_thermal_softc {TYPE_1__* conf; int dev; } ;
typedef int phandle_t ;
typedef int calib ;
struct TYPE_2__ {int calib0_mask; int calib1_mask; int adc_acquire_time; int thermal_per; int filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aw_thermal_softc*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct aw_thermal_softc*,int ,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,void*,int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct aw_thermal_softc *VAR_15)
{
 phandle_t VAR_16;
 uint32_t VAR_17[2];
 int VAR_18;

 VAR_16 = FUNC_5(VAR_15->dev);
 if (FUNC_3(VAR_16, "ths-calib") > sizeof(VAR_17)) {
  FUNC_2(VAR_15->dev, "ths-calib nvmem cell is too large\n");
  return (VAR_2);
 }
 VAR_18 = FUNC_4(VAR_16, "ths-calib",
     (void *)&VAR_17, FUNC_3(VAR_16, "ths-calib"));

 if (VAR_18 != 0) {
  FUNC_2(VAR_15->dev, "Cannot read THS efuse\n");
  return (VAR_18);
 }

 VAR_17[0] &= VAR_15->conf->calib0_mask;
 VAR_17[1] &= VAR_15->conf->calib1_mask;


 if (VAR_17[0] != 0)
  FUNC_1(VAR_15, VAR_6, VAR_17[0]);
 if (VAR_17[1] != 0)
  FUNC_1(VAR_15, VAR_7, VAR_17[1]);


 FUNC_1(VAR_15, VAR_9, VAR_0);
 FUNC_1(VAR_15, VAR_8, VAR_15->conf->adc_acquire_time);
 FUNC_1(VAR_15, VAR_10, VAR_15->conf->adc_acquire_time << VAR_3);


 FUNC_1(VAR_15, VAR_12, VAR_15->conf->thermal_per << VAR_14);


 FUNC_1(VAR_15, VAR_11, VAR_15->conf->filter);


 FUNC_1(VAR_15, VAR_13, FUNC_0(VAR_15, VAR_13));
 FUNC_1(VAR_15, VAR_12, FUNC_0(VAR_15, VAR_12) | VAR_5 | VAR_1);


 FUNC_1(VAR_15, VAR_10, FUNC_0(VAR_15, VAR_10) | VAR_4);

 return (0);
}
