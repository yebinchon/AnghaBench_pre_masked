
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sigfunc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,char*,char*,int,int) ;
 char* FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_5 (int ,int ) ;

int
FUNC_6(int VAR_13, char *VAR_14[], int VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19;
 sigfunc VAR_20, VAR_21;

 if (VAR_13 > 4 || (VAR_13 < (VAR_15 ? 3 : 2))) {
 usage:
  if (VAR_15)
   FUNC_0(
 "usage: %s (all|get|put),maximum-bytes[,increment-bytes]]\n",
       VAR_14[0]);
  else
   FUNC_0(
 "usage: %s (all|get|put) [maximum-bytes [increment-bytes]]\n",
       VAR_14[0]);
  return -1;
 }
 VAR_16 = VAR_17 = VAR_18 = VAR_19 = 0;




 if (FUNC_3(VAR_14[1], "all") == 0)
  VAR_16 = (1 | 2);
 else if (FUNC_3(VAR_14[1], "get") == 0)
  VAR_16 = 1;
 else if (FUNC_3(VAR_14[1], "put") == 0)
  VAR_16 = 2;
 else
  goto usage;

 if (VAR_13 >= 3) {
  if ((VAR_17 = FUNC_4(VAR_14[2])) < 0)
   goto usage;
 } else
  VAR_19 = 1;

 if (VAR_13 == 4) {
  if ((VAR_18 = FUNC_4(VAR_14[3])) <= 0)
   goto usage;
 } else
  VAR_18 = VAR_0;

 VAR_20 = FUNC_5(VAR_4, VAR_6);
 VAR_21 = FUNC_5(VAR_5, VAR_6);
 if (VAR_16 & 1) {
  if (!VAR_19) {
   VAR_7 = VAR_17;
   VAR_8 = VAR_18;
  }
  if (!VAR_15 || VAR_12)
   FUNC_1(VAR_11,
  "Get transfer rate throttle: %s; maximum: %d; increment %d.\n",
       FUNC_2(VAR_7), VAR_7, VAR_8);
 }
 if (VAR_16 & 2) {
  if (!VAR_19) {
   VAR_9 = VAR_17;
   VAR_10 = VAR_18;
  }
  if (!VAR_15 || VAR_12)
   FUNC_1(VAR_11,
  "Put transfer rate throttle: %s; maximum: %d; increment %d.\n",
       FUNC_2(VAR_9), VAR_9, VAR_10);
 }
 (void)FUNC_5(VAR_4, VAR_20);
 (void)FUNC_5(VAR_5, VAR_21);
 return 0;
}
