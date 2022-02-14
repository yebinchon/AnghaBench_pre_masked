
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int status; int pid; } ;
struct job {scalar_t__ state; int nprocs; struct procstat* ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct job*) ;

__attribute__((used)) static void
FUNC_3(struct job *VAR_4)
{
 struct procstat *VAR_5;
 int VAR_6;

 if (VAR_4->state == VAR_2)
  return;
 FUNC_2(VAR_4);
 VAR_0;
 FUNC_1(-VAR_4->ps[0].pid, VAR_3);
 for (VAR_5 = VAR_4->ps, VAR_6 = VAR_4->nprocs ; --VAR_6 >= 0 ; VAR_5++) {
  if (FUNC_0(VAR_5->status)) {
   VAR_5->status = -1;
   VAR_4->state = 0;
  }
 }
 VAR_1;
}
