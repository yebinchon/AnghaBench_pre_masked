
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {scalar_t__ sa_flags; int sa_mask; int sa_handler; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(int VAR_2, char **VAR_3)
{
 struct sigaction VAR_4;

 VAR_4.sa_handler = VAR_1;
 FUNC_2(&VAR_4.sa_mask);
 VAR_4.sa_flags = 0;

 (void) FUNC_1(VAR_0, &VAR_4, ((void*)0));

 for (;;) {
  FUNC_0();
 }

 return (0);
}
