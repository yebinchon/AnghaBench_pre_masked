
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ena_rss {int tbl_log_size; size_t* host_rss_ind_tbl; TYPE_1__* rss_ind_tbl; } ;
struct ena_com_io_sq {scalar_t__ direction; int idx; } ;
struct ena_com_dev {struct ena_com_io_sq* io_sq_queues; struct ena_rss rss; } ;
struct TYPE_2__ {int cq_idx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_0(struct ena_com_dev *VAR_3)
{
 struct ena_rss *VAR_4 = &VAR_3->rss;
 struct ena_com_io_sq *VAR_5;
 u16 VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < 1 << VAR_4->tbl_log_size; VAR_7++) {
  VAR_6 = VAR_4->host_rss_ind_tbl[VAR_7];
  if (VAR_6 >= VAR_2)
   return VAR_0;

  VAR_5 = &VAR_3->io_sq_queues[VAR_6];

  if (VAR_5->direction != VAR_1)
   return VAR_0;

  VAR_4->rss_ind_tbl[VAR_7].cq_idx = VAR_5->idx;
 }

 return 0;
}
