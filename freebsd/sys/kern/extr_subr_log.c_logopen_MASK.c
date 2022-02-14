
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {TYPE_1__* td_proc; } ;
struct cdev {int dummy; } ;
struct TYPE_4__ {int sc_sigio; int sc_callout; } ;
struct TYPE_3__ {int p_pid; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int ,int ,int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_7, int VAR_8, int VAR_9, struct thread *VAR_10)
{

 if (VAR_3 < 1) {
  FUNC_5("syslog wakeup is less than one.  Adjusting to 1.\n");
  VAR_3 = 1;
 }

 FUNC_3(&VAR_6);
 if (VAR_2) {
  FUNC_4(&VAR_6);
  return (VAR_0);
 }
 VAR_2 = 1;
 FUNC_1(&VAR_4.sc_callout,
     VAR_1 / VAR_3, 0, VAR_5, ((void*)0), FUNC_0(1));
 FUNC_4(&VAR_6);

 FUNC_2(VAR_10->td_proc->p_pid, &VAR_4.sc_sigio);
 return (0);
}
