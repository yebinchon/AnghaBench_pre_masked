
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct TYPE_2__ {int tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*,int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_1 (int) ;

void
FUNC_2()
{
 struct timeval VAR_3;
 int VAR_4;

 if (VAR_1 != 0)
  return;


 FUNC_0(&VAR_3, ((void*)0));
 VAR_4 = (VAR_3.tv_sec - VAR_2.tv_sec) * 1000000 +
     (VAR_3.tv_usec - VAR_2.tv_usec);
 if (VAR_4 < 64)
  VAR_4 = 64;
 if (VAR_4 > 2500000)
  VAR_4 = 2500000;
 VAR_0 = (VAR_0 * 63 + VAR_4) >> 6;

 if (VAR_0 > 64)
  FUNC_1(VAR_0 * 8);
}
