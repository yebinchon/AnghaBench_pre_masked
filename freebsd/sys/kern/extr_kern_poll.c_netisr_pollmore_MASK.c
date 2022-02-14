
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_2__ {int tv_usec; int tv_sec; } ;


 int VAR_0 ;
 int FUNC_0 (struct timeval*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

void
FUNC_4()
{
 struct timeval VAR_12;
 int VAR_13;

 if (VAR_7 == 0)
  return;

 FUNC_1(&VAR_8);
 if (!VAR_2) {
  FUNC_2(&VAR_8);
  return;
 }
 VAR_2 = 0;
 VAR_4 = 5;
 if (VAR_10 > 0) {
  VAR_1 = 1;
  VAR_2 = 1;
  FUNC_3();
  FUNC_2(&VAR_8);

  return;
 }

 FUNC_0(&VAR_12);
 VAR_13 = (VAR_12.tv_usec - VAR_9.tv_usec) +
  (VAR_12.tv_sec - VAR_9.tv_sec)*1000000;
 VAR_13 = (VAR_13 * VAR_0) / 10000;
 if (VAR_13 > (100 - VAR_11)) {
  if (VAR_5 > 1)
   VAR_5--;
 } else {
  if (VAR_5 < VAR_6)
   VAR_5++;
 }

 VAR_3--;
 if (VAR_3 == 0)
  VAR_4 = 0;
 else {





  VAR_5 -= (VAR_5 / 8);
  if (VAR_5 < 1)
   VAR_5 = 1;
  VAR_1 = 1;
  VAR_2 = 1;
  FUNC_3();
  VAR_4 = 6;
 }
 FUNC_2(&VAR_8);
}
