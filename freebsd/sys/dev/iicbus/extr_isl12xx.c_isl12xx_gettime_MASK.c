
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tregs ;
struct timespec {int dummy; } ;
struct time_regs {int hour; int year; int month; int day; int min; int sec; } ;
struct isl12xx_softc {int use_ampm; int dev; int busdev; } ;
struct bcd_clocktime {int hour; int ispm; int year; int mon; int day; int min; int sec; scalar_t__ nsec; } ;
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
 int FUNC_0 (struct bcd_clocktime*,struct timespec*,int) ;
 int FUNC_1 (int ,int ,struct bcd_clocktime*) ;
 struct isl12xx_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,struct time_regs*,int,int ) ;
 int FUNC_6 (struct isl12xx_softc*,int ,int*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_11, struct timespec *VAR_12)
{
 struct isl12xx_softc *VAR_13 = FUNC_2(VAR_11);
 struct bcd_clocktime VAR_14;
 struct time_regs VAR_15;
 int VAR_16;
 uint8_t VAR_17, VAR_18;




 if ((VAR_16 = FUNC_4(VAR_13->busdev, VAR_13->dev, VAR_2)) == 0) {
  if ((VAR_16 = FUNC_6(VAR_13, VAR_6, &VAR_18)) == 0) {
   VAR_16 = FUNC_5(VAR_13->dev, VAR_5, &VAR_15,
       sizeof(VAR_15), VAR_10);
  }
  FUNC_3(VAR_13->busdev, VAR_13->dev);
 }
 if (VAR_16 != 0)
  return (VAR_16);


 if (VAR_18 & VAR_7)
  return (VAR_1);


 if (VAR_15.hour & VAR_3) {
  VAR_17 = VAR_9;
 } else {
  VAR_13->use_ampm = 1;
  VAR_17 = VAR_8;
 }

 VAR_14.nsec = 0;
 VAR_14.sec = VAR_15.sec;
 VAR_14.min = VAR_15.min;
 VAR_14.hour = VAR_15.hour & VAR_17;
 VAR_14.day = VAR_15.day;
 VAR_14.mon = VAR_15.month;
 VAR_14.year = VAR_15.year;
 VAR_14.ispm = VAR_15.hour & VAR_4;

 FUNC_1(VAR_13->dev, VAR_0, &VAR_14);
 return (FUNC_0(&VAR_14, VAR_12, VAR_13->use_ampm));
}
