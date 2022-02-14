
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct rt_msghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 char* FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_5 ;
 int FUNC_5 (struct rt_msghdr*,int) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_6 ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,char**,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_12(int VAR_8, char *VAR_9[])
{
 int VAR_10, VAR_11, VAR_12;
 char VAR_13[2048], *VAR_14;

 VAR_11 = VAR_3;
 while (VAR_8 > 1) {
  VAR_8--;
  VAR_9++;
  if (**VAR_9 != '-')
   FUNC_11(*VAR_9);
  switch (FUNC_4(*VAR_9 + 1)) {
  case 128:
   if (!--VAR_8)
    FUNC_11(*VAR_9);
   VAR_4 = 0;
   VAR_11 = FUNC_9(*++VAR_9, &VAR_14, 0);
   if (VAR_4 == 0) {
    if (*VAR_14 != '\0' ||
        VAR_11 < 0 ||
        (VAR_5 != -1 && VAR_11 > VAR_5 - 1))
     VAR_4 = VAR_0;
   }
   if (VAR_4)
    FUNC_1(VAR_1, "invalid fib number: %s", *VAR_9);
   break;
  default:
   FUNC_11(*VAR_9);
  }
 }
 VAR_12 = FUNC_8(VAR_11);
 if (VAR_12)
  FUNC_1(VAR_1, "invalid fib number: %d", VAR_11);

 VAR_7 = 1;
 if (VAR_2) {
  FUNC_3();
  FUNC_2(0);
 }
 for (;;) {
  time_t VAR_15;
  VAR_10 = FUNC_7(VAR_6, VAR_13, 2048);
  VAR_15 = FUNC_10(((void*)0));
  (void)FUNC_6("\ngot message of size %d on %s", VAR_10, FUNC_0(&VAR_15));
  FUNC_5((struct rt_msghdr *)(void *)VAR_13, VAR_10);
 }
}
