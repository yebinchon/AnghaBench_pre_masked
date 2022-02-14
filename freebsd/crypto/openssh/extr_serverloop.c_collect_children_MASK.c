
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh {int dummy; } ;
typedef int sigset_t ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ssh*,scalar_t__,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;
 scalar_t__ FUNC_5 (int,int*,int ) ;

__attribute__((used)) static void
FUNC_6(struct ssh *VAR_7)
{
 pid_t VAR_8;
 sigset_t VAR_9, VAR_10;
 int VAR_11;


 FUNC_3(&VAR_10);
 FUNC_2(&VAR_10, VAR_1);
 FUNC_4(VAR_2, &VAR_10, &VAR_9);
 if (VAR_5) {
  FUNC_0("Received SIGCHLD.");
  while ((VAR_8 = FUNC_5(-1, &VAR_11, VAR_4)) > 0 ||
      (VAR_8 < 0 && VAR_6 == VAR_0))
   if (VAR_8 > 0)
    FUNC_1(VAR_7, VAR_8, VAR_11);
  VAR_5 = 0;
 }
 FUNC_4(VAR_3, &VAR_9, ((void*)0));
}
