
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio {scalar_t__ uio_segflg; scalar_t__ uio_resid; TYPE_1__* uio_iov; } ;
struct cuse_client_command {int dummy; } ;
struct cuse_client {int fflags; struct cuse_client_command* cmds; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int iov_len; scalar_t__ iov_base; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct cuse_client**) ;
 int FUNC_1 (struct cdev*,struct cuse_client*) ;
 int FUNC_2 (struct cuse_client_command*,int ,int ) ;
 int FUNC_3 (struct cuse_client_command*,uintptr_t,unsigned long,int ,int) ;
 int FUNC_4 (struct cuse_client_command*) ;
 int FUNC_5 (struct cuse_client_command*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *,int,struct uio*) ;

__attribute__((used)) static int
FUNC_10(struct cdev *VAR_7, struct uio *VAR_8, int VAR_9)
{
 struct cuse_client_command *VAR_10;
 struct cuse_client *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_12 = FUNC_0(&VAR_11);
 if (VAR_12 != 0)
  return (VAR_12);

 VAR_10 = &VAR_11->cmds[VAR_0];

 if (VAR_8->uio_segflg != VAR_6) {
  return (VAR_2);
 }
 VAR_8->uio_segflg = VAR_5;

 FUNC_4(VAR_10);

 while (VAR_8->uio_resid != 0) {

  if (VAR_8->uio_iov->iov_len > VAR_1) {
   VAR_12 = VAR_3;
   break;
  }
  VAR_13 = VAR_8->uio_iov->iov_len;

  FUNC_7();
  FUNC_3(VAR_10,
      (uintptr_t)VAR_8->uio_iov->iov_base,
      (unsigned long)(unsigned int)VAR_13, VAR_11->fflags, VAR_9);

  VAR_12 = FUNC_2(VAR_10, 0, 0);
  FUNC_8();

  if (VAR_12 < 0) {
   VAR_12 = FUNC_6(VAR_12);
   break;
  } else if (VAR_12 == VAR_13) {
   VAR_12 = FUNC_9(((void*)0), VAR_12, VAR_8);
   if (VAR_12)
    break;
  } else {
   VAR_12 = FUNC_9(((void*)0), VAR_12, VAR_8);
   break;
  }
 }
 FUNC_5(VAR_10);

 VAR_8->uio_segflg = VAR_6;

 if (VAR_12 == VAR_4)
  FUNC_1(VAR_7, VAR_11);

 return (VAR_12);
}
