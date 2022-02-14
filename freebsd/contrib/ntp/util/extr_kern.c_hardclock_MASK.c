
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_usec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

void
FUNC_0(void)
{
 int VAR_6, VAR_7;

 VAR_7 = VAR_2;
 VAR_4 += VAR_3;
 if (VAR_4 < -VAR_0) {
  VAR_6 = -VAR_4 >> VAR_1;
  VAR_4 += VAR_6 << VAR_1;
  VAR_7 -= VAR_6;
 }
 else if (VAR_4 > VAR_0) {
  VAR_6 = VAR_4 >> VAR_1;
  VAR_4 -= VAR_6 << VAR_1;
  VAR_7 += VAR_6;
 }
 VAR_5.tv_usec += VAR_7;
}
