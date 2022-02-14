
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_super_sem; struct nilfs_sb_info* ns_current; int ns_sem; int ns_mount_state; TYPE_1__** ns_sbp; } ;
struct super_block {int s_flags; int * s_fs_info; } ;
struct nilfs_sb_info {int * s_super; struct the_nilfs* s_nilfs; } ;
struct TYPE_2__ {int s_state; } ;


 int VAR_0 ;
 struct nilfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (struct nilfs_sb_info*,int) ;
 int FUNC_5 (struct nilfs_sb_info*) ;
 int FUNC_6 (struct nilfs_sb_info*) ;
 int FUNC_7 (struct nilfs_sb_info*) ;
 int FUNC_8 (struct the_nilfs*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct super_block *VAR_1)
{
 struct nilfs_sb_info *VAR_2 = FUNC_0(VAR_1);
 struct the_nilfs *VAR_3 = VAR_2->s_nilfs;

 FUNC_3();

 FUNC_6(VAR_2);

 if (!(VAR_1->s_flags & VAR_0)) {
  FUNC_2(&VAR_3->ns_sem);
  VAR_3->ns_sbp[0]->s_state = FUNC_1(VAR_3->ns_mount_state);
  FUNC_4(VAR_2, 1);
  FUNC_10(&VAR_3->ns_sem);
 }
 FUNC_2(&VAR_3->ns_super_sem);
 if (VAR_3->ns_current == VAR_2)
  VAR_3->ns_current = ((void*)0);
 FUNC_10(&VAR_3->ns_super_sem);

 FUNC_5(VAR_2);
 FUNC_8(VAR_2->s_nilfs);
 VAR_2->s_super = ((void*)0);
 VAR_1->s_fs_info = ((void*)0);
 FUNC_7(VAR_2);

 FUNC_9();
}
