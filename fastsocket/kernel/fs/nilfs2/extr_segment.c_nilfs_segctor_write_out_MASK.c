
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_transaction_info {int dummy; } ;
struct nilfs_segctor_req {int mode; } ;
struct nilfs_sc_info {struct nilfs_sb_info* sc_sbi; } ;
struct nilfs_sb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nilfs_sc_info*,struct nilfs_segctor_req*) ;
 int FUNC_1 (struct nilfs_sc_info*,struct nilfs_segctor_req*) ;
 int FUNC_2 (struct nilfs_sc_info*,struct nilfs_segctor_req*) ;
 int FUNC_3 (struct nilfs_sb_info*,struct nilfs_transaction_info*,int ) ;
 int FUNC_4 (struct nilfs_sb_info*) ;

__attribute__((used)) static void FUNC_5(struct nilfs_sc_info *VAR_2)
{
 int VAR_3, VAR_4 = VAR_0;



 do {
  struct nilfs_sb_info *VAR_5 = VAR_2->sc_sbi;
  struct nilfs_transaction_info VAR_6;
  struct nilfs_segctor_req VAR_7 = { .mode = VAR_1 };

  FUNC_3(VAR_5, &VAR_6, 0);
  FUNC_0(VAR_2, &VAR_7);
  VAR_3 = FUNC_1(VAR_2, &VAR_7);
  FUNC_2(VAR_2, &VAR_7);
  FUNC_4(VAR_5);

 } while (VAR_3 && VAR_4-- > 0);
}
