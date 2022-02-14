
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct ima_iint_cache {int flags; int version; int digest; } ;
struct file {TYPE_2__* f_dentry; } ;
struct TYPE_4__ {TYPE_1__* d_inode; } ;
struct TYPE_3__ {int i_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

int FUNC_2(struct ima_iint_cache *VAR_3, struct file *VAR_4)
{
 int VAR_5 = -VAR_0;

 if (!(VAR_3->flags & VAR_2)) {
  u64 VAR_6 = VAR_4->f_dentry->d_inode->i_version;

  FUNC_1(VAR_3->digest, 0, VAR_1);
  VAR_5 = FUNC_0(VAR_4, VAR_3->digest);
  if (!VAR_5)
   VAR_3->version = VAR_6;
 }
 return VAR_5;
}
