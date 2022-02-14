
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_transaction_info {int dummy; } ;
struct nilfs_segctor_req {int mode; } ;
struct nilfs_sc_info {int sc_flags; struct nilfs_sb_info* sc_sbi; } ;
struct nilfs_sb_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nilfs_sc_info*,struct nilfs_segctor_req*) ;
 int FUNC_1 (struct nilfs_sc_info*,struct nilfs_segctor_req*) ;
 int FUNC_2 (struct nilfs_sc_info*,struct nilfs_segctor_req*) ;
 int FUNC_3 (struct nilfs_sc_info*) ;
 int FUNC_4 (struct nilfs_sb_info*,struct nilfs_transaction_info*,int ) ;
 int FUNC_5 (struct nilfs_sb_info*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct nilfs_sc_info *VAR_1, int VAR_2)
{
 struct nilfs_sb_info *VAR_3 = VAR_1->sc_sbi;
 struct nilfs_transaction_info VAR_4;
 struct nilfs_segctor_req VAR_5 = { .mode = VAR_2 };

 FUNC_4(VAR_3, &VAR_4, 0);

 FUNC_0(VAR_1, &VAR_5);
 FUNC_1(VAR_1, &VAR_5);
 FUNC_2(VAR_1, &VAR_5);






 if (FUNC_6(VAR_0, &VAR_1->sc_flags))
  FUNC_3(VAR_1);

 FUNC_5(VAR_3);
}
