
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_11__ {TYPE_4__* dentry; } ;
struct file {TYPE_5__ f_path; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_12__ {int ip_dyn_features; } ;
struct TYPE_10__ {TYPE_3__* d_inode; } ;
struct TYPE_9__ {TYPE_2__* i_mapping; } ;
struct TYPE_8__ {struct inode* host; } ;
struct TYPE_7__ {int s_bdev; } ;


 TYPE_6__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int,struct kiocb*,struct inode*,int ,struct iovec const*,int ,unsigned long,int ,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ssize_t FUNC_5(int VAR_3,
          struct kiocb *VAR_4,
          const struct iovec *VAR_5,
          loff_t VAR_6,
          unsigned long VAR_7)
{
 struct file *VAR_8 = VAR_4->ki_filp;
 struct inode *VAR_9 = VAR_8->f_path.dentry->d_inode->i_mapping->host;
 int VAR_10;

 FUNC_3();





 if (FUNC_0(VAR_9)->ip_dyn_features & VAR_0)
  return 0;


 if (FUNC_2(VAR_9) <= VAR_6)
  return 0;

 VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_9,
         VAR_9->i_sb->s_bdev, VAR_5, VAR_6,
         VAR_7,
         VAR_2,
         VAR_1);

 FUNC_4(VAR_10);
 return VAR_10;
}
