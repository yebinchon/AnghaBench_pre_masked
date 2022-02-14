
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int work_func_t ;
struct TYPE_4__ {int mtx; int callout; } ;
struct TYPE_3__ {int work_task; int func; } ;
struct delayed_work {TYPE_2__ timer; TYPE_1__ work; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,struct delayed_work*) ;
 int FUNC_1 (int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct delayed_work*,int ,int) ;
 int FUNC_3 (int *,int ,int *,int) ;
 int FUNC_4 (char*) ;

void
FUNC_5(struct delayed_work *VAR_3, work_func_t VAR_4)
{
 FUNC_2(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->work.func = VAR_4;
 FUNC_0(&VAR_3->work.work_task, 0, VAR_2, VAR_3);
 FUNC_3(&VAR_3->timer.mtx, FUNC_4("lkpi-dwork"), ((void*)0),
     VAR_0 | VAR_1);
 FUNC_1(&VAR_3->timer.callout, &VAR_3->timer.mtx, 0);
}
