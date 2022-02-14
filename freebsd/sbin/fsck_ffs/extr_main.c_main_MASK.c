
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rlimit {int rlim_max; int rlim_cur; } ;
struct TYPE_4__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_3__ {int tv_sec; scalar_t__ tv_usec; } ;
struct itimerval {TYPE_2__ it_value; TYPE_1__ it_interval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char,char*,int ,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ FUNC_5 (int ,struct rlimit*) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int FUNC_6 (char*,int) ;
 scalar_t__ VAR_27 ;
 int FUNC_7 (int ,struct itimerval*,int *) ;
 int FUNC_8 (int ,struct rlimit*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;

int
FUNC_12(int VAR_33, char *VAR_34[])
{
 int VAR_35;
 struct rlimit VAR_36;
 struct itimerval VAR_37;
 int VAR_38;
 int VAR_39 = 0;

 FUNC_10();
 VAR_28 = 1;
 VAR_21 = 0;
 while ((VAR_35 = FUNC_4(VAR_33, VAR_34, "b:Bc:CdEfFm:npRrSyZz")) != -1) {
  switch (VAR_35) {
  case 'b':
   VAR_28 = 0;
   VAR_12 = FUNC_0('b', "number", VAR_24, 10);
   FUNC_6("Alternate super block location: %jd\n", VAR_12);
   break;

  case 'B':
   VAR_14 = 1;
   break;

  case 'c':
   VAR_28 = 0;
   VAR_18 = FUNC_0('c', "conversion level", VAR_24,
       10);
   if (VAR_18 < 3)
    FUNC_2(VAR_0, "cannot do level %d conversion",
        VAR_18);
   break;

  case 'd':
   VAR_19++;
   break;

  case 'E':
   VAR_2++;
   break;

  case 'f':
   VAR_28 = 0;
   break;

  case 'F':
   VAR_13 = 1;
   break;

  case 'm':
   VAR_22 = FUNC_0('m', "mode", VAR_24, 8);
   if (VAR_22 &~ 07777)
    FUNC_2(VAR_0, "bad mode to -m: %o", VAR_22);
   FUNC_6("** lost+found creation mode %o\n", VAR_22);
   break;

  case 'n':
   VAR_23++;
   VAR_31 = 0;
   break;

  case 'p':
   VAR_26++;


  case 'C':
   VAR_17++;
   break;

  case 'R':
   VAR_30 = 1;
   break;
  case 'r':
   VAR_21++;
   break;

  case 'S':
   VAR_29 = 1;
   break;

  case 'y':
   VAR_31++;
   VAR_23 = 0;
   break;

  case 'Z':
   VAR_10++;
   break;

  case 'z':
   VAR_32++;
   break;

  default:
   FUNC_11();
  }
 }
 VAR_33 -= VAR_25;
 VAR_34 += VAR_25;

 if (!VAR_33)
  FUNC_11();

 if (FUNC_9(VAR_7, VAR_9) != VAR_9)
  (void)FUNC_9(VAR_7, VAR_15);
 if (VAR_17)
  (void)FUNC_9(VAR_8, VAR_16);
 FUNC_9(VAR_6, VAR_20);
 if (VAR_14) {
  FUNC_9(VAR_5, VAR_11);
  VAR_37.it_interval.tv_sec = 5;
  VAR_37.it_interval.tv_usec = 0;
  VAR_37.it_value.tv_sec = 5;
  VAR_37.it_value.tv_usec = 0;
  FUNC_7(VAR_3, &VAR_37, ((void*)0));
 }




 if (FUNC_5(VAR_4, &VAR_36) == 0) {
  VAR_36.rlim_cur = VAR_36.rlim_max;
  (void)FUNC_8(VAR_4, &VAR_36);
 }
 while (VAR_33 > 0) {
  if ((VAR_38 = FUNC_1(*VAR_34)) == VAR_1)
   continue;
  VAR_39 |= VAR_38;
  VAR_33--;
  VAR_34++;
 }

 if (VAR_27)
  VAR_39 = 2;
 FUNC_3(VAR_39);
}
