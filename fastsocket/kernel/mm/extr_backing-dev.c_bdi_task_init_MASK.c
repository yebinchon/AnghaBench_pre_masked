
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int flags; } ;
struct bdi_writeback {int list; } ;
struct backing_dev_info {int wb_lock; int wb_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct task_struct* VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct backing_dev_info *VAR_3,
     struct bdi_writeback *VAR_4)
{
 struct task_struct *VAR_5 = VAR_2;

 FUNC_3(&VAR_3->wb_lock);
 FUNC_0(&VAR_4->list, &VAR_3->wb_list);
 FUNC_4(&VAR_3->wb_lock);

 VAR_5->flags |= VAR_0 | VAR_1;
 FUNC_1();




 FUNC_2(VAR_5, 0);
}
