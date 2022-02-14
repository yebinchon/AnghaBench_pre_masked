
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct backing_dev_info {int max_ratio; int * bdi_stat; int completions; scalar_t__ dirty_exceeded; int wb; int work_list; int wb_list; int bdi_list; int rcu_head; int wb_lock; int max_prop_frac; scalar_t__ min_ratio; int * dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct backing_dev_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct backing_dev_info *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_2->dev = ((void*)0);

 VAR_2->min_ratio = 0;
 VAR_2->max_ratio = 100;
 VAR_2->max_prop_frac = VAR_1;
 FUNC_6(&VAR_2->wb_lock);
 FUNC_1(&VAR_2->rcu_head);
 FUNC_0(&VAR_2->bdi_list);
 FUNC_0(&VAR_2->wb_list);
 FUNC_0(&VAR_2->work_list);

 FUNC_2(&VAR_2->wb, VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_4 = FUNC_4(&VAR_2->bdi_stat[VAR_3], 0);
  if (VAR_4)
   goto err;
 }

 VAR_2->dirty_exceeded = 0;
 VAR_4 = FUNC_5(&VAR_2->completions);

 if (VAR_4) {
err:
  while (VAR_3--)
   FUNC_3(&VAR_2->bdi_stat[VAR_3]);
 }

 return VAR_4;
}
