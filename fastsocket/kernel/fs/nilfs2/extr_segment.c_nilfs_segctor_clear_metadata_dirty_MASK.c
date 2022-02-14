
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct the_nilfs {int ns_sufile; int ns_cpfile; } ;
struct nilfs_sc_info {struct nilfs_sb_info* sc_sbi; } ;
struct nilfs_sb_info {int s_ifile; struct the_nilfs* s_nilfs; } ;


 int FUNC_0 (struct the_nilfs*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct nilfs_sc_info *VAR_0)
{
 struct nilfs_sb_info *VAR_1 = VAR_0->sc_sbi;
 struct the_nilfs *VAR_2 = VAR_1->s_nilfs;

 FUNC_1(VAR_1->s_ifile);
 FUNC_1(VAR_2->ns_cpfile);
 FUNC_1(VAR_2->ns_sufile);
 FUNC_1(FUNC_0(VAR_2));
}
