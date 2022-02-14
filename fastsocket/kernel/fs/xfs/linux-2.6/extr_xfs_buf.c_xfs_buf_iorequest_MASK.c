
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int b_flags; int b_io_remaining; } ;
typedef TYPE_1__ xfs_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(
 xfs_buf_t *VAR_3)
{
 FUNC_3(VAR_3, VAR_2);

 if (VAR_3->b_flags & VAR_0) {
  FUNC_4(VAR_3, 1);
  return;
 }

 if (VAR_3->b_flags & VAR_1) {
  FUNC_7(VAR_3);
 }

 FUNC_5(VAR_3);





 FUNC_2(&VAR_3->b_io_remaining, 1);
 FUNC_0(VAR_3);
 FUNC_1(VAR_3, 1);

 FUNC_6(VAR_3);
}
