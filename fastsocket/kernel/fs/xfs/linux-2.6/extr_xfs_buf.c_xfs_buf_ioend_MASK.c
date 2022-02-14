
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int b_flags; scalar_t__ b_error; int b_iowait; int b_iodone_work; scalar_t__ b_iodone; } ;
typedef TYPE_1__ xfs_buf_t ;


 int FUNC_0 (int *,int (*) (int *)) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;

void
FUNC_5(
 xfs_buf_t *VAR_7,
 int VAR_8)
{
 FUNC_3(VAR_7, VAR_5);

 VAR_7->b_flags &= ~(VAR_2 | VAR_4 | VAR_3);
 if (VAR_7->b_error == 0)
  VAR_7->b_flags |= VAR_1;

 if ((VAR_7->b_iodone) || (VAR_7->b_flags & VAR_0)) {
  if (VAR_8) {
   FUNC_0(&VAR_7->b_iodone_work, FUNC_4);
   FUNC_2(VAR_6, &VAR_7->b_iodone_work);
  } else {
   FUNC_4(&VAR_7->b_iodone_work);
  }
 } else {
  FUNC_1(&VAR_7->b_iowait);
 }
}
