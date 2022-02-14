
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct time_regs {int hour; int year; int wday; int month; int day; int min; int sec; } ;
struct nxprtc_softc {scalar_t__ chiptype; int flags; int dev; int busdev; int tmcaddr; int use_ampm; } ;
struct bcd_clocktime {int year; int hour; int dow; int mon; int day; scalar_t__ ispm; int min; int sec; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ,struct bcd_clocktime*) ;
 int FUNC_1 (struct timespec*,struct bcd_clocktime*,int ) ;
 struct nxprtc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct timespec*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct nxprtc_softc*) ;
 int FUNC_8 (struct nxprtc_softc*,int ,int*) ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (struct nxprtc_softc*,int ,int) ;
 int FUNC_11 (struct nxprtc_softc*,struct time_regs*) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_9, struct timespec *VAR_10)
{
 struct bcd_clocktime VAR_11;
 struct time_regs VAR_12;
 struct nxprtc_softc *VAR_13;
 int VAR_14;
 uint8_t VAR_15, VAR_16;

 VAR_13 = FUNC_2(VAR_9);
 if ((VAR_14 = FUNC_6(VAR_13->busdev, VAR_13->dev, VAR_1)) != 0)
  return (VAR_14);
 if ((VAR_14 = FUNC_8(VAR_13, VAR_5, &VAR_16)) != 0)
  goto errout;
 VAR_16 |= VAR_4;
 if ((VAR_14 = FUNC_10(VAR_13, VAR_5, VAR_16)) != 0)
  goto errout;


 FUNC_4(VAR_10);
 VAR_10->tv_sec -= FUNC_9();
 VAR_10->tv_nsec = 0;
 FUNC_1(VAR_10, &VAR_11, VAR_13->use_ampm);
 FUNC_0(VAR_13->dev, VAR_0, &VAR_11);


 VAR_15 = 0;
 if (VAR_13->chiptype == VAR_8) {
  if ((VAR_13->flags & VAR_6) != 0) {
   if (VAR_11.year >= 0x2000)
    VAR_15 = VAR_3;
  } else if (VAR_11.year < 0x2000)
    VAR_15 = VAR_3;
 }

 VAR_12.sec = VAR_11.sec;
 VAR_12.min = VAR_11.min;
 VAR_12.hour = VAR_11.hour | (VAR_11.ispm ? VAR_2 : 0);
 VAR_12.day = VAR_11.day;
 VAR_12.month = VAR_11.mon;
 VAR_12.year = (VAR_11.year & 0xff) | VAR_15;
 VAR_12.wday = VAR_11.dow;




 if ((VAR_14 = FUNC_11(VAR_13, &VAR_12)) != 0)
  goto errout;

 if ((VAR_14 = FUNC_10(VAR_13, VAR_13->tmcaddr, VAR_7)) != 0)
  return (VAR_14);

 VAR_16 &= ~VAR_4;
 VAR_14 = FUNC_10(VAR_13, VAR_5, VAR_16);





 FUNC_7(VAR_13);

errout:

 FUNC_5(VAR_13->busdev, VAR_13->dev);

 if (VAR_14 != 0)
  FUNC_3(VAR_9, "cannot write RTC time\n");

 return (VAR_14);
}
