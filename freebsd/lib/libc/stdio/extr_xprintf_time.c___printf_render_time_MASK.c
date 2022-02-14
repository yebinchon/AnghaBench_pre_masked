
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timeval {scalar_t__ tv_sec; int tv_usec; } ;
struct timespec {scalar_t__ tv_sec; int tv_nsec; } ;
struct printf_info {int prec; scalar_t__ alt; scalar_t__ is_long_double; scalar_t__ is_long; } ;
struct __printf_io {int dummy; } ;
typedef scalar_t__ intmax_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct __printf_io*) ;
 int FUNC_1 (struct __printf_io*,struct printf_info const*,char*,int) ;
 int FUNC_2 (char*,char*,int,...) ;

int
FUNC_3(struct __printf_io *VAR_4, const struct printf_info *VAR_5, const void *const *VAR_6)
{
 char VAR_7[100];
 char *VAR_8;
 struct timeval *VAR_9;
 struct timespec *VAR_10;
 time_t *VAR_11;
 intmax_t VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17;

 if (VAR_5->is_long) {
  VAR_9 = *((struct timeval **)VAR_6[0]);
  VAR_12 = VAR_9->tv_sec;
  VAR_16 = VAR_9->tv_usec * 1000;
  VAR_15 = 6;
 } else if (VAR_5->is_long_double) {
  VAR_10 = *((struct timespec **)VAR_6[0]);
  VAR_12 = VAR_10->tv_sec;
  VAR_16 = VAR_10->tv_nsec;
  VAR_15 = 9;
 } else {
  VAR_11 = *((time_t **)VAR_6[0]);
  VAR_12 = *VAR_11;
  VAR_16 = 0;
  VAR_15 = 0;
 }
 if (VAR_5->is_long || VAR_5->is_long_double) {
  if (VAR_5->prec >= 0)
   VAR_15 = VAR_5->prec;
  if (VAR_15 == 0)
   VAR_16 = 0;
 }

 VAR_8 = VAR_7;
 if (VAR_5->alt) {
  VAR_13 = VAR_12;
  if (VAR_12 >= VAR_3) {
   VAR_8 += FUNC_2(VAR_8, "%jdy", VAR_12 / VAR_3);
   VAR_12 %= VAR_3;
  }
  if (VAR_13 >= VAR_0 && (VAR_12 != 0 || VAR_15 != 0)) {
   VAR_8 += FUNC_2(VAR_8, "%jdd", VAR_12 / VAR_0);
   VAR_12 %= VAR_0;
  }
  if (VAR_13 >= VAR_1 && (VAR_12 != 0 || VAR_15 != 0)) {
   VAR_8 += FUNC_2(VAR_8, "%jdh", VAR_12 / VAR_1);
   VAR_12 %= VAR_1;
  }
  if (VAR_13 >= VAR_2 && (VAR_12 != 0 || VAR_15 != 0)) {
   VAR_8 += FUNC_2(VAR_8, "%jdm", VAR_12 / VAR_2);
   VAR_12 %= VAR_2;
  }
  if (VAR_12 != 0 || VAR_13 == 0 || VAR_15 != 0)
   VAR_8 += FUNC_2(VAR_8, "%jds", VAR_12);
 } else {
  VAR_8 += FUNC_2(VAR_8, "%jd", (intmax_t)VAR_12);
 }
 if (VAR_15 != 0) {
  for (VAR_14 = VAR_15; VAR_14 < 9; VAR_14++)
   VAR_16 /= 10;
  VAR_8 += FUNC_2(VAR_8, ".%.*d", VAR_15, VAR_16);
 }
 VAR_17 = FUNC_1(VAR_4, VAR_5, VAR_7, VAR_8 - VAR_7);
 FUNC_0(VAR_4);
 return (VAR_17);
}
