
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sc_info {int sc_flags; struct nilfs_sb_info* sc_sbi; } ;
struct nilfs_sb_info {int s_inode_lock; int s_dirty_files; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct nilfs_sc_info*) ;
 scalar_t__ FUNC_2 (struct nilfs_sb_info*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct nilfs_sc_info *VAR_1)
{
 struct nilfs_sb_info *VAR_2 = VAR_1->sc_sbi;
 int VAR_3 = 0;

 if (FUNC_2(VAR_2))
  FUNC_3(VAR_0, &VAR_1->sc_flags);

 FUNC_4(&VAR_2->s_inode_lock);
 if (FUNC_0(&VAR_2->s_dirty_files) && FUNC_1(VAR_1))
  VAR_3++;

 FUNC_5(&VAR_2->s_inode_lock);
 return VAR_3;
}
