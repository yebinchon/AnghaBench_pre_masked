
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nilfs_transaction_info {int ti_flags; int ti_garbage; int ti_magic; struct nilfs_transaction_info* ti_save; scalar_t__ ti_count; } ;
struct nilfs_sb_info {TYPE_1__* s_nilfs; } ;
struct TYPE_7__ {struct nilfs_transaction_info* journal_info; } ;
struct TYPE_6__ {int sc_flags; } ;
struct TYPE_5__ {int ns_segctor_sem; } ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct nilfs_sb_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct nilfs_transaction_info*) ;
 TYPE_3__* VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct nilfs_sb_info *VAR_5,
       struct nilfs_transaction_info *VAR_6,
       int VAR_7)
{
 struct nilfs_transaction_info *VAR_8 = VAR_4->journal_info;

 FUNC_2(VAR_8);
 VAR_6->ti_flags = VAR_3;
 VAR_6->ti_count = 0;
 VAR_6->ti_save = VAR_8;
 VAR_6->ti_magic = VAR_2;
 FUNC_0(&VAR_6->ti_garbage);
 VAR_4->journal_info = VAR_6;

 for (;;) {
  FUNC_3(&VAR_5->s_nilfs->ns_segctor_sem);
  if (!FUNC_5(VAR_0, &FUNC_1(VAR_5)->sc_flags))
   break;

  FUNC_4(FUNC_1(VAR_5));

  FUNC_6(&VAR_5->s_nilfs->ns_segctor_sem);
  FUNC_7();
 }
 if (VAR_7)
  VAR_6->ti_flags |= VAR_1;
}
