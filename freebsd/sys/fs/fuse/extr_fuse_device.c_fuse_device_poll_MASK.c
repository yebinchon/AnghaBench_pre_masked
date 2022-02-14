
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct fuse_data {int ms_mtx; int ks_rsel; int ms_head; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (void**) ;
 scalar_t__ FUNC_2 (struct fuse_data*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct thread*,int *) ;

int
FUNC_6(struct cdev *VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct fuse_data *VAR_8;
 int VAR_9, VAR_10 = 0;

 VAR_9 = FUNC_1((void **)&VAR_8);
 if (VAR_9 != 0)
  return (VAR_6 &
      (VAR_0|VAR_1|VAR_3|VAR_2|VAR_4));

 if (VAR_6 & (VAR_1 | VAR_3)) {
  FUNC_3(VAR_8->ms_mtx);
  if (FUNC_2(VAR_8) || FUNC_0(&VAR_8->ms_head))
   VAR_10 |= VAR_6 & (VAR_1 | VAR_3);
  else
   FUNC_5(VAR_7, &VAR_8->ks_rsel);
  FUNC_4(VAR_8->ms_mtx);
 }
 if (VAR_6 & (VAR_2 | VAR_4)) {
  VAR_10 |= VAR_6 & (VAR_2 | VAR_4);
 }
 return (VAR_10);
}
