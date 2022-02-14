
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int b_flags; int b_sema; int b_hold; } ;
typedef TYPE_1__ xfs_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int ) ;

void
FUNC_5(
 xfs_buf_t *VAR_4)
{
 if ((VAR_4->b_flags & (VAR_1|VAR_3)) == VAR_1) {
  FUNC_1(&VAR_4->b_hold);
  VAR_4->b_flags |= VAR_0;
  FUNC_4(VAR_4, 0);
 }

 FUNC_0(VAR_4);
 FUNC_3(&VAR_4->b_sema);

 FUNC_2(VAR_4, VAR_2);
}
