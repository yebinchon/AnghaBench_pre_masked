
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct smb_sb_info {TYPE_2__* ops; } ;
struct smb_cache_control {int dummy; } ;
struct TYPE_3__ {int dentry; } ;
struct file {TYPE_1__ f_path; } ;
typedef int filldir_t ;
struct TYPE_4__ {int (* readdir ) (struct file*,void*,int ,struct smb_cache_control*) ;} ;


 int VAR_0 ;
 struct smb_sb_info* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct smb_sb_info*) ;
 int FUNC_2 (struct file*,void*,int ,struct smb_cache_control*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_1, void *VAR_2, filldir_t VAR_3,
        struct smb_cache_control *VAR_4)
{
 struct smb_sb_info *VAR_5 = FUNC_0(VAR_1->f_path.dentry);

 if (FUNC_1(VAR_5) < 0)
  return -VAR_0;

 return VAR_5->ops->readdir(VAR_1, VAR_2, VAR_3, VAR_4);
}
