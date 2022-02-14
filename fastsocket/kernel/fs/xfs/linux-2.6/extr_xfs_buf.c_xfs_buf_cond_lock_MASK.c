
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int b_sema; } ;
typedef TYPE_1__ xfs_buf_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ) ;

int
FUNC_3(
 xfs_buf_t *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(&VAR_2->b_sema) == 0;
 if (VAR_3)
  FUNC_0(VAR_2);

 FUNC_2(VAR_2, VAR_1);
 return VAR_3 ? 0 : -VAR_0;
}
