
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sigset_t ;
struct TYPE_4__ {scalar_t__ job_state; int pid; int * node; } ;
typedef TYPE_1__ Job ;
typedef int GNode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_6 (char*,int ) ;
 int FUNC_7 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,int,int) ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_10(int VAR_12, int VAR_13)
{
    Job *VAR_14;
    GNode *VAR_15;
    sigset_t VAR_16;
    GNode *VAR_17;

    VAR_6 = VAR_0;

    FUNC_3(&VAR_16);

    for (VAR_14 = VAR_9; VAR_14 < VAR_10; VAR_14++) {
 if (VAR_14->job_state != VAR_3)
     continue;

 VAR_17 = VAR_14->node;

 FUNC_1(VAR_17);
 if (VAR_14->pid) {
     if (FUNC_0(VAR_2)) {
  (void)FUNC_9(VAR_7,
      "JobInterrupt passing signal %d to child %d.\n",
      VAR_13, VAR_14->pid);
     }
     FUNC_5(VAR_14->pid, VAR_13);
 }
    }

    FUNC_4(&VAR_16);

    if (VAR_12 && !VAR_11) {
 VAR_15 = FUNC_6(".INTERRUPT", VAR_5);
 if (VAR_15 != ((void*)0)) {
     VAR_8 = VAR_1;
     FUNC_2(VAR_15);
 }
    }
    FUNC_7(VAR_4, 0);
    FUNC_8(VAR_13);
}
