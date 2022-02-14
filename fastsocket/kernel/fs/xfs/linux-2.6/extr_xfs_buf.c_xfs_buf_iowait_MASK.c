
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int b_error; int b_iowait; TYPE_1__* b_target; int b_io_remaining; } ;
typedef TYPE_2__ xfs_buf_t ;
struct TYPE_6__ {int bt_bdi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;

int
FUNC_5(
 xfs_buf_t *VAR_1)
{
 FUNC_2(VAR_1, VAR_0);

 if (FUNC_0(&VAR_1->b_io_remaining))
  FUNC_1(VAR_1->b_target->bt_bdi, ((void*)0));
 if (!VAR_1->b_error)
  FUNC_4(&VAR_1->b_iowait);

 FUNC_3(VAR_1, VAR_0);
 return VAR_1->b_error;
}
