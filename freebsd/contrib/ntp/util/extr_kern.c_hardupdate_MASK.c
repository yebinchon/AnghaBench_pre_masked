
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long tv_sec; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;
 long VAR_8 ;
 scalar_t__ VAR_9 ;
 long VAR_10 ;
 TYPE_1__ VAR_11 ;

void
FUNC_0(
 long VAR_12
 )
{
 long VAR_13, VAR_14;

 VAR_7 = VAR_12 << VAR_2;
 VAR_14 = VAR_11.tv_sec - VAR_8;
 VAR_8 = VAR_11.tv_sec;
 if (VAR_14 > VAR_0)
     VAR_14 = 0;


 if (VAR_12 < 0)
     VAR_6 -= (-VAR_12 * VAR_14) >>
      (VAR_5 + VAR_5);
 else
     VAR_6 += (VAR_12 * VAR_14) >>
      (VAR_5 + VAR_5);
 VAR_13 = VAR_10 << VAR_1;
 if (VAR_6 > VAR_13)
     VAR_6 = VAR_13;
 else if (VAR_6 < -VAR_13)
     VAR_6 = -VAR_13;
 if (VAR_9 == VAR_3)
     VAR_9 = VAR_4;
}
