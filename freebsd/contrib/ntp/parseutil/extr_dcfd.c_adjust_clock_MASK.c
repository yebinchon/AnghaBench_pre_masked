
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct timeval {int tv_sec; int tv_usec; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,long,long,long) ;
 long VAR_1 ;
 long FUNC_1 (long,long) ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 void* FUNC_2 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct timeval*) ;
 int FUNC_4 (struct timeval*) ;
 int VAR_9 ;
 int FUNC_5 (char const*,long,int ) ;

__attribute__((used)) static void
FUNC_6(
      struct timeval *VAR_10,
      const char *VAR_11,
      time_t VAR_12
      )
{
 struct timeval VAR_13;
 register long VAR_14;
 int VAR_15;

 if (VAR_8)
     return;

 if (VAR_9)
 {
  VAR_9 = 0;
  return;
 }

 VAR_13 = *VAR_10;
 VAR_13.tv_sec = FUNC_2(VAR_13.tv_sec);
 VAR_13.tv_usec = FUNC_2(VAR_13.tv_usec);
 if (VAR_13.tv_sec ||
     (!VAR_13.tv_sec && VAR_13.tv_usec > VAR_7))
 {



  FUNC_4(VAR_10);
  VAR_6 = 0;
  VAR_9 = 1;
  return;
 }

 VAR_14 = VAR_10->tv_sec * 1000000 + VAR_10->tv_usec;

 VAR_6 = FUNC_1(VAR_14, VAR_2);

 VAR_15 = 0;
 while (VAR_5 > (1 << VAR_15))
     VAR_15++;
 VAR_5 = 0;
 if (VAR_15 > VAR_0)
     VAR_15 = VAR_0;

 VAR_4 += FUNC_1(VAR_14 << VAR_3, VAR_2+VAR_2+VAR_0-VAR_15);

 if (VAR_4 > VAR_1)
     VAR_4 = VAR_1;
 else
     if (VAR_4 < -VAR_1)
  VAR_4 = -VAR_1;

 FUNC_5(VAR_11, VAR_14, VAR_12);
 FUNC_0("clock_adjust: %s, clock_adjust %ld, drift_comp %ld(%ld) ",
  FUNC_3(VAR_10),(long int) FUNC_1(VAR_6, VAR_3),
  (long int)FUNC_1(VAR_4, VAR_3), (long int)VAR_4);
}
