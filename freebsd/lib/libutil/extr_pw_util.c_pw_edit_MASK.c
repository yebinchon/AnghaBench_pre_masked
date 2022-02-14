
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct stat {TYPE_1__ st_mtim; } ;
struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;
typedef int sigset_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 char* VAR_8 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_5 (char const*,char const*,int ,char*) ;
 int FUNC_6 () ;
 char* FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,struct sigaction*,struct sigaction*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int *,int *) ;
 int FUNC_17 (int ,struct stat*) ;
 int VAR_11 ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int,int*,int ) ;

int
FUNC_20(int VAR_12)
{
 struct sigaction VAR_13, VAR_14, VAR_15;
 sigset_t VAR_16, VAR_17;
 struct stat VAR_18, VAR_19;
 const char *VAR_20;
 int VAR_21;

 if ((VAR_20 = FUNC_7("EDITOR")) == ((void*)0))
  VAR_20 = VAR_8;
 if (FUNC_17(VAR_11, &VAR_18) == -1)
  return (-1);
 VAR_13.sa_handler = VAR_5;
 FUNC_15(&VAR_13.sa_mask);
 VAR_13.sa_flags = 0;
 FUNC_13(VAR_2, &VAR_13, &VAR_14);
 FUNC_13(VAR_3, &VAR_13, &VAR_15);
 FUNC_15(&VAR_17);
 FUNC_14(&VAR_17, VAR_1);
 FUNC_16(VAR_4, &VAR_17, &VAR_16);
 switch ((VAR_9 = FUNC_6())) {
 case -1:
  return (-1);
 case 0:
  FUNC_13(VAR_2, &VAR_14, ((void*)0));
  FUNC_13(VAR_3, &VAR_15, ((void*)0));
  FUNC_16(VAR_6, &VAR_16, ((void*)0));
  if (VAR_12) {
   (void)FUNC_11(FUNC_8());
   (void)FUNC_12(FUNC_9());
  }
  VAR_10 = 0;
  FUNC_5(VAR_20, VAR_20, VAR_11, (char *)((void*)0));
  FUNC_4(VAR_10);
 default:

  break;
 }
 for (;;) {
  if (FUNC_19(VAR_9, &VAR_21, VAR_7) == -1) {
   if (VAR_10 == VAR_0)
    continue;
   FUNC_18(VAR_11);
   VAR_9 = -1;
   break;
  } else if (FUNC_2(VAR_21)) {
   FUNC_10(FUNC_3(VAR_21));
  } else if (FUNC_1(VAR_21) && FUNC_0(VAR_21) == 0) {
   VAR_9 = -1;
   break;
  } else {
   FUNC_18(VAR_11);
   VAR_9 = -1;
   break;
  }
 }
 FUNC_13(VAR_2, &VAR_14, ((void*)0));
 FUNC_13(VAR_3, &VAR_15, ((void*)0));
 FUNC_16(VAR_6, &VAR_16, ((void*)0));
 if (FUNC_17(VAR_11, &VAR_19) == -1)
  return (-1);
 return (VAR_18 != VAR_19 ||
     VAR_18 != VAR_19);
}
