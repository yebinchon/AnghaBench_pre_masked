
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct ds13rtc_softc {int chiptype; int use_ampm; int dev; scalar_t__ secaddr; int is_binary_counter; scalar_t__ osfaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct ds13rtc_softc*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct ds13rtc_softc*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_8)
{
 struct ds13rtc_softc *VAR_9;
 uint8_t VAR_10, VAR_11;

 VAR_9 = VAR_8;
 switch (VAR_9->chiptype) {
 case 140:
 case 139:
 case 137:
 case 135:
 case 132:
 case 131:
 case 130:
  VAR_10 = VAR_1;
  break;
 case 138:
 case 136:
  VAR_10 = VAR_2;
  break;
 case 134:
 case 133:
  VAR_10 = VAR_3;
  break;
 case 129:
  VAR_10 = VAR_7;
  break;
 case 128:
  VAR_10 = VAR_4;
  break;
 default:
  FUNC_2(VAR_9->dev, "missing init code for this chiptype\n");
  return;
 }
 if (VAR_10 != VAR_7)
  FUNC_4(VAR_9, VAR_10, 0);






 if (FUNC_3(VAR_9, VAR_9->osfaddr, &VAR_11) != 0) {
  FUNC_2(VAR_9->dev, "cannot read RTC clock status bit\n");
  return;
 }
 if (VAR_11 & VAR_6) {
  FUNC_2(VAR_9->dev,
      "WARNING: RTC battery failed; time is invalid\n");
 }






 if ((VAR_9->chiptype != 135) && !VAR_9->is_binary_counter) {
  if (FUNC_3(VAR_9, VAR_9->secaddr + 2, &VAR_11) != 0) {
   FUNC_2(VAR_9->dev,
       "cannot read RTC clock AM/PM bit\n");
   return;
  }
  if (VAR_11 & VAR_5)
   VAR_9->use_ampm = 1;
 }





 FUNC_0(VAR_9->dev, 1000000, VAR_0);
 FUNC_1(VAR_9->dev, 1);
}
