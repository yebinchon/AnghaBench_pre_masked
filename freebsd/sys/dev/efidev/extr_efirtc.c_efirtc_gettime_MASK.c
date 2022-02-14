
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct efi_tm {int tm_nsec; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct clocktime {int nsec; int year; int mon; int day; int hour; int min; int sec; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct clocktime*,struct timespec*) ;
 int FUNC_1 (int ,int ,struct clocktime*) ;
 int FUNC_2 (struct efi_tm*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, struct timespec *VAR_2)
{
 struct clocktime VAR_3;
 struct efi_tm VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(&VAR_4);
 if (VAR_5 != 0)
  return (VAR_5);

 VAR_3.sec = VAR_4.tm_sec;
 VAR_3.min = VAR_4.tm_min;
 VAR_3.hour = VAR_4.tm_hour;
 VAR_3.day = VAR_4.tm_mday;
 VAR_3.mon = VAR_4.tm_mon;
 VAR_3.year = VAR_4.tm_year;
 VAR_3.nsec = VAR_4.tm_nsec;

 FUNC_1(VAR_1, VAR_0, &VAR_3);
 return (FUNC_0(&VAR_3, VAR_2));
}
