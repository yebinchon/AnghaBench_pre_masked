
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*,int) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;

int FUNC_4(struct file *VAR_0)
{
 struct dentry *VAR_1 = VAR_0->f_path.dentry;
 int VAR_2 = FUNC_3(VAR_1);
 int VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = 0;

 if (VAR_3 < 0)
  return VAR_3;
 if (VAR_3)
  VAR_4 = FUNC_1(VAR_1);
 if (!VAR_4 && VAR_2)
  VAR_4 = FUNC_0(VAR_1, VAR_2);

 return VAR_4;
}
