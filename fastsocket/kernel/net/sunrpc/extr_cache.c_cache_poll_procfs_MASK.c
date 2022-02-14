
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct cache_detail {int dummy; } ;
typedef int poll_table ;
struct TYPE_6__ {struct cache_detail* data; } ;
struct TYPE_4__ {int d_inode; } ;


 TYPE_3__* FUNC_0 (int ) ;
 unsigned int FUNC_1 (struct file*,int *,struct cache_detail*) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_0, poll_table *VAR_1)
{
 struct cache_detail *VAR_2 = FUNC_0(VAR_0->f_path.dentry->d_inode)->data;

 return FUNC_1(VAR_0, VAR_1, VAR_2);
}
