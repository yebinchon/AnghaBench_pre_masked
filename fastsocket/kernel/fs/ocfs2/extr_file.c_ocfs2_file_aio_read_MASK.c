
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kiocb {int ki_pos; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int i_alloc_sem; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {int f_flags; int f_vfsmnt; TYPE_3__ f_path; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {int name; int len; } ;
struct TYPE_5__ {TYPE_1__ d_name; struct inode* d_inode; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kiocb*,struct iovec const*,unsigned long,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,struct file*,unsigned int,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct inode*,int ,int*) ;
 int FUNC_8 (struct inode*,int) ;
 int FUNC_9 (struct kiocb*) ;
 int FUNC_10 (struct kiocb*,int) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static ssize_t FUNC_14(struct kiocb *VAR_3,
       const struct iovec *VAR_4,
       unsigned long VAR_5,
       loff_t VAR_6)
{
 int VAR_7 = 0, VAR_8 = -1, VAR_9 = 0, VAR_10 = 0;
 struct file *VAR_11 = VAR_3->ki_filp;
 struct inode *VAR_12 = VAR_11->f_path.dentry->d_inode;

 FUNC_4("(0x%p, %u, '%.*s')\n", VAR_11,
     (unsigned int)VAR_5,
     VAR_11->f_path.dentry->d_name.len,
     VAR_11->f_path.dentry->d_name.name);

 if (!VAR_12) {
  VAR_7 = -VAR_0;
  FUNC_5(VAR_7);
  goto bail;
 }





 if (VAR_11->f_flags & VAR_2) {
  FUNC_1(&VAR_12->i_alloc_sem);
  VAR_9 = 1;

  VAR_7 = FUNC_11(VAR_12, 0);
  if (VAR_7 < 0) {
   FUNC_5(VAR_7);
   goto bail;
  }
  VAR_8 = 0;

  FUNC_10(VAR_3, VAR_8);
 }
 VAR_7 = FUNC_7(VAR_12, VAR_11->f_vfsmnt, &VAR_10);
 if (VAR_7 < 0) {
  FUNC_5(VAR_7);
  goto bail;
 }
 FUNC_8(VAR_12, VAR_10);

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_3->ki_pos);
 if (VAR_7 == -VAR_0)
  FUNC_3(0, "generic_file_aio_read returned -EINVAL\n");


 FUNC_0(VAR_7 == -VAR_1 && !(VAR_11->f_flags & VAR_2));


 if (VAR_7 == -VAR_1 || !FUNC_9(VAR_3)) {
  VAR_8 = -1;
  VAR_9 = 0;
 }

bail:
 if (VAR_9)
  FUNC_13(&VAR_12->i_alloc_sem);
 if (VAR_8 != -1)
  FUNC_12(VAR_12, VAR_8);
 FUNC_6(VAR_7);

 return VAR_7;
}
