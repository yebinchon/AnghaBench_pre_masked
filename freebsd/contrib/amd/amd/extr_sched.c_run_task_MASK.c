
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wchan_t ;
typedef int (* task_fun ) (int ) ;
typedef int sigset_t ;
struct TYPE_3__ {int pid; scalar_t__ wchan; } ;
typedef TYPE_1__ pjob ;
typedef int opaque_t ;
typedef int cb_fun ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int*,int*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;

void
FUNC_11(task_fun *VAR_3, opaque_t VAR_4, cb_fun *VAR_5, opaque_t VAR_6)
{
  pjob *VAR_7 = FUNC_3(VAR_5, VAR_6);



  int VAR_8;


  VAR_7->wchan = (wchan_t) VAR_7;






  VAR_8 = FUNC_5(FUNC_7(VAR_0));


  if ((VAR_7->pid = FUNC_1())) {



    FUNC_9(VAR_8);

    return;
  }



  FUNC_2((*VAR_3) (VAR_4));

  FUNC_0();
}
