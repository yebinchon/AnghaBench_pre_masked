
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sem; } ;
struct super_block {scalar_t__ s_dirt; } ;
struct nilfs_sb_info {struct the_nilfs* s_nilfs; } ;


 struct nilfs_sb_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nilfs_sb_info*,int) ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct super_block *VAR_0, int VAR_1)
{
 struct nilfs_sb_info *VAR_2 = FUNC_0(VAR_0);
 struct the_nilfs *VAR_3 = VAR_2->s_nilfs;
 int VAR_4 = 0;


 if (VAR_1)
  VAR_4 = FUNC_3(VAR_0);

 FUNC_1(&VAR_3->ns_sem);
 if (VAR_0->s_dirt)
  FUNC_2(VAR_2, 1);
 FUNC_4(&VAR_3->ns_sem);

 return VAR_4;
}
