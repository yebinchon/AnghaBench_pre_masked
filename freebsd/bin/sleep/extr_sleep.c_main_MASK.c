
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double time_t ;
struct timespec {double tv_sec; int tv_nsec; } ;


 scalar_t__ VAR_0 ;
 double VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct timespec*,struct timespec*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,char*,double*,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int,int) ;

int
FUNC_8(int VAR_6, char *VAR_7[])
{
 struct timespec VAR_8;
 double VAR_9;
 time_t VAR_10;
 char VAR_11[2];

 if (FUNC_1() < 0 || FUNC_0() < 0)
  FUNC_2(1, "capsicum");

 if (VAR_6 != 2)
  FUNC_6();

 if (FUNC_5(VAR_7[1], "%lf%1s", &VAR_9, VAR_11) != 1)
  FUNC_6();
 if (VAR_9 > VAR_1)
  FUNC_6();
 if (VAR_9 <= 0)
  return (0);
 VAR_10 = VAR_8.tv_sec = (time_t)VAR_9;
 VAR_8.tv_nsec = 1e9 * (VAR_9 - VAR_8.tv_sec);

 FUNC_4(VAR_2, VAR_4);






 while (FUNC_3(&VAR_8, &VAR_8) != 0) {
  if (VAR_5) {

   FUNC_7("about %d second(s) left out of the original %d",
       (int)VAR_8.tv_sec, (int)VAR_10);
   VAR_5 = 0;
  } else if (VAR_3 != VAR_0)
   FUNC_2(1, "nanosleep");
 }
 return (0);
}
