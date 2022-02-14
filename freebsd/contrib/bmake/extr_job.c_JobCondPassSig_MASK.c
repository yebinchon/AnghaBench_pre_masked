
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ job_state; int pid; } ;
typedef TYPE_1__ Job ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int,...) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static void
FUNC_3(int VAR_5)
{
    Job *VAR_6;

    if (FUNC_0(VAR_0)) {
 (void)FUNC_2(VAR_2, "JobCondPassSig(%d) called.\n", VAR_5);
    }

    for (VAR_6 = VAR_3; VAR_6 < VAR_4; VAR_6++) {
 if (VAR_6->job_state != VAR_1)
     continue;
 if (FUNC_0(VAR_0)) {
     (void)FUNC_2(VAR_2,
      "JobCondPassSig passing signal %d to child %d.\n",
      VAR_5, VAR_6->pid);
 }
 FUNC_1(VAR_6->pid, VAR_5);
    }
}
