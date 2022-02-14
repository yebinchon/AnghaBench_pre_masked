
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct job {scalar_t__ state; int nprocs; TYPE_1__* ps; scalar_t__ jobctl; } ;
struct TYPE_2__ {int status; int pid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 struct job* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int ,int) ;

int
FUNC_3(const char *VAR_3, int VAR_4)
{
 struct job *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5->state == VAR_1)
  return 0;
 if (VAR_5->jobctl)
  return FUNC_2(-VAR_5->ps[0].pid, VAR_4);
 VAR_7 = -1;
 VAR_2 = VAR_0;
 for (VAR_6 = 0; VAR_6 < VAR_5->nprocs; VAR_6++)
  if (VAR_5->ps[VAR_6].status == -1 || FUNC_0(VAR_5->ps[VAR_6].status)) {
   if (FUNC_2(VAR_5->ps[VAR_6].pid, VAR_4) == 0)
    VAR_7 = 0;
  } else
   VAR_7 = 0;
 return VAR_7;
}
