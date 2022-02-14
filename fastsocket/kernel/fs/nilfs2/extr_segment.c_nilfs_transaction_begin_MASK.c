
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_segctor_sem; } ;
struct super_block {int dummy; } ;
struct nilfs_transaction_info {int ti_flags; struct nilfs_transaction_info* ti_save; } ;
struct nilfs_sb_info {struct the_nilfs* s_nilfs; } ;
struct TYPE_2__ {struct nilfs_transaction_info* journal_info; } ;


 int VAR_0 ;
 struct nilfs_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct nilfs_transaction_info*) ;
 scalar_t__ FUNC_3 (struct the_nilfs*) ;
 int FUNC_4 (struct nilfs_transaction_info*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct super_block *VAR_4,
       struct nilfs_transaction_info *VAR_5,
       int VAR_6)
{
 struct nilfs_sb_info *VAR_7;
 struct the_nilfs *VAR_8;
 int VAR_9 = FUNC_4(VAR_5);

 if (FUNC_5(VAR_9 < 0))
  return VAR_9;
 if (VAR_9 > 0)
  return 0;

 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = VAR_7->s_nilfs;
 FUNC_1(&VAR_8->ns_segctor_sem);
 if (VAR_6 && FUNC_3(VAR_8)) {
  FUNC_6(&VAR_8->ns_segctor_sem);
  VAR_9 = -VAR_0;
  goto failed;
 }
 return 0;

 failed:
 VAR_5 = VAR_2->journal_info;
 VAR_2->journal_info = VAR_5->ti_save;
 if (VAR_5->ti_flags & VAR_1)
  FUNC_2(VAR_3, VAR_5);
 return VAR_9;
}
