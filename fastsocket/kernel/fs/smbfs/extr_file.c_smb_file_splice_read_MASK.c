
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pipe_inode_info {int dummy; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int loff_t ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 int FUNC_2 (char*,int ,int ,size_t) ;
 scalar_t__ FUNC_3 (struct file*,int *,struct pipe_inode_info*,size_t,unsigned int) ;
 scalar_t__ FUNC_4 (struct dentry*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct file *VAR_0, loff_t *VAR_1,
       struct pipe_inode_info *VAR_2, size_t VAR_3,
       unsigned int VAR_4)
{
 struct dentry *VAR_5 = VAR_0->f_path.dentry;
 ssize_t VAR_6;

 FUNC_2("file %s/%s, pos=%Ld, count=%lu\n",
  FUNC_0(VAR_5), *VAR_1, VAR_3);

 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6) {
  FUNC_1("%s/%s validation failed, error=%Zd\n",
    FUNC_0(VAR_5), VAR_6);
  goto out;
 }
 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
out:
 return VAR_6;
}
