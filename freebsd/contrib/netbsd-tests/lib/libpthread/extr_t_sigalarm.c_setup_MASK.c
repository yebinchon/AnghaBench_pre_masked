
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; void* sa_handler; scalar_t__ sa_flags; void* sa_sigaction; } ;
typedef int sigset_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 void* VAR_3 ;
 int FUNC_1 (int ,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;

__attribute__((used)) static void *
FUNC_5(void *VAR_4)
{
 struct sigaction VAR_5;
 sigset_t VAR_6;




 VAR_5.sa_flags = 0;
 VAR_5.sa_handler = VAR_3;

 FUNC_3(&VAR_6);
 FUNC_4(VAR_2, &VAR_6, ((void*)0));
 FUNC_2(&VAR_5.sa_mask);
 FUNC_1(VAR_1, &VAR_5, ((void*)0));
 FUNC_0(1);

 return ((void*)0);
}
