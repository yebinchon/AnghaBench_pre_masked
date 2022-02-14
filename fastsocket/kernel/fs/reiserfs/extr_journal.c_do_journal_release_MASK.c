
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; } ;
struct reiserfs_transaction_handle {int t_trans_id; } ;
struct reiserfs_journal {int j_work; } ;
typedef int myth ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*) ;
 struct reiserfs_journal* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *) ;
 int * VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,struct super_block*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,struct super_block*,int) ;
 int FUNC_10 (struct reiserfs_transaction_handle*,struct super_block*,int ) ;
 int FUNC_11 (struct reiserfs_transaction_handle*,int ,int) ;
 scalar_t__ FUNC_12 (struct reiserfs_journal*) ;
 int VAR_3 ;
 int FUNC_13 (struct super_block*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct reiserfs_transaction_handle *VAR_4,
         struct super_block *VAR_5, int VAR_6)
{
 struct reiserfs_transaction_handle VAR_7;
 int VAR_8 = 0;
 struct reiserfs_journal *VAR_9 = FUNC_2(VAR_5);



 if (!VAR_6 && !(VAR_5->s_flags & VAR_1)) {

  FUNC_0(!VAR_4->t_trans_id);
  FUNC_5(VAR_4, VAR_5, 10, VAR_0);


  if (!FUNC_8(&VAR_7, VAR_5, 1)) {
   FUNC_13(VAR_5,
           FUNC_1(VAR_5),
           1);
   FUNC_10(&VAR_7, VAR_5,
        FUNC_1(VAR_5));
   FUNC_5(&VAR_7, VAR_5, 1, VAR_0);
   VAR_8 = 1;
  }
 }


 if (!VAR_6 && FUNC_12(VAR_9)) {
  FUNC_11(&VAR_7, 0, sizeof(VAR_7));
  if (!FUNC_9(&VAR_7, VAR_5, 1)) {
   FUNC_13(VAR_5,
           FUNC_1(VAR_5),
           1);
   FUNC_10(&VAR_7, VAR_5,
        FUNC_1(VAR_5));
   FUNC_5(&VAR_7, VAR_5, 1, VAR_0);
  }
 }

 VAR_3--;

 FUNC_3(&FUNC_2(VAR_5)->j_work);
 FUNC_6(VAR_2);
 if (!VAR_3) {
  FUNC_4(VAR_2);
  VAR_2 = ((void*)0);
 }

 FUNC_7(VAR_5);

 return 0;
}
