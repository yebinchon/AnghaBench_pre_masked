
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct kiocb {scalar_t__ ki_left; struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct TYPE_5__ {struct dentry* dentry; } ;
struct file {scalar_t__ f_pos; TYPE_1__ f_path; } ;
struct dentry {TYPE_4__* d_inode; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ loff_t ;
struct TYPE_7__ {int tv_sec; } ;
struct TYPE_6__ {int tv_sec; } ;
struct TYPE_8__ {TYPE_3__ i_atime; TYPE_2__ i_mtime; scalar_t__ i_size; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (char*,long,long,unsigned long,...) ;
 scalar_t__ FUNC_3 (struct kiocb*,struct iovec const*,unsigned long,scalar_t__) ;
 scalar_t__ FUNC_4 (struct dentry*,int ) ;
 scalar_t__ FUNC_5 (struct dentry*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct kiocb *VAR_1, const struct iovec *VAR_2,
          unsigned long VAR_3, loff_t VAR_4)
{
 struct file * VAR_5 = VAR_1->ki_filp;
 struct dentry * VAR_6 = VAR_5->f_path.dentry;
 ssize_t VAR_7;

 FUNC_2("file %s/%s, count=%lu@%lu\n",
  FUNC_0(VAR_6),
  (unsigned long) VAR_1->ki_left, (unsigned long) VAR_4);

 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7) {
  FUNC_1("%s/%s validation failed, error=%Zd\n",
    FUNC_0(VAR_6), VAR_7);
  goto out;
 }

 VAR_7 = FUNC_4(VAR_6, VAR_0);
 if (VAR_7)
  goto out;

 if (VAR_1->ki_left > 0) {
  VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_2("pos=%ld, size=%ld, mtime=%ld, atime=%ld\n",
   (long) VAR_5->f_pos, (long) VAR_6->d_inode->i_size,
   VAR_6->d_inode->i_mtime.tv_sec,
   VAR_6->d_inode->i_atime.tv_sec);
 }
out:
 return VAR_7;
}
