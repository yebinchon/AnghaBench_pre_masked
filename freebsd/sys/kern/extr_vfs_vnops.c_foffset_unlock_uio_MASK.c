
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int uio_offset; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,int) ;

void
FUNC_1(struct file *VAR_1, struct uio *VAR_2, int VAR_3)
{

 if ((VAR_3 & VAR_0) == 0)
  FUNC_0(VAR_1, VAR_2->uio_offset, VAR_3);
}
