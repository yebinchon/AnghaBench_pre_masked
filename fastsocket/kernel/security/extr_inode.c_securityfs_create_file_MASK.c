
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_operations {int dummy; } ;
struct dentry {TYPE_1__* d_inode; } ;
typedef int mode_t ;
struct TYPE_2__ {void* i_private; struct file_operations const* i_fop; } ;


 struct dentry* FUNC_0 (int) ;
 int FUNC_1 (char const*,int ,struct dentry*,struct dentry**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;

struct dentry *FUNC_5(const char *VAR_3, mode_t VAR_4,
       struct dentry *VAR_5, void *VAR_6,
       const struct file_operations *VAR_7)
{
 struct dentry *VAR_8 = ((void*)0);
 int VAR_9;

 FUNC_2("securityfs: creating file '%s'\n",VAR_3);

 VAR_9 = FUNC_3(&VAR_0, &VAR_1, &VAR_2);
 if (VAR_9) {
  VAR_8 = FUNC_0(VAR_9);
  goto exit;
 }

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_8);
 if (VAR_9) {
  VAR_8 = FUNC_0(VAR_9);
  FUNC_4(&VAR_1, &VAR_2);
  goto exit;
 }

 if (VAR_8->d_inode) {
  if (VAR_7)
   VAR_8->d_inode->i_fop = VAR_7;
  if (VAR_6)
   VAR_8->d_inode->i_private = VAR_6;
 }
exit:
 return VAR_8;
}
