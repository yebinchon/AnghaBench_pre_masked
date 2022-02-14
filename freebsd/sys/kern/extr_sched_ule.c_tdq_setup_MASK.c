
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tdq {int tdq_id; int tdq_loadname; int tdq_name; int tdq_lock; int tdq_idle; int tdq_timeshare; int tdq_realtime; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tdq*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,char*,int) ;

__attribute__((used)) static void
FUNC_5(struct tdq *VAR_3, int VAR_4)
{

 if (VAR_2)
  FUNC_2("ULE: setup cpu %d\n", VAR_4);
 FUNC_3(&VAR_3->tdq_realtime);
 FUNC_3(&VAR_3->tdq_timeshare);
 FUNC_3(&VAR_3->tdq_idle);
 VAR_3->tdq_id = VAR_4;
 FUNC_4(VAR_3->tdq_name, sizeof(VAR_3->tdq_name),
     "sched lock %d", (int)FUNC_0(VAR_3));
 FUNC_1(&VAR_3->tdq_lock, VAR_3->tdq_name, "sched lock",
     VAR_1 | VAR_0);




}
