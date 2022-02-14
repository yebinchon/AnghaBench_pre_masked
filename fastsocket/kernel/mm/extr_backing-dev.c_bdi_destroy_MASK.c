
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bdi_writeback {int b_more_io; int b_io; int b_dirty; } ;
struct TYPE_3__ {int b_more_io; int b_io; int b_dirty; } ;
struct backing_dev_info {int completions; int * bdi_stat; TYPE_1__ wb; } ;
struct TYPE_4__ {struct bdi_writeback wb; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct backing_dev_info*) ;
 int FUNC_1 (struct backing_dev_info*) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct backing_dev_info *VAR_3)
{
 int VAR_4;





 if (FUNC_0(VAR_3)) {
  struct bdi_writeback *VAR_5 = &VAR_1.wb;

  FUNC_5(&VAR_2);
  FUNC_2(&VAR_3->wb.b_dirty, &VAR_5->b_dirty);
  FUNC_2(&VAR_3->wb.b_io, &VAR_5->b_io);
  FUNC_2(&VAR_3->wb.b_more_io, &VAR_5->b_more_io);
  FUNC_6(&VAR_2);
 }

 FUNC_1(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_3(&VAR_3->bdi_stat[VAR_4]);

 FUNC_4(&VAR_3->completions);
}
