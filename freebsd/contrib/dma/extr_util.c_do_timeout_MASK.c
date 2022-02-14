
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; scalar_t__ sa_flags; int sa_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,struct sigaction*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;

int
FUNC_5(int VAR_6, int VAR_7)
{
 struct sigaction VAR_8;
 int VAR_9 = 0;

 FUNC_2(&VAR_8.sa_mask);
 VAR_8.sa_flags = 0;

 if (VAR_6) {
  VAR_8.sa_handler = VAR_3;
  if (FUNC_1(VAR_1, &VAR_8, ((void*)0)) != 0)
   FUNC_4(VAR_0, "can not set signal handler: %m");
  if (VAR_7) {
   VAR_9 = FUNC_3(VAR_4, 1);
   if (VAR_9)
    goto disable;

   VAR_5 = 1;
  }

  FUNC_0(VAR_6);
 } else {
disable:
  FUNC_0(0);

  VAR_8.sa_handler = VAR_2;
  if (FUNC_1(VAR_1, &VAR_8, ((void*)0)) != 0)
   FUNC_4(VAR_0, "can not remove signal handler: %m");
  VAR_5 = 0;
 }

 return (VAR_9);
}
