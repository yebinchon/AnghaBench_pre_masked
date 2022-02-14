
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_end; int vm_start; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 int FUNC_3 (struct file*,struct vm_area_struct*) ;
 int FUNC_4 (struct dentry*) ;

__attribute__((used)) static int
FUNC_5(struct file * VAR_0, struct vm_area_struct * VAR_1)
{
 struct dentry * VAR_2 = VAR_0->f_path.dentry;
 int VAR_3;

 FUNC_2("file %s/%s, address %lu - %lu\n",
  FUNC_0(VAR_2), VAR_1->vm_start, VAR_1->vm_end);

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3) {
  FUNC_1("%s/%s validation failed, error=%d\n",
    FUNC_0(VAR_2), VAR_3);
  goto out;
 }
 VAR_3 = FUNC_3(VAR_0, VAR_1);
out:
 return VAR_3;
}
