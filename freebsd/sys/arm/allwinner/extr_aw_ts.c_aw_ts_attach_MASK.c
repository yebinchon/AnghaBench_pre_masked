
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aw_ts_softc {int temp_offset; int temp_step; int temp_data; int * res; int intrhand; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {int ocd_data; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,char*,int,int *,int ,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct aw_ts_softc*,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int ,int *) ;
 scalar_t__ FUNC_10 (int ,int ,int,int *,int ,struct aw_ts_softc*,int *) ;
 int VAR_15 ;
 struct aw_ts_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*) ;
 TYPE_1__* FUNC_15 (int ,int ) ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_16(device_t VAR_17)
{
 struct aw_ts_softc *VAR_18;

 VAR_18 = FUNC_11(VAR_17);
 VAR_18->dev = VAR_17;

 if (FUNC_8(VAR_17, VAR_14, VAR_18->res) != 0) {
  FUNC_14(VAR_17, "could not allocate memory resource\n");
  return (VAR_2);
 }

 if (FUNC_10(VAR_17, VAR_18->res[1],
     VAR_4 | VAR_3, ((void*)0), VAR_13, VAR_18,
     &VAR_18->intrhand)) {
  FUNC_9(VAR_17, VAR_14, VAR_18->res);
  FUNC_14(VAR_17, "cannot setup interrupt handler\n");
  return (VAR_2);
 }





 switch (FUNC_15(VAR_17, VAR_15)->ocd_data) {
 case 129:
  VAR_18->temp_offset = 257000;
  VAR_18->temp_step = 133;
  break;
 case 128:
  VAR_18->temp_offset = 144700;
  VAR_18->temp_step = 100;
  break;
 }


 FUNC_7(VAR_18, VAR_6, FUNC_3(0) |
   FUNC_2(2) |
   FUNC_4(7) |
   FUNC_5(63));


 FUNC_7(VAR_18, VAR_7, VAR_8);


 FUNC_7(VAR_18, VAR_11, VAR_12 | FUNC_6(1953));


 FUNC_7(VAR_18, VAR_9, VAR_10);


 FUNC_0(FUNC_12(VAR_17),
     FUNC_1(FUNC_13(VAR_17)),
     VAR_5, "temperature", VAR_1 | VAR_0,
     &VAR_18->temp_data, 0, VAR_16,
     "IK3", "CPU Temperature");

 return (0);
}
