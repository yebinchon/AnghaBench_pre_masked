
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct timespec {int dummy; } ;
struct bcd_clocktime {int sec; int min; int hour; int day; int dow; int mon; int year; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int ,int ,struct bcd_clocktime*) ;
 int FUNC_1 (struct timespec*,struct bcd_clocktime*,int) ;
 int FUNC_2 (int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_10, struct timespec *VAR_11)
{
 uint8_t VAR_12[VAR_6];
 struct bcd_clocktime VAR_13;

 FUNC_1(VAR_11, &VAR_13, 0);
 FUNC_0(VAR_10, VAR_0, &VAR_13);





 VAR_12[VAR_7] = VAR_13.sec;
 VAR_12[VAR_4] = VAR_13.min;
 VAR_12[VAR_3] = VAR_13.hour;
 VAR_12[VAR_2] = VAR_13.day;
 VAR_12[VAR_8] = VAR_13.dow;
 VAR_12[VAR_5] = VAR_13.mon;
 VAR_12[VAR_9] = VAR_13.year & 0xff;

 return (FUNC_2(VAR_10, VAR_1, VAR_12, VAR_6));
}
