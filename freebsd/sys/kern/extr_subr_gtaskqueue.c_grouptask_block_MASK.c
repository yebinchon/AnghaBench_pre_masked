
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gtaskqueue {int dummy; } ;
struct gtask {int ta_flags; } ;
struct grouptask {struct gtask gt_task; struct gtaskqueue* gt_taskqueue; } ;


 int VAR_0 ;
 int FUNC_0 (struct gtaskqueue*) ;
 int FUNC_1 (struct gtaskqueue*) ;
 int FUNC_2 (struct gtask*) ;
 int FUNC_3 (struct gtaskqueue*,struct gtask*) ;
 int FUNC_4 (char*) ;

void
FUNC_5(struct grouptask *VAR_1)
{
 struct gtaskqueue *VAR_2 = VAR_1->gt_taskqueue;
 struct gtask *VAR_3 = &VAR_1->gt_task;







 FUNC_0(VAR_2);
 VAR_3->ta_flags |= VAR_0;
   FUNC_3(VAR_2, VAR_3);
 FUNC_1(VAR_2);
}
