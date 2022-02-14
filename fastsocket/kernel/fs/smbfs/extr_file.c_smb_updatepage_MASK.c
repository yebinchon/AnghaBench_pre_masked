
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {scalar_t__ index; } ;
struct TYPE_2__ {struct dentry* dentry; } ;
struct file {TYPE_1__ f_path; } ;
struct dentry {int d_inode; } ;


 int FUNC_0 (char*,int ,unsigned int,unsigned long long) ;
 int FUNC_1 (struct dentry*) ;
 unsigned long long VAR_0 ;
 int FUNC_2 (int ,struct page*,unsigned long,unsigned int) ;

__attribute__((used)) static int
FUNC_3(struct file *VAR_1, struct page *VAR_2, unsigned long VAR_3,
        unsigned int VAR_4)
{
 struct dentry *VAR_5 = VAR_1->f_path.dentry;

 FUNC_0("(%s/%s %d@%lld)\n", FUNC_1(VAR_5), VAR_4,
  ((unsigned long long)VAR_2->index << VAR_0) + VAR_3);

 return FUNC_2(VAR_5->d_inode, VAR_2, VAR_3, VAR_4);
}
