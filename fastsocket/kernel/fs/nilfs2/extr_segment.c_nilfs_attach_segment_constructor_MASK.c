
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int dummy; } ;
struct nilfs_sb_info {int * s_sc_info; struct the_nilfs* s_nilfs; } ;


 int VAR_0 ;
 int FUNC_0 (struct nilfs_sb_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct the_nilfs*,struct nilfs_sb_info*) ;
 int FUNC_3 (struct the_nilfs*,struct nilfs_sb_info*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (struct nilfs_sb_info*) ;

int FUNC_6(struct nilfs_sb_info *VAR_1)
{
 struct the_nilfs *VAR_2 = VAR_1->s_nilfs;
 int VAR_3;



 VAR_1->s_sc_info = FUNC_5(VAR_1);
 if (!VAR_1->s_sc_info)
  return -VAR_0;

 FUNC_2(VAR_2, VAR_1);
 VAR_3 = FUNC_4(FUNC_0(VAR_1));
 if (VAR_3) {
  FUNC_3(VAR_2, VAR_1);
  FUNC_1(VAR_1->s_sc_info);
  VAR_1->s_sc_info = ((void*)0);
 }
 return VAR_3;
}
