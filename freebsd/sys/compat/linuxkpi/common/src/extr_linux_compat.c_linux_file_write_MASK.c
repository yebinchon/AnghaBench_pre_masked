
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct uio {int uio_iovcnt; scalar_t__ uio_resid; TYPE_1__* uio_iov; int uio_offset; } ;
struct ucred {int dummy; } ;
struct thread {int dummy; } ;
struct linux_file {int f_flags; } ;
struct linux_cdev {int dummy; } ;
struct file_operations {int (* write ) (struct linux_file*,int *,int,int *) ;} ;
struct file {int f_flag; scalar_t__ f_data; } ;
typedef int ssize_t ;
struct TYPE_2__ {int iov_len; int * iov_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct file*,struct thread*,int ) ;
 int VAR_5 ;
 int FUNC_1 (struct linux_cdev*) ;
 int FUNC_2 (struct linux_file*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct linux_file*,struct file_operations const**,struct linux_cdev**) ;
 int FUNC_5 (struct thread*) ;
 int FUNC_6 (struct linux_file*,int *,int,int *) ;

__attribute__((used)) static int
FUNC_7(struct file *VAR_6, struct uio *VAR_7, struct ucred *VAR_8,
    int VAR_9, struct thread *VAR_10)
{
 struct linux_file *VAR_11;
 const struct file_operations *VAR_12;
 struct linux_cdev *VAR_13;
 ssize_t VAR_14;
 int VAR_15;

 VAR_11 = (struct linux_file *)VAR_6->f_data;
 VAR_11->f_flags = VAR_6->f_flag;

 if (VAR_7->uio_iovcnt != 1)
  return (VAR_3);
 if (VAR_7->uio_resid > VAR_0)
  return (VAR_1);
 FUNC_5(VAR_10);
 FUNC_4(VAR_11, &VAR_12, &VAR_13);
 if (VAR_12->write != ((void*)0)) {
  VAR_14 = FUNC_0(VAR_6, VAR_10, VAR_12->write(VAR_11,
      VAR_7->uio_iov->iov_base,
      VAR_7->uio_iov->iov_len, &VAR_7->uio_offset));
  if (VAR_14 >= 0) {
   VAR_7->uio_iov->iov_base =
       ((uint8_t *)VAR_7->uio_iov->iov_base) + VAR_14;
   VAR_7->uio_iov->iov_len -= VAR_14;
   VAR_7->uio_resid -= VAR_14;
   VAR_15 = 0;
  } else {
   VAR_15 = FUNC_3(VAR_5, -VAR_14);
  }
 } else
  VAR_15 = VAR_2;


 FUNC_2(VAR_11, VAR_4);

 FUNC_1(VAR_13);

 return (VAR_15);
}
