
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long tv_sec; long tv_usec; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct timeval*,struct timeval*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*) ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;

int
FUNC_3(
 double VAR_8
 )
{
 struct timeval VAR_9;
 struct timeval VAR_10;
 double VAR_11;
 double VAR_12;
 long VAR_13;
 int VAR_14 = 0;
 if (0. == VAR_8) {
  if (VAR_4 && VAR_3) {
   FUNC_2(VAR_1, "adj_systime: allow_panic is TRUE!");
   FUNC_0(!VAR_3);
  }
  return VAR_2;
 }







 VAR_12 = VAR_8 + VAR_6;
 if (VAR_12 < 0) {
  VAR_14 = 1;
  VAR_12 = -VAR_12;
 }
 VAR_9.tv_sec = (long)VAR_12;
 VAR_12 -= VAR_9.tv_sec;
 if (VAR_7 > VAR_5)
  VAR_11 = VAR_7;
 else
  VAR_11 = 1e-6;
 VAR_13 = (long)(VAR_12 / VAR_11 + .5);
 VAR_9.tv_usec = (long)(VAR_13 * VAR_11 * 1.e6 + .5);




 if (VAR_9.tv_usec >= 1000000) {
  VAR_9.tv_sec += 1;
  VAR_9.tv_usec -= 1000000;
  VAR_12 -= 1.;
 }

 VAR_6 = VAR_12 - VAR_9.tv_usec * 1.e-6;






 if (VAR_14) {
  VAR_9.tv_sec = -VAR_9.tv_sec;
  VAR_9.tv_usec = -VAR_9.tv_usec;
  VAR_6 = -VAR_6;
 }
 if (VAR_9.tv_sec != 0 || VAR_9.tv_usec != 0) {
  if (FUNC_1(&VAR_9, &VAR_10) < 0) {
   FUNC_2(VAR_1, "adj_systime: %m");
   if (VAR_4 && VAR_3) {
    FUNC_2(VAR_1, "adj_systime: allow_panic is TRUE!");
   }
   return VAR_0;
  }
 }
 if (VAR_4 && VAR_3) {
  FUNC_2(VAR_1, "adj_systime: allow_panic is TRUE!");
 }
 return VAR_2;
}
