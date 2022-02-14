
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bdi_writeback {int b_more_io; int b_io; int b_dirty; int last_old_flush; struct backing_dev_info* bdi; } ;
struct backing_dev_info {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct bdi_writeback*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct bdi_writeback *VAR_1, struct backing_dev_info *VAR_2)
{
 FUNC_1(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->bdi = VAR_2;
 VAR_1->last_old_flush = VAR_0;
 FUNC_0(&VAR_1->b_dirty);
 FUNC_0(&VAR_1->b_io);
 FUNC_0(&VAR_1->b_more_io);
}
