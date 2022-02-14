
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_2(void)
{
 static struct timeval VAR_11, VAR_12;
 int VAR_13;

 if (VAR_6 == 0 || VAR_7)
  return;

 FUNC_0(&VAR_12);
 VAR_13 = (VAR_12.tv_usec - VAR_11.tv_usec) +
  (VAR_12.tv_sec - VAR_11.tv_sec)*1000000;
 if (VAR_13 * VAR_0 < 500000)
  VAR_8++;
 else
  VAR_11 = VAR_12;

 if (VAR_4 > 100) {




  VAR_9++;
  VAR_4 = 0;
  VAR_5 = 0;
 }

 if (VAR_5 <= 2) {
  if (VAR_5 != 0)
   VAR_10++;
  VAR_5 = 1;
  VAR_2 = 1;
  VAR_3 = 1;
  FUNC_1();
  VAR_5 = 2;
 }
 if (VAR_4++ > 0)
  VAR_1++;
}
