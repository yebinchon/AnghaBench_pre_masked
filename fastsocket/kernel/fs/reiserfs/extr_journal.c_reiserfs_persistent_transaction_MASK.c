
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_refcount; } ;
struct TYPE_4__ {int j_persistent_trans; } ;
struct TYPE_3__ {struct reiserfs_transaction_handle* journal_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_3 (struct reiserfs_transaction_handle*) ;
 struct reiserfs_transaction_handle* FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (struct super_block*) ;

struct reiserfs_transaction_handle *FUNC_6(struct
            super_block
            *VAR_2,
            int VAR_3)
{
 int VAR_4;
 struct reiserfs_transaction_handle *VAR_5;




 if (FUNC_5(VAR_2)) {
  VAR_5 = VAR_1->journal_info;
  VAR_5->t_refcount++;
  FUNC_0(VAR_5->t_refcount < 2);

  return VAR_5;
 }
 VAR_5 = FUNC_4(sizeof(struct reiserfs_transaction_handle), VAR_0);
 if (!VAR_5)
  return ((void*)0);
 VAR_4 = FUNC_2(VAR_5, VAR_2, VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 FUNC_1(VAR_2)->j_persistent_trans++;
 return VAR_5;
}
