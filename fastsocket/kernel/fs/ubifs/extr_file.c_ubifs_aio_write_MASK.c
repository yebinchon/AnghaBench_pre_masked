
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ubifs_info {int dummy; } ;
struct kiocb {TYPE_2__* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {TYPE_3__* i_sb; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_6__ {struct ubifs_info* s_fs_info; } ;
struct TYPE_5__ {int f_flags; TYPE_1__* f_mapping; } ;
struct TYPE_4__ {struct inode* host; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct kiocb*,struct iovec const*,unsigned long,int ) ;
 int FUNC_2 (struct ubifs_info*,struct inode*) ;
 int FUNC_3 (struct ubifs_info*,struct inode*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kiocb *VAR_1, const struct iovec *VAR_2,
          unsigned long VAR_3, loff_t VAR_4)
{
 int VAR_5;
 ssize_t VAR_6;
 struct inode *VAR_7 = VAR_1->ki_filp->f_mapping->host;
 struct ubifs_info *VAR_8 = VAR_7->i_sb->s_fs_info;

 VAR_5 = FUNC_3(VAR_8, VAR_7);
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_6 > 0 && (FUNC_0(VAR_7) || VAR_1->ki_filp->f_flags & VAR_0)) {
  VAR_5 = FUNC_2(VAR_8, VAR_7);
  if (VAR_5)
   return VAR_5;
 }

 return VAR_6;
}
