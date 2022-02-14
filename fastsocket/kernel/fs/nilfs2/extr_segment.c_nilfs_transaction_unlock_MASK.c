
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nilfs_transaction_info {scalar_t__ ti_magic; scalar_t__ ti_count; int ti_garbage; struct nilfs_transaction_info* ti_save; } ;
struct nilfs_sb_info {TYPE_1__* s_nilfs; } ;
struct TYPE_4__ {struct nilfs_transaction_info* journal_info; } ;
struct TYPE_3__ {int ns_segctor_sem; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nilfs_sb_info*,int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nilfs_sb_info *VAR_2)
{
 struct nilfs_transaction_info *VAR_3 = VAR_1->journal_info;

 FUNC_0(VAR_3 == ((void*)0) || VAR_3->ti_magic != VAR_0);
 FUNC_0(VAR_3->ti_count > 0);

 FUNC_3(&VAR_2->s_nilfs->ns_segctor_sem);
 VAR_1->journal_info = VAR_3->ti_save;
 if (!FUNC_1(&VAR_3->ti_garbage))
  FUNC_2(VAR_2, &VAR_3->ti_garbage, 0);
}
