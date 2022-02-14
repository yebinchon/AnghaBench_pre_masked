
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ suspend; int stacksize_attr; scalar_t__ stackaddr_attr; } ;
struct pthread {char* unwind_stackend; int arg; int (* start_routine ) (int ) ;TYPE_1__ attr; scalar_t__ force_exit; int sigmask; } ;
typedef int sigset_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct pthread*) ;
 int FUNC_2 (struct pthread*) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pthread*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct pthread *VAR_3)
{
 sigset_t VAR_4;

 if (VAR_3->attr.suspend == VAR_2)
  VAR_4 = VAR_3->sigmask;






 FUNC_1(VAR_3);
 FUNC_2(VAR_3);

 if (VAR_3->force_exit)
  FUNC_4(VAR_0);

 if (VAR_3->attr.suspend == VAR_2) {
  FUNC_3(VAR_1, &VAR_4, ((void*)0));
 }







 FUNC_4(VAR_3->start_routine(VAR_3->arg));


 FUNC_0("Thread has resumed after exit");
}
