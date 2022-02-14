
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio {int dummy; } ;
struct thread {int dummy; } ;
struct linux_preadv_args {int pos_l; int fd; int vlen; int vec; scalar_t__ pos_h; } ;
typedef int offset ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct uio**) ;
 int FUNC_2 (struct uio*,int ) ;
 int FUNC_3 (struct thread*,int ,struct uio*,int) ;
 int FUNC_4 (int ,int ,struct uio**) ;

int
FUNC_5(struct thread *VAR_2, struct linux_preadv_args *VAR_3)
{
 struct uio *VAR_4;
 int VAR_5;
 off_t VAR_6;






 VAR_6 = (((off_t)VAR_3->pos_h << (sizeof(VAR_6) * 4)) <<
     (sizeof(VAR_6) * 4)) | VAR_3->pos_l;
 if (VAR_6 < 0)
  return (VAR_0);



 VAR_5 = FUNC_1(VAR_3->vec, VAR_3->vlen, &VAR_4);

 if (VAR_5 != 0)
  return (VAR_5);
 VAR_5 = FUNC_3(VAR_2, VAR_3->fd, VAR_4, VAR_6);
 FUNC_2(VAR_4, VAR_1);
 return (VAR_5);
}
