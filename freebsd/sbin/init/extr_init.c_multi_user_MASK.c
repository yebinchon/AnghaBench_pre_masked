
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int time_t ;
typedef int state_func_t ;
struct TYPE_6__ {int se_process; int se_started; struct TYPE_6__* se_next; } ;
typedef TYPE_1__ session_t ;
typedef int pid_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int*,int ) ;

__attribute__((used)) static state_func_t
FUNC_8(void)
{
 pid_t VAR_3;
 session_t *VAR_4;

 VAR_1 = 0;







 if (FUNC_2() == 0)
  FUNC_4(1);

 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->se_next) {
  if (VAR_4->se_process)
   continue;
  if (FUNC_3(VAR_4))
   continue;
  if ((VAR_3 = FUNC_5(VAR_4)) == -1) {

   VAR_1 = VAR_0;
   break;
  }
  VAR_4->se_process = VAR_3;
  VAR_4->se_started = FUNC_6((time_t *) 0);
  FUNC_0(VAR_4);
 }

 while (!VAR_1)
  if ((VAR_3 = FUNC_7(-1, (int *) 0, 0)) != -1)
   FUNC_1(VAR_3);

 return (state_func_t) VAR_1;
}
