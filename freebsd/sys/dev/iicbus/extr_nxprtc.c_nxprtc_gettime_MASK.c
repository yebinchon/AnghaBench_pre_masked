
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct timespec {int tv_sec; } ;
struct time_regs {int sec; int hour; int min; int day; int month; int year; } ;
struct nxprtc_softc {scalar_t__ chiptype; scalar_t__ use_ampm; int dev; int flags; int busdev; } ;
struct bcd_clocktime {int nsec; int ispm; int sec; int min; int hour; int day; int mon; int year; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (struct bcd_clocktime*,struct timespec*,scalar_t__) ;
 int FUNC_1 (int ,int ,struct bcd_clocktime*) ;
 struct nxprtc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct nxprtc_softc*,int ,int*) ;
 int FUNC_7 (struct nxprtc_softc*,struct time_regs*,int*) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(device_t VAR_18, struct timespec *VAR_19)
{
 struct bcd_clocktime VAR_20;
 struct time_regs VAR_21;
 struct nxprtc_softc *VAR_22;
 int VAR_23;
 uint8_t VAR_24, VAR_25, VAR_26;

 VAR_22 = FUNC_2(VAR_18);







 if ((VAR_23 = FUNC_5(VAR_22->busdev, VAR_22->dev, VAR_2)) == 0) {
  if ((VAR_23 = FUNC_7(VAR_22, &VAR_21, &VAR_26)) == 0) {
   VAR_23 = FUNC_6(VAR_22, VAR_14, &VAR_24);
  }
  FUNC_4(VAR_22->busdev, VAR_22->dev);
 }
 if (VAR_23 != 0)
  return (VAR_23);

 if ((VAR_21.sec & VAR_6) || (VAR_24 & VAR_5)) {
  FUNC_3(VAR_18, "RTC clock not running\n");
  return (VAR_1);
 }

 if (VAR_22->use_ampm)
  VAR_25 = VAR_7;
 else
  VAR_25 = VAR_8;

 VAR_20.nsec = ((uint64_t)VAR_26 * 1000000000) / VAR_16;
 VAR_20.ispm = (VAR_21.hour & VAR_3) != 0;
 VAR_20.sec = VAR_21.sec & VAR_12;
 VAR_20.min = VAR_21.min & VAR_10;
 VAR_20.hour = VAR_21.hour & VAR_25;
 VAR_20.day = VAR_21.day & VAR_9;
 VAR_20.mon = VAR_21.month & VAR_11;
 VAR_20.year = VAR_21.year & VAR_13;







 if (VAR_22->chiptype == VAR_17) {
  if (VAR_21.month & VAR_4) {
   if (VAR_20.year < 0x70)
    VAR_22->flags |= VAR_15;
  } else if (VAR_20.year >= 0x70)
    VAR_22->flags |= VAR_15;
 }

 FUNC_1(VAR_22->dev, VAR_0, &VAR_20);
 VAR_23 = FUNC_0(&VAR_20, VAR_19, VAR_22->use_ampm);
 VAR_19->tv_sec += FUNC_8();

 return (VAR_23);
}
