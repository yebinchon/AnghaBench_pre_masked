
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_segctor_sem; } ;
struct super_block {int dummy; } ;
struct nilfs_transaction_info {int ti_flags; } ;
struct nilfs_sc_info {int sc_flags; scalar_t__ sc_flush_request; } ;
struct nilfs_sb_info {struct the_nilfs* s_nilfs; } ;
struct TYPE_2__ {struct nilfs_transaction_info* journal_info; } ;


 struct nilfs_sb_info* FUNC_0 (struct super_block*) ;
 struct nilfs_sc_info* FUNC_1 (struct nilfs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nilfs_sc_info*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct super_block *VAR_3)
{
 struct nilfs_sb_info *VAR_4 = FUNC_0(VAR_3);
 struct nilfs_sc_info *VAR_5 = FUNC_1(VAR_4);
 struct the_nilfs *VAR_6 = VAR_4->s_nilfs;

 if (!VAR_5 || !VAR_5->sc_flush_request)
  return;

 FUNC_5(VAR_0, &VAR_5->sc_flags);
 FUNC_7(&VAR_6->ns_segctor_sem);

 FUNC_2(&VAR_6->ns_segctor_sem);
 if (VAR_5->sc_flush_request &&
     FUNC_6(VAR_0, &VAR_5->sc_flags)) {
  struct nilfs_transaction_info *VAR_7 = VAR_2->journal_info;

  VAR_7->ti_flags |= VAR_1;
  FUNC_4(VAR_5);
  VAR_7->ti_flags &= ~VAR_1;
 }
 FUNC_3(&VAR_6->ns_segctor_sem);
}
