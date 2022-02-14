
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udf_inode_info {scalar_t__ i_alloc_type; int i_lenAlloc; } ;
struct kiocb {size_t ki_left; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {int i_size; TYPE_3__* i_sb; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {int f_flags; TYPE_2__ f_path; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_6__ {scalar_t__ s_blocksize; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct udf_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct kiocb*,struct iovec const*,unsigned long,int) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct inode*,int,int*) ;
 scalar_t__ FUNC_5 (struct inode*) ;

__attribute__((used)) static ssize_t FUNC_6(struct kiocb *VAR_2, const struct iovec *VAR_3,
      unsigned long VAR_4, loff_t VAR_5)
{
 ssize_t VAR_6;
 struct file *VAR_7 = VAR_2->ki_filp;
 struct inode *VAR_8 = VAR_7->f_path.dentry->d_inode;
 int VAR_9, VAR_10;
 size_t VAR_11 = VAR_2->ki_left;
 struct udf_inode_info *VAR_12 = FUNC_0(VAR_8);

 if (VAR_12->i_alloc_type == VAR_0) {
  if (VAR_7->f_flags & VAR_1)
   VAR_10 = VAR_8->i_size;
  else
   VAR_10 = VAR_5;

  if (VAR_8->i_sb->s_blocksize <
    (FUNC_5(VAR_8) +
      VAR_10 + VAR_11)) {
   FUNC_4(VAR_8, VAR_10 + VAR_11, &VAR_9);
   if (VAR_12->i_alloc_type == VAR_0) {
    FUNC_3("udf_expand_adinicb: err=%d\n", VAR_9);
    return VAR_9;
   }
  } else {
   if (VAR_10 + VAR_11 > VAR_8->i_size)
    VAR_12->i_lenAlloc = VAR_10 + VAR_11;
   else
    VAR_12->i_lenAlloc = VAR_8->i_size;
  }
 }

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 if (VAR_6 > 0)
  FUNC_2(VAR_8);

 return VAR_6;
}
