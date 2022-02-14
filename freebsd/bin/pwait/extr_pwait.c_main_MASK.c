
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef double time_t ;
typedef int suseconds_t ;
struct kevent {uintptr_t ident; scalar_t__ filter; int data; } ;
struct TYPE_2__ {double tv_sec; int tv_usec; } ;
struct itimerval {TYPE_1__ it_value; } ;
typedef int itv ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct kevent*,long,scalar_t__,int ,int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 (int,struct kevent*,int,struct kevent*,int,int *) ;
 int FUNC_10 () ;
 struct kevent* FUNC_11 (int) ;
 int FUNC_12 (struct itimerval*,int ,int) ;
 char* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (int ,struct itimerval*,int *) ;
 int FUNC_15 (long,int ) ;
 int FUNC_16 (char*,char*,int) ;
 double FUNC_17 (char*,char**) ;
 long FUNC_18 (char*,char**,int) ;
 int FUNC_19 () ;
 int FUNC_20 (char*,long) ;
 int FUNC_21 (char*,char*) ;

int
FUNC_22(int VAR_14, char *VAR_15[])
{
 struct itimerval VAR_16;
 int VAR_17;
 struct kevent *VAR_18;
 int VAR_19, VAR_20;
 int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 long VAR_27;
 char *VAR_28, *VAR_29;
 double VAR_30;

 VAR_19 = VAR_20 = 0;
 FUNC_12(&VAR_16, 0, sizeof(VAR_16));
 while ((VAR_21 = FUNC_8(VAR_14, VAR_15, "t:v")) != -1) {
  switch (VAR_21) {
  case 't':
   VAR_19 = 1;
   VAR_11 = 0;
   VAR_30 = FUNC_17(VAR_12, &VAR_29);
   if (VAR_29 == VAR_12 || VAR_11 == VAR_0 ||
       VAR_30 < 0)
    FUNC_6(VAR_4, "timeout value");
   switch(*VAR_29) {
   case 0:
   case 's':
    break;
   case 'h':
    VAR_30 *= 60;

   case 'm':
    VAR_30 *= 60;
    break;
   default:
    FUNC_6(VAR_4, "timeout unit");
   }
   if (VAR_30 > 100000000L)
    FUNC_6(VAR_4, "timeout value");
   VAR_16.it_value.tv_sec = (time_t)VAR_30;
   VAR_30 -= (time_t)VAR_30;
   VAR_16.it_value.tv_usec =
       (suseconds_t)(VAR_30 * 1000000UL);
   break;
  case 'v':
   VAR_20 = 1;
   break;
  default:
   FUNC_19();

  }
 }

 VAR_14 -= VAR_13;
 VAR_15 += VAR_13;

 if (VAR_14 == 0)
  FUNC_19();

 VAR_17 = FUNC_10();
 if (VAR_17 == -1)
  FUNC_5(1, "kqueue");

 VAR_18 = FUNC_11((VAR_14 + VAR_19) * sizeof(struct kevent));
 if (VAR_18 == ((void*)0))
  FUNC_5(1, "malloc");
 VAR_22 = 0;
 for (VAR_23 = 0; VAR_23 < VAR_14; VAR_23++) {
  VAR_28 = VAR_15[VAR_23];
  if (!FUNC_16(VAR_28, "/proc/", 6))
   VAR_28 += 6;
  VAR_11 = 0;
  VAR_27 = FUNC_18(VAR_28, &VAR_29, 10);
  if (VAR_27 < 0 || *VAR_29 != '\0' || VAR_11 != 0) {
   FUNC_21("%s: bad process id", VAR_28);
   continue;
  }
  VAR_25 = 0;
  for (VAR_24 = 0; VAR_24 < VAR_22; VAR_24++)
   if (VAR_18[VAR_24].ident == (uintptr_t)VAR_27)
    VAR_25 = 1;
  if (!VAR_25) {
   FUNC_0(VAR_18 + VAR_22, VAR_27, VAR_1, VAR_3, VAR_8,
       0, ((void*)0));
   if (FUNC_9(VAR_17, VAR_18 + VAR_22, 1, ((void*)0), 0, ((void*)0)) == -1)
    FUNC_20("%ld", VAR_27);
   else
    VAR_22++;
  }
 }

 if (VAR_19) {




  FUNC_0(VAR_18 + VAR_22, VAR_9, VAR_2, VAR_3, 0, 0, ((void*)0));
  if (FUNC_9(VAR_17, VAR_18 + VAR_22, 1, ((void*)0), 0, ((void*)0)) == -1)
   FUNC_5(VAR_6, "kevent");

  FUNC_15(VAR_9, VAR_10);
  if (FUNC_14(VAR_7, &VAR_16, ((void*)0)) == -1)
   FUNC_5(VAR_6, "setitimer");
 }
 while (VAR_22 > 0) {
  VAR_23 = FUNC_9(VAR_17, ((void*)0), 0, VAR_18, VAR_22 + VAR_19, ((void*)0));
  if (VAR_23 == -1)
   FUNC_5(1, "kevent");
  for (VAR_24 = 0; VAR_24 < VAR_23; VAR_24++) {
   if (VAR_18[VAR_24].filter == VAR_2) {
    if (VAR_20)
     FUNC_13("timeout\n");
    return (124);
   }
   if (VAR_20) {
    VAR_26 = VAR_18[VAR_24].data;
    if (FUNC_2(VAR_26))
     FUNC_13("%ld: exited with status %d.\n",
         (long)VAR_18[VAR_24].ident,
         FUNC_1(VAR_26));
    else if (FUNC_3(VAR_26))
     FUNC_13("%ld: killed by signal %d.\n",
         (long)VAR_18[VAR_24].ident,
         FUNC_4(VAR_26));
    else
     FUNC_13("%ld: terminated.\n",
         (long)VAR_18[VAR_24].ident);
   }
   --VAR_22;
  }
 }

 FUNC_7(VAR_5);
}
