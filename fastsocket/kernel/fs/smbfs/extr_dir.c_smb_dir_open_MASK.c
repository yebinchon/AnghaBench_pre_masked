
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


struct TYPE_10__ {scalar_t__ protocol; } ;
struct smb_sb_info {scalar_t__ state; TYPE_4__ opt; } ;
struct inode {int dummy; } ;
struct TYPE_11__ {struct dentry* dentry; } ;
struct file {TYPE_5__ f_path; } ;
struct TYPE_9__ {int name; } ;
struct dentry {TYPE_3__ d_name; TYPE_2__* d_parent; } ;
struct TYPE_12__ {unsigned long oldmtime; } ;
struct TYPE_7__ {int name; } ;
struct TYPE_8__ {TYPE_1__ d_name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 TYPE_6__* FUNC_1 (struct inode*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,int ,int ) ;
 unsigned long VAR_3 ;
 int FUNC_3 () ;
 struct smb_sb_info* FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 () ;

__attribute__((used)) static int
FUNC_8(struct inode *VAR_4, struct file *VAR_5)
{
 struct dentry *VAR_6 = VAR_5->f_path.dentry;
 struct smb_sb_info *VAR_7;
 int VAR_8 = 0;

 FUNC_2("(%s/%s)\n", VAR_6->d_parent->d_name.name,
  VAR_5->f_path.dentry->d_name.name);





 FUNC_3();
 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7->opt.protocol < VAR_2) {
  unsigned long VAR_9 = VAR_3 - FUNC_1(VAR_4)->oldmtime;
  if (VAR_9 > 2*VAR_1)
   FUNC_5(VAR_4);
 }






 if (VAR_7->state == VAR_0 || !FUNC_0(VAR_6))
  VAR_8 = FUNC_6(VAR_6);
 FUNC_7();
 return VAR_8;
}
