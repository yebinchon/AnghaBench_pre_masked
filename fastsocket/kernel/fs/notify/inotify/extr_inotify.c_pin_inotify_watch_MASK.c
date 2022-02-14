
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_active; } ;
struct inotify_watch {int count; TYPE_1__* inode; } ;
struct TYPE_2__ {struct super_block* i_sb; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(struct inotify_watch *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->inode->i_sb;
 if (FUNC_1(&VAR_1->s_active)) {
  FUNC_0(&VAR_0->count);
  return 1;
 }
 return 0;
}
