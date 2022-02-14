
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int ;
struct timeval {int tv_usec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct timeval*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 (int*,int,char*,int) ;

void
FUNC_6(void)
{
 static int VAR_8;


 if (!VAR_8) {
  FUNC_1();
  VAR_8 = 1;
 }

 if (VAR_6 == 0) {

  VAR_4 = 1000000 << VAR_0;
  VAR_5 = VAR_4 / VAR_3;



  return;
 }






 VAR_4 = FUNC_0(&VAR_7);





 if (VAR_4 == 0) {
  static int VAR_9;
  struct timeval VAR_10, VAR_11;
  u_int64_t VAR_12, VAR_13, VAR_14;
  int VAR_15;

  FUNC_2(&VAR_10);
  VAR_12 = FUNC_4();
  VAR_15 = VAR_3;
  (void)FUNC_5(&VAR_9, VAR_2 | VAR_1, "init_machclk", VAR_15);
  FUNC_2(&VAR_11);
  VAR_13 = FUNC_4();
  VAR_14 = (u_int64_t)(VAR_11.tv_sec - VAR_10.tv_sec) * 1000000
      + VAR_11.tv_usec - VAR_10.tv_usec;
  if (VAR_14 != 0)
   VAR_4 = (u_int)((VAR_13 - VAR_12) * 1000000 / VAR_14);
 }

 VAR_5 = VAR_4 / VAR_3;




}
