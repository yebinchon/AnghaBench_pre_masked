
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned short b_error; } ;
typedef TYPE_1__ xfs_buf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int,int ) ;

void
FUNC_2(
 xfs_buf_t *VAR_1,
 int VAR_2)
{
 FUNC_0(VAR_2 >= 0 && VAR_2 <= 0xffff);
 VAR_1->b_error = (unsigned short)VAR_2;
 FUNC_1(VAR_1, VAR_2, VAR_0);
}
