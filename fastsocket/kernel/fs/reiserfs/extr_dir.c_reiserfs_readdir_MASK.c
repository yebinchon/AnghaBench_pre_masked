
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* dentry; } ;
struct file {int f_pos; TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;
typedef int filldir_t ;


 int FUNC_0 (struct dentry*,void*,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, filldir_t VAR_2)
{
 struct dentry *VAR_3 = VAR_0->f_path.dentry;
 return FUNC_0(VAR_3, VAR_1, VAR_2, &VAR_0->f_pos);
}
