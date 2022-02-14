
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timezone {int dummy; } ;
struct timeval {long tv_usec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int FUNC_0 (struct timeval*,struct timezone*) ;
 int FUNC_1 (char*,...) ;

int
FUNC_2(void)
{
 struct timeval VAR_6;
 struct timezone VAR_7;
 long VAR_8;
 int VAR_9;
 long VAR_10;
 long VAR_11;
 int VAR_12 = VAR_4;

 FUNC_0(&VAR_6, &VAR_7);
 VAR_8 = VAR_6.tv_usec;
 for (VAR_9 = - --VAR_12; VAR_9< VAR_3; VAR_9++) {
  FUNC_0(&VAR_6, &VAR_7);
  VAR_10 = VAR_6.tv_usec - VAR_8;
  if (VAR_10 < 0) VAR_10 += VAR_1;
  if (VAR_10 > VAR_5) if (VAR_12-- <= 0) break;
  VAR_8 = VAR_6.tv_usec;
 }

 FUNC_1("resolution = %ld usec after %d loop%s\n",
        VAR_10, VAR_9, (VAR_9==1) ? "" : "s");

 VAR_10 = (VAR_10 *3)/2;
 if (VAR_9 >= VAR_3) {
  FUNC_1(
   "     (Boy this machine is fast ! %d loops without a step)\n",
   VAR_3);
  VAR_10 = 1;
 }
 if (VAR_9 == 0) {
  FUNC_1(
   "     (The resolution is less than the time to read the clock -- Assume 1us)\n");
  VAR_10 = 1;
 }
 for (VAR_9=0, VAR_11=VAR_2; VAR_11>0; VAR_9--, VAR_11 >>= 1) if (VAR_10 >= VAR_11) return VAR_9;
 FUNC_1("     (Oh dear -- that wasn't expected ! I'll guess !)\n");
 return VAR_0 ;
}
