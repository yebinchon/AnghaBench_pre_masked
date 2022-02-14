
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int i_mode; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {scalar_t__ nrpages; TYPE_1__* a_ops; struct inode* host; } ;
typedef int ssize_t ;
typedef size_t pgoff_t ;
typedef size_t loff_t ;
struct TYPE_2__ {int (* direct_IO ) (int ,struct kiocb*,struct iovec const*,size_t,unsigned long) ;} ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct address_space*,size_t,size_t) ;
 size_t FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,size_t) ;
 int FUNC_4 (struct address_space*,size_t,size_t) ;
 size_t FUNC_5 (struct iovec const*,unsigned long) ;
 unsigned long FUNC_6 (struct iovec*,unsigned long,size_t) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ,struct kiocb*,struct iovec const*,size_t,unsigned long) ;

ssize_t
FUNC_9(struct kiocb *VAR_3, const struct iovec *VAR_4,
  unsigned long *VAR_5, loff_t VAR_6, loff_t *VAR_7,
  size_t VAR_8, size_t VAR_9)
{
 struct file *VAR_10 = VAR_3->ki_filp;
 struct address_space *VAR_11 = VAR_10->f_mapping;
 struct inode *VAR_12 = VAR_11->host;
 ssize_t VAR_13;
 size_t VAR_14;
 pgoff_t VAR_15;

 if (VAR_8 != VAR_9)
  *VAR_5 = FUNC_6((struct iovec *)VAR_4, *VAR_5, VAR_8);

 VAR_14 = FUNC_5(VAR_4, *VAR_5);
 VAR_15 = (VAR_6 + VAR_14 - 1) >> VAR_1;

 VAR_13 = FUNC_1(VAR_11, VAR_6, VAR_6 + VAR_14 - 1);
 if (VAR_13)
  goto out;







 if (VAR_11->nrpages) {
  VAR_13 = FUNC_4(VAR_11,
     VAR_6 >> VAR_1, VAR_15);




  if (VAR_13) {
   if (VAR_13 == -VAR_0)
    return 0;
   goto out;
  }
 }

 VAR_13 = VAR_11->a_ops->direct_IO(VAR_2, VAR_3, VAR_4, VAR_6, *VAR_5);
 if (VAR_11->nrpages) {
  FUNC_4(VAR_11,
           VAR_6 >> VAR_1, VAR_15);
 }

 if (VAR_13 > 0) {
  loff_t VAR_16 = VAR_6 + VAR_13;
  if (VAR_16 > FUNC_2(VAR_12) && !FUNC_0(VAR_12->i_mode)) {
   FUNC_3(VAR_12, VAR_16);
   FUNC_7(VAR_12);
  }
  *VAR_7 = VAR_16;
 }
out:
 return VAR_13;
}
