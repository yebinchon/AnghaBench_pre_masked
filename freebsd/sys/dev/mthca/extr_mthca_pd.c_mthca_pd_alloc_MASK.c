
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mthca_pd {int privileged; int pd_num; int ntmr; int sqp_count; } ;
struct TYPE_2__ {int alloc; } ;
struct mthca_dev {TYPE_1__ pd_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct mthca_dev*,int,int,int *) ;

int FUNC_4(struct mthca_dev *VAR_3, int VAR_4, struct mthca_pd *VAR_5)
{
 int VAR_6 = 0;

 VAR_5->privileged = VAR_4;

 FUNC_0(&VAR_5->sqp_count, 0);
 VAR_5->pd_num = FUNC_1(&VAR_3->pd_table.alloc);
 if (VAR_5->pd_num == -1)
  return -VAR_0;

 if (VAR_4) {
  VAR_6 = FUNC_3(VAR_3, VAR_5->pd_num,
          VAR_1 |
          VAR_2,
          &VAR_5->ntmr);
  if (VAR_6)
   FUNC_2(&VAR_3->pd_table.alloc, VAR_5->pd_num);
 }

 return VAR_6;
}
