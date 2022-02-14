
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tregs ;
struct timespec {scalar_t__ tv_nsec; int tv_sec; } ;
struct time_regs {int hour; int year; int month; int day; int min; int sec; } ;
struct isl12xx_softc {int dev; int busdev; int use_ampm; } ;
struct bcd_clocktime {int hour; int year; int mon; int day; int min; int sec; scalar_t__ ispm; } ;
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
 int FUNC_0 (int ,int ,struct bcd_clocktime*) ;
 int FUNC_1 (struct timespec*,struct bcd_clocktime*,int ) ;
 struct isl12xx_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,struct time_regs*,int,int ) ;
 int FUNC_6 (struct isl12xx_softc*,int ,int*) ;
 int FUNC_7 (struct isl12xx_softc*,int ,int) ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static int
FUNC_9(device_t VAR_9, struct timespec *VAR_10)
{
 struct isl12xx_softc *VAR_11 = FUNC_2(VAR_9);
 struct bcd_clocktime VAR_12;
 struct time_regs VAR_13;
 int VAR_14;
 uint8_t VAR_15, VAR_16;





 VAR_10->tv_sec -= FUNC_8();
 VAR_10->tv_nsec = 0;
 FUNC_1(VAR_10, &VAR_12, VAR_11->use_ampm);
 FUNC_0(VAR_11->dev, VAR_0, &VAR_12);


 if (!VAR_11->use_ampm)
  VAR_15 = VAR_2;
 else
  VAR_15 = VAR_12.ispm ? VAR_3 : 0;

 VAR_13.sec = VAR_12.sec;
 VAR_13.min = VAR_12.min;
 VAR_13.hour = VAR_12.hour | VAR_15;
 VAR_13.day = VAR_12.day;
 VAR_13.month = VAR_12.mon;
 VAR_13.year = VAR_12.year % 100;
 if ((VAR_14 = FUNC_4(VAR_11->busdev, VAR_11->dev, VAR_1)) != 0)
  return (VAR_14);
 if ((VAR_14 = FUNC_6(VAR_11, VAR_5, &VAR_16)) == 0) {
  VAR_16 |= VAR_7 | VAR_6;
  if ((VAR_14 = FUNC_7(VAR_11, VAR_5, VAR_16)) == 0) {
   VAR_14 = FUNC_5(VAR_11->dev, VAR_4, &VAR_13,
       sizeof(VAR_13), VAR_8);
   VAR_16 &= ~VAR_7;
   FUNC_7(VAR_11, VAR_5, VAR_16);
  }
 }
 FUNC_3(VAR_11->busdev, VAR_11->dev);

 return (VAR_14);
}
