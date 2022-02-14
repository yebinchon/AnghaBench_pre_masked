
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct dentry*,struct page*) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_0, struct page *VAR_1)
{
 int VAR_2;
 struct dentry *VAR_3 = VAR_0->f_path.dentry;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_3, VAR_1);
 FUNC_1(VAR_1);
 return VAR_2;
}
