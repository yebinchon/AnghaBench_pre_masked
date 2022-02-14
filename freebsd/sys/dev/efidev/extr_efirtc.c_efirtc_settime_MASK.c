
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tm ;
struct timespec {int tv_sec; } ;
struct efi_tm {int tm_nsec; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct clocktime {int nsec; int year; int mon; int day; int hour; int min; int sec; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct efi_tm*,int) ;
 int FUNC_1 (int ,int ,struct clocktime*) ;
 int FUNC_2 (struct timespec*,struct clocktime*) ;
 int FUNC_3 (struct efi_tm*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct timespec*,int *,struct timespec*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, struct timespec *VAR_4)
{
 struct clocktime VAR_5;
 struct efi_tm VAR_6;






 VAR_4->tv_sec -= FUNC_5();
 if (!VAR_2)
  FUNC_4(VAR_4, &VAR_1, VAR_4);

 FUNC_2(VAR_4, &VAR_5);
 FUNC_1(VAR_3, VAR_0, &VAR_5);

 FUNC_0(&VAR_6, sizeof(VAR_6));
 VAR_6.tm_sec = VAR_5.sec;
 VAR_6.tm_min = VAR_5.min;
 VAR_6.tm_hour = VAR_5.hour;
 VAR_6.tm_mday = VAR_5.day;
 VAR_6.tm_mon = VAR_5.mon;
 VAR_6.tm_year = VAR_5.year;
 VAR_6.tm_nsec = VAR_5.nsec;

 return (FUNC_3(&VAR_6));
}
