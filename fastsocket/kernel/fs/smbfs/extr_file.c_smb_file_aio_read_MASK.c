
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_left; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct TYPE_6__ {struct dentry* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct dentry {TYPE_2__* d_inode; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_4__ {unsigned long tv_sec; } ;
struct TYPE_5__ {unsigned long i_flags; TYPE_1__ i_atime; scalar_t__ i_size; } ;


 long FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,long,scalar_t__) ;
 int FUNC_2 (char*,long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (struct kiocb*,struct iovec const*,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_4 (struct dentry*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct kiocb *VAR_0, const struct iovec *VAR_1,
   unsigned long VAR_2, loff_t VAR_3)
{
 struct file * VAR_4 = VAR_0->ki_filp;
 struct dentry * VAR_5 = VAR_4->f_path.dentry;
 ssize_t VAR_6;

 FUNC_2("file %s/%s, count=%lu@%lu\n", FUNC_0(VAR_5),
  (unsigned long) VAR_0->ki_left, (unsigned long) VAR_3);

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_1("%s/%s validation failed, error=%Zd\n",
    FUNC_0(VAR_5), VAR_6);
  goto out;
 }

 FUNC_2("before read, size=%ld, flags=%x, atime=%ld\n",
  (long)VAR_5->d_inode->i_size,
  VAR_5->d_inode->i_flags, VAR_5->d_inode->i_atime.tv_sec);

 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
out:
 return VAR_6;
}
