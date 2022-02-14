
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_1__ VAR_14 ;

void
FUNC_0(void)
{
 int VAR_15;

 VAR_10 += VAR_13;
 if (VAR_11 < 0) {
  VAR_15 = -VAR_11 >>
   (VAR_2 + VAR_8);
  VAR_11 += VAR_15;
  VAR_7 = -(VAR_15 <<
        (VAR_3 - VAR_0 - VAR_4));
 } else {
  VAR_15 = VAR_11 >>
   (VAR_2 + VAR_8);
  VAR_11 -= VAR_15;
  VAR_7 = VAR_15 <<
   (VAR_3 - VAR_0 - VAR_4);
 }
 if (VAR_9 < 0)
     VAR_7 -= -VAR_9 >> (VAR_1 + VAR_0 - VAR_3);
 else
     VAR_7 += VAR_9 >> (VAR_1 + VAR_0 - VAR_3);
 VAR_7 += VAR_6 << (VAR_3 - VAR_0);


 if (VAR_14.tv_sec % 86400 == 0) {
  switch (VAR_12) {

      case 129:
   VAR_14.tv_sec--;
   VAR_12 = 128;
   break;

      case 130:
   VAR_14.tv_sec++;
   VAR_12 = VAR_5;
   break;

      case 128:
   VAR_12 = VAR_5;
   break;
  }
 }
}
