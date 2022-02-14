
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_root; int s_umount; int s_count; int s_active; } ;
struct inotify_watch {TYPE_1__* inode; int wd; } ;
struct inotify_handle {int mutex; int idr; } ;
typedef int s32 ;
struct TYPE_2__ {struct super_block* i_sb; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inotify_watch*) ;
 struct inotify_watch* FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_0 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct inotify_handle *VAR_1, struct inotify_watch *VAR_2)
{
 struct super_block *VAR_3 = VAR_2->inode->i_sb;
 s32 VAR_4 = VAR_2->wd;

 if (FUNC_0(&VAR_3->s_active)) {
  FUNC_3(VAR_2);
  FUNC_7(&VAR_1->mutex);
  return 1;
 }
 FUNC_8(&VAR_0);
 VAR_3->s_count++;
 FUNC_9(&VAR_0);
 FUNC_7(&VAR_1->mutex);
 FUNC_1(&VAR_3->s_umount);
 if (FUNC_5(!VAR_3->s_root)) {

  FUNC_2(VAR_3);
  return 0;
 }

 FUNC_6(&VAR_1->mutex);
 if (FUNC_4(&VAR_1->idr, VAR_4) != VAR_2 || VAR_2->inode->i_sb != VAR_3) {

  FUNC_7(&VAR_1->mutex);
  FUNC_2(VAR_3);
  return 0;
 }

 FUNC_3(VAR_2);
 FUNC_7(&VAR_1->mutex);
 return 2;
}
