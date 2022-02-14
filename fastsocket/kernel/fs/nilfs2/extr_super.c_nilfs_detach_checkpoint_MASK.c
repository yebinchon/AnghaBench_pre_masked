
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_super_sem; } ;
struct nilfs_sb_info {int s_list; int * s_ifile; struct the_nilfs* s_nilfs; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct nilfs_sb_info *VAR_0)
{
 struct the_nilfs *VAR_1 = VAR_0->s_nilfs;

 FUNC_2(VAR_0->s_ifile);
 FUNC_3(VAR_0->s_ifile);
 VAR_0->s_ifile = ((void*)0);
 FUNC_0(&VAR_1->ns_super_sem);
 FUNC_1(&VAR_0->s_list);
 FUNC_4(&VAR_1->ns_super_sem);
}
