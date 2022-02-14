
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct nilfs_transaction_info {scalar_t__ ti_magic; scalar_t__ ti_count; int ti_flags; struct nilfs_transaction_info* ti_save; } ;
struct TYPE_6__ {TYPE_1__* s_nilfs; } ;
struct TYPE_5__ {struct nilfs_transaction_info* journal_info; } ;
struct TYPE_4__ {int ns_segctor_sem; } ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (struct super_block*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_2 (int ,struct nilfs_transaction_info*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;

void FUNC_4(struct super_block *VAR_4)
{
 struct nilfs_transaction_info *VAR_5 = VAR_2->journal_info;

 FUNC_0(VAR_5 == ((void*)0) || VAR_5->ti_magic != VAR_1);
 if (VAR_5->ti_count > 0) {
  VAR_5->ti_count--;
  return;
 }
 FUNC_3(&FUNC_1(VAR_4)->s_nilfs->ns_segctor_sem);

 VAR_2->journal_info = VAR_5->ti_save;
 if (VAR_5->ti_flags & VAR_0)
  FUNC_2(VAR_3, VAR_5);
}
