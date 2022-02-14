
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdi_writeback {int * task; int list; struct backing_dev_info* bdi; } ;
struct backing_dev_info {int work_list; int wb_lock; int state; int bdi_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct backing_dev_info*,struct bdi_writeback*) ;
 int FUNC_1 (struct bdi_writeback*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (struct bdi_writeback*,int) ;

__attribute__((used)) static int FUNC_13(void *VAR_3)
{
 struct bdi_writeback *VAR_4 = VAR_3;
 struct backing_dev_info *VAR_5 = VAR_4->bdi;
 int VAR_6;




 FUNC_8(&VAR_2);
 FUNC_3(&VAR_5->bdi_list, &VAR_1);
 FUNC_10(&VAR_2);

 FUNC_0(VAR_5, VAR_4);




 FUNC_2(VAR_0, &VAR_5->state);
 FUNC_6();
 FUNC_11(&VAR_5->state, VAR_0);

 VAR_6 = FUNC_1(VAR_4);




 FUNC_7(&VAR_5->wb_lock);
 FUNC_4(&VAR_4->list);
 FUNC_9(&VAR_5->wb_lock);





 if (!FUNC_5(&VAR_5->work_list))
  FUNC_12(VAR_4, 1);

 VAR_4->task = ((void*)0);
 return VAR_6;
}
