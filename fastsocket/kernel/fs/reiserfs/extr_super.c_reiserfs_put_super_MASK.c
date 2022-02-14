
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_flags; int * s_fs_info; scalar_t__ s_dirt; } ;
struct reiserfs_transaction_handle {scalar_t__ t_trans_id; } ;
struct TYPE_2__ {scalar_t__ reserved_blocks; int s_mount_state; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,struct super_block*,int ) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,struct super_block*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (struct super_block*) ;
 int FUNC_10 (struct super_block*) ;
 int FUNC_11 (struct super_block*,int ,int) ;
 int FUNC_12 (struct super_block*) ;
 int FUNC_13 (struct super_block*,char*,char*,scalar_t__) ;
 int FUNC_14 (struct super_block*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 () ;

__attribute__((used)) static void FUNC_17(struct super_block *VAR_1)
{
 struct reiserfs_transaction_handle VAR_2;
 VAR_2.t_trans_id = 0;

 FUNC_8();

 if (VAR_1->s_dirt)
  FUNC_14(VAR_1);


 if (!(VAR_1->s_flags & VAR_0)) {
  if (!FUNC_4(&VAR_2, VAR_1, 10)) {
   FUNC_11(VAR_1, FUNC_1(VAR_1),
           1);
   FUNC_15(FUNC_2(VAR_1),
         FUNC_0(VAR_1)->s_mount_state);
   FUNC_5(&VAR_2, VAR_1, FUNC_1(VAR_1));
  }
 }




 FUNC_6(&VAR_2, VAR_1);

 FUNC_10(VAR_1);

 FUNC_3(FUNC_1(VAR_1));

 FUNC_9(VAR_1);

 if (FUNC_0(VAR_1)->reserved_blocks != 0) {
  FUNC_13(VAR_1, "green-2005", "reserved blocks left %d",
     FUNC_0(VAR_1)->reserved_blocks);
 }

 FUNC_12(VAR_1);

 FUNC_7(VAR_1->s_fs_info);
 VAR_1->s_fs_info = ((void*)0);

 FUNC_16();
}
