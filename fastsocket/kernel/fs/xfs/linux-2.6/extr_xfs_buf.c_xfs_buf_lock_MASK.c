
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int b_flags; int b_sema; TYPE_1__* b_target; int b_io_remaining; int b_pin_count; } ;
typedef TYPE_2__ xfs_buf_t ;
struct TYPE_7__ {int bt_bdi; int bt_mount; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (int ,int ) ;

void
FUNC_7(
 xfs_buf_t *VAR_2)
{
 FUNC_4(VAR_2, VAR_1);

 if (FUNC_1(&VAR_2->b_pin_count) && (VAR_2->b_flags & VAR_0))
  FUNC_6(VAR_2->b_target->bt_mount, 0);
 if (FUNC_1(&VAR_2->b_io_remaining))
  FUNC_2(VAR_2->b_target->bt_bdi, ((void*)0));
 FUNC_3(&VAR_2->b_sema);
 FUNC_0(VAR_2);

 FUNC_5(VAR_2, VAR_1);
}
