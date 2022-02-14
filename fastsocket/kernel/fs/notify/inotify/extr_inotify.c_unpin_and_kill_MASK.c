
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inotify_watch {TYPE_1__* inode; } ;
struct TYPE_2__ {struct super_block* i_sb; } ;


 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct inotify_watch*) ;

__attribute__((used)) static void FUNC_3(struct inotify_watch *VAR_0, int VAR_1)
{
 struct super_block *VAR_2 = VAR_0->inode->i_sb;
 FUNC_2(VAR_0);
 switch (VAR_1) {
 case 1:
  FUNC_0(VAR_2);
  break;
 case 2:
  FUNC_1(VAR_2);
 }
}
