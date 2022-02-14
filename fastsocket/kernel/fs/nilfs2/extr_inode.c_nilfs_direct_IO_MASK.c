
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct iovec {int dummy; } ;
struct inode {TYPE_2__* i_sb; } ;
struct file {TYPE_1__* f_mapping; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_4__ {int s_bdev; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct kiocb*,struct inode*,int ,struct iovec const*,int ,unsigned long,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static ssize_t
FUNC_1(int VAR_2, struct kiocb *VAR_3, const struct iovec *VAR_4,
  loff_t VAR_5, unsigned long VAR_6)
{
 struct file *VAR_7 = VAR_3->ki_filp;
 struct inode *VAR_8 = VAR_7->f_mapping->host;
 ssize_t VAR_9;

 if (VAR_2 == VAR_0)
  return 0;


 VAR_9 = FUNC_0(VAR_2, VAR_3, VAR_8, VAR_8->i_sb->s_bdev, VAR_4,
      VAR_5, VAR_6, VAR_1, ((void*)0));
 return VAR_9;
}
