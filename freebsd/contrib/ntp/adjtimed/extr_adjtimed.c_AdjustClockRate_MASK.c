
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {long tv_sec; long tv_usec; } ;
struct TYPE_4__ {long tv_sec; long tv_usec; } ;
struct TYPE_3__ {long tv_sec; long tv_usec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 long VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,long,...) ;
 int FUNC_4 (int ,struct itimerval*,struct itimerval*) ;
 long VAR_6 ;
 int VAR_7 ;
 long VAR_8 ;
 int VAR_9 ;

int
FUNC_5(
 register struct timeval *VAR_10,
 register struct timeval *VAR_11
 )
{
 register long VAR_12, VAR_13, VAR_14;
 struct itimerval VAR_15, VAR_16;

 VAR_13 = (VAR_10->tv_sec * VAR_3) + VAR_10->tv_usec;

 if (VAR_9)
     FUNC_3("adjtimed: new correction %.6fs\n", (double)VAR_13 / (double)VAR_3);
 if (VAR_7)
     FUNC_1(VAR_2, "new correction %.6fs", (double)VAR_13 / (double)VAR_3);
 if (VAR_9 > 2) FUNC_3("adjtimed: leftover %ldus\n", VAR_14);
 if (VAR_7 > 2) FUNC_1(VAR_2, "leftover %ldus", VAR_14);
 VAR_12 = VAR_13;




 if (VAR_13 > 0) {
  VAR_12 = VAR_6;
 } else {
  VAR_12 = -VAR_6;
  VAR_13 = -VAR_13;
 }
 VAR_15.it_value.tv_sec = VAR_13 / VAR_6;
 VAR_15.it_value.tv_usec = (VAR_13 % VAR_6) * (VAR_3 / VAR_6);







 if (VAR_9 > 1)
     FUNC_3("adjtimed: will be complete in %lds %ldus\n",
     VAR_15.it_value.tv_sec, VAR_15.it_value.tv_usec);
 if (VAR_7 > 1)
     FUNC_1(VAR_2, "will be complete in %lds %ldus",
      VAR_15.it_value.tv_sec, VAR_15.it_value.tv_usec);



 if (VAR_13) {
  if (FUNC_0((VAR_12 / VAR_8) + VAR_4) == -1) {
   FUNC_1(VAR_1, "set clock rate: %m");
   FUNC_2("adjtimed: set clock rate");
  }
 }




 VAR_15.it_interval.tv_sec = VAR_15.it_interval.tv_usec = 0L;
 FUNC_4(VAR_0, &VAR_15, &VAR_16);



 if (VAR_11) {
  VAR_13 = ((VAR_16.it_value.tv_sec * VAR_3) + VAR_16.it_value.tv_usec) *
   VAR_5;
  VAR_11->tv_sec = VAR_13 / VAR_3;
  VAR_11->tv_usec = VAR_13 - (VAR_11->tv_sec * VAR_3);
 }

 VAR_5 = (double)VAR_12 / (double)VAR_3;
 return(0);
}
