
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tregs ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct time_regs {int day; int month; int hour; int min; int sec; int msec; } ;
struct rtc8583_softc {int dev; int busdev; } ;
struct bcd_clocktime {int day; int year; int mon; int hour; int min; int sec; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct bcd_clocktime*) ;
 int FUNC_3 (struct timespec*,struct bcd_clocktime*,int) ;
 struct rtc8583_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct rtc8583_softc*,int ,int ) ;
 int FUNC_8 (int ,int ,struct time_regs*,int,int ) ;
 scalar_t__ FUNC_9 () ;

__attribute__((used)) static int
FUNC_10(device_t VAR_4, struct timespec *VAR_5)
{
 struct rtc8583_softc *VAR_6;
 struct bcd_clocktime VAR_7;
 struct time_regs VAR_8;
 uint8_t VAR_9;
 int VAR_10;

 VAR_6 = FUNC_4(VAR_4);
 VAR_5->tv_sec -= FUNC_9();
 FUNC_3(VAR_5, &VAR_7, 0);
 FUNC_2(VAR_6->dev, VAR_0, &VAR_7);


 VAR_8.msec = FUNC_1(VAR_5->tv_nsec / (10 * 1000 * 1000));
 VAR_8.sec = VAR_7.sec;
 VAR_8.min = VAR_7.min;
 VAR_8.hour = VAR_7.hour;
 VAR_8.day = VAR_7.day | (VAR_7.year & 0x03 << 6);
 VAR_8.month = VAR_7.mon;

 if ((VAR_10 = FUNC_6(VAR_6->busdev, VAR_6->dev, VAR_1)) != 0)
  return (VAR_10);
 VAR_10 = FUNC_8(VAR_6->dev, VAR_2, &VAR_8,
     sizeof(VAR_8), VAR_1);
 VAR_9 = FUNC_0(VAR_7.year & 0xff);

 FUNC_7(VAR_6, VAR_3, VAR_9);
 FUNC_5(VAR_6->busdev, VAR_6->dev);

 return (VAR_10);
}
