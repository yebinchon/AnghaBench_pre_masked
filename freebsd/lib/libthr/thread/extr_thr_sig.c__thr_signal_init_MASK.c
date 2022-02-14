
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_handler; int sa_mask; int * sa_sigaction; int sa_flags; } ;
struct usigaction {struct sigaction sigact; } ;
typedef int sigset_t ;
typedef int __siginfohandler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct usigaction* FUNC_3 (int) ;
 int FUNC_4 (int,struct sigaction*,struct sigaction*) ;
 int FUNC_5 (int ,int *,int *) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int VAR_9 ;
 int * VAR_10 ;

void
FUNC_7(int VAR_11)
{
 struct sigaction VAR_12, VAR_13, VAR_14;
 struct usigaction *VAR_15;
 sigset_t VAR_16;
 int VAR_17, VAR_18;

 if (VAR_11) {
  FUNC_5(VAR_5, &VAR_8, &VAR_16);
  for (VAR_17 = 1; VAR_17 <= VAR_7; VAR_17++) {
   if (VAR_17 == VAR_2)
    continue;
   VAR_18 = FUNC_4(VAR_17, ((void*)0), &VAR_14);
   if (VAR_18 == -1 || VAR_14.sa_handler == VAR_3 ||
       VAR_14.sa_handler == VAR_4)
    continue;
   VAR_15 = FUNC_3(VAR_17);
   VAR_15->sigact = VAR_14;
   VAR_13 = VAR_14;
   FUNC_6(&VAR_15->sigact.sa_mask);
   VAR_13.sa_flags &= ~VAR_0;
   VAR_13.sa_flags |= VAR_1;
   VAR_13.sa_sigaction = VAR_10;
   VAR_13.sa_mask = VAR_8;
   (void)FUNC_4(VAR_17, &VAR_13, ((void*)0));
  }
  FUNC_5(VAR_5, &VAR_16, ((void*)0));
 }


 FUNC_2(VAR_12.sa_mask);
 VAR_12.sa_flags = VAR_1;
 VAR_12.sa_sigaction = (__siginfohandler_t *)&VAR_9;
 FUNC_4(VAR_2, &VAR_12, ((void*)0));


 FUNC_1(VAR_12.sa_mask);
 FUNC_0(VAR_12.sa_mask, VAR_2);
 FUNC_5(VAR_6, &VAR_12.sa_mask, ((void*)0));
}
