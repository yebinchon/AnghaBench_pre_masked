
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tregs ;
struct timespec {int dummy; } ;
struct time_regs {int day; int hour; int month; int min; int sec; int msec; } ;
struct rtc8583_softc {int dev; int busdev; } ;
struct bcd_clocktime {int nsec; int hour; int day; int mon; int year; int min; int sec; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bcd_clocktime*,struct timespec*,int) ;
 int FUNC_3 (int ,int ,struct bcd_clocktime*) ;
 struct rtc8583_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,struct time_regs*,int,int ) ;
 int FUNC_8 (struct rtc8583_softc*,int ,int*) ;
 int FUNC_9 (struct rtc8583_softc*,int ,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_5, struct timespec *VAR_6)
{
 struct rtc8583_softc *VAR_7;
 struct bcd_clocktime VAR_8;
 struct time_regs VAR_9;
 uint8_t VAR_10, VAR_11, VAR_12;
 int VAR_13;

 VAR_7 = FUNC_4(VAR_5);


 if ((VAR_13 = FUNC_7(VAR_7->dev, VAR_3, &VAR_9, sizeof(VAR_9),
     VAR_2)) != 0)
  return (VAR_13);

 VAR_10 = VAR_9.day >> 6;

 FUNC_8(VAR_7, VAR_4, &VAR_12);







 VAR_11 = VAR_12 & 0x03;
 if (VAR_11 != VAR_10) {

  VAR_12 += VAR_10 - VAR_11;


  if (VAR_11 > VAR_10)
   VAR_12 += 4;

  if ((VAR_13 = FUNC_6(VAR_7->busdev, VAR_7->dev, VAR_2)) != 0)
   return (VAR_13);
  FUNC_9(VAR_7, VAR_4, VAR_12);
  FUNC_5(VAR_7->busdev, VAR_7->dev);
 }

 if (!FUNC_10(VAR_9.msec))
  return (VAR_1);


 VAR_8.nsec = FUNC_0(VAR_9.msec) * 10 * 1000 * 1000;
 VAR_8.sec = VAR_9.sec;
 VAR_8.min = VAR_9.min;
 VAR_8.hour = VAR_9.hour & 0x3f;
 VAR_8.day = VAR_9.day & 0x3f;
 VAR_8.mon = VAR_9.month & 0x1f;
 VAR_8.year = FUNC_1(VAR_12 % 100);

 FUNC_3(VAR_7->dev, VAR_0, &VAR_8);
 return (FUNC_2(&VAR_8, VAR_6, 0));
}
