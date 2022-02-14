
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct aw_rtc_softc {struct aw_rtc_conf* conf; int res; } ;
struct aw_rtc_conf {int rtc_losc_sta; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct aw_rtc_softc*,int ) ;
 int VAR_7 ;
 int FUNC_2 (struct aw_rtc_softc*,int ,int) ;
 int VAR_8 ;
 int FUNC_3 (struct aw_rtc_softc*,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ,int ,int*,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_10 ;
 struct aw_rtc_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 TYPE_1__* FUNC_8 (int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_11)
{
 struct aw_rtc_softc *VAR_12 = FUNC_6(VAR_11);
 uint32_t VAR_13;
 int VAR_14 = 0;

 VAR_12->res = FUNC_4(VAR_11, VAR_8, &VAR_14, VAR_6);
 if (!VAR_12->res) {
  FUNC_7(VAR_11, "could not allocate resources\n");
  return (VAR_0);
 }

 VAR_12->conf = (struct aw_rtc_conf *)FUNC_8(VAR_11, VAR_10)->ocd_data;
 VAR_13 = FUNC_1(VAR_12, VAR_2);
 VAR_13 |= VAR_1;
 VAR_13 |= VAR_4 | VAR_3 | VAR_5;
 FUNC_2(VAR_12, VAR_2, VAR_13);

 FUNC_0(100);

 if (VAR_9) {
  VAR_13 = FUNC_1(VAR_12, VAR_12->conf->rtc_losc_sta);
  if ((VAR_13 & VAR_5) == 0)
   FUNC_7(VAR_11, "Using internal oscillator\n");
  else
   FUNC_7(VAR_11, "Using external oscillator\n");
 }

 FUNC_3(VAR_12, VAR_11);

 FUNC_5(VAR_11, VAR_7);

 return (0);
}
