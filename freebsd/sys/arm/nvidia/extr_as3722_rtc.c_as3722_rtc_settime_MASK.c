
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int dummy; } ;
struct clocktime {scalar_t__ year; scalar_t__ sec; scalar_t__ min; scalar_t__ hour; scalar_t__ day; scalar_t__ mon; } ;
struct as3722_softc {int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct as3722_softc*,int ,int *,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct timespec*,struct clocktime*) ;
 struct as3722_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;

int
FUNC_5(device_t VAR_3, struct timespec *VAR_4)
{
 struct as3722_softc *VAR_5;
 struct clocktime VAR_6;
 uint8_t VAR_7[6];
 int VAR_8;

 VAR_5 = FUNC_3(VAR_3);
 FUNC_2(VAR_4, &VAR_6);

 if (VAR_6.year < VAR_1)
  return (VAR_2);

 VAR_7[0] = FUNC_1(VAR_6.sec);
 VAR_7[1] = FUNC_1(VAR_6.min);
 VAR_7[2] = FUNC_1(VAR_6.hour);
 VAR_7[3] = FUNC_1(VAR_6.day);
 VAR_7[4] = FUNC_1(VAR_6.mon);
 VAR_7[5] = FUNC_1(VAR_6.year - VAR_1);

 VAR_8 = FUNC_0(VAR_5, VAR_0, VAR_7, 6);
 if (VAR_8 != 0) {
  FUNC_4(VAR_5->dev, "Failed to write RTC data\n");
  return (VAR_8);
 }
 return (0);
}
