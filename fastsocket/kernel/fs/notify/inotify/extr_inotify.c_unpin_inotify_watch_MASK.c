
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inotify_watch {TYPE_1__* inode; } ;
struct TYPE_2__ {struct super_block* i_sb; } ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct inotify_watch*) ;

void FUNC_2(struct inotify_watch *VAR_0)
{
 struct super_block *VAR_1 = VAR_0->inode->i_sb;
 FUNC_1(VAR_0);
 FUNC_0(VAR_1);
}
