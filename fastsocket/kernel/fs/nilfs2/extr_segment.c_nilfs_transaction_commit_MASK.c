
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nilfs_transaction_info {scalar_t__ ti_magic; int ti_flags; scalar_t__ ti_count; struct nilfs_transaction_info* ti_save; } ;
struct nilfs_sc_info {scalar_t__ sc_watermark; } ;
struct nilfs_sb_info {TYPE_1__* s_nilfs; } ;
struct TYPE_4__ {struct nilfs_transaction_info* journal_info; } ;
struct TYPE_3__ {int ns_segctor_sem; int ns_ndirtyblks; } ;


 int FUNC_0 (int) ;
 struct nilfs_sb_info* FUNC_1 (struct super_block*) ;
 struct nilfs_sc_info* FUNC_2 (struct nilfs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_2__* VAR_4 ;
 int FUNC_4 (int ,struct nilfs_transaction_info*) ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct nilfs_sc_info*,int ) ;
 int FUNC_7 (struct nilfs_sc_info*) ;
 int VAR_5 ;
 int FUNC_8 (int *) ;

int FUNC_9(struct super_block *VAR_6)
{
 struct nilfs_transaction_info *VAR_7 = VAR_4->journal_info;
 struct nilfs_sb_info *VAR_8;
 struct nilfs_sc_info *VAR_9;
 int VAR_10 = 0;

 FUNC_0(VAR_7 == ((void*)0) || VAR_7->ti_magic != VAR_2);
 VAR_7->ti_flags |= VAR_0;
 if (VAR_7->ti_count > 0) {
  VAR_7->ti_count--;
  return 0;
 }
 VAR_8 = FUNC_1(VAR_6);
 VAR_9 = FUNC_2(VAR_8);
 if (VAR_9 != ((void*)0)) {
  if (VAR_7->ti_flags & VAR_0)
   FUNC_7(VAR_9);
  if (FUNC_3(&VAR_8->s_nilfs->ns_ndirtyblks) >
      VAR_9->sc_watermark)
   FUNC_6(VAR_9, 0);
 }
 FUNC_8(&VAR_8->s_nilfs->ns_segctor_sem);
 VAR_4->journal_info = VAR_7->ti_save;

 if (VAR_7->ti_flags & VAR_3)
  VAR_10 = FUNC_5(VAR_6);
 if (VAR_7->ti_flags & VAR_1)
  FUNC_4(VAR_5, VAR_7);
 return VAR_10;
}
