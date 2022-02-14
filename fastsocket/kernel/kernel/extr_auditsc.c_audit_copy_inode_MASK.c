
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_rdev; int i_gid; int i_uid; int i_mode; TYPE_1__* i_sb; int i_ino; } ;
struct dentry {int dummy; } ;
struct audit_names {int osid; int rdev; int gid; int uid; int mode; int dev; int ino; } ;
struct TYPE_2__ {int s_dev; } ;


 int FUNC_0 (struct audit_names*,struct dentry const*) ;
 int FUNC_1 (struct inode const*,int *) ;

__attribute__((used)) static void FUNC_2(struct audit_names *VAR_0, const struct dentry *VAR_1,
        const struct inode *VAR_2)
{
 VAR_0->ino = VAR_2->i_ino;
 VAR_0->dev = VAR_2->i_sb->s_dev;
 VAR_0->mode = VAR_2->i_mode;
 VAR_0->uid = VAR_2->i_uid;
 VAR_0->gid = VAR_2->i_gid;
 VAR_0->rdev = VAR_2->i_rdev;
 FUNC_1(VAR_2, &VAR_0->osid);
 FUNC_0(VAR_0, VAR_1);
}
