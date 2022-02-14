
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct inode {int i_state; int i_sb; scalar_t__ i_blocks; int i_data; } ;
struct TYPE_2__ {scalar_t__ k_objectid; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct reiserfs_transaction_handle*,int ,int) ;
 scalar_t__ FUNC_4 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (struct inode*) ;

void FUNC_14(struct inode *VAR_2)
{

 int VAR_3 =
     VAR_1 * 2 +
     2 * FUNC_1(VAR_2->i_sb);
 struct reiserfs_transaction_handle VAR_4;
 int VAR_5;

 FUNC_12(&VAR_2->i_data, 0);

 FUNC_9(VAR_2->i_sb);


 if (!(VAR_2->i_state & VAR_0) && FUNC_0(VAR_2)->k_objectid != 0) {
  FUNC_6(VAR_2);

  if (FUNC_3(&VAR_4, VAR_2->i_sb, VAR_3))
   goto out;
  FUNC_8(VAR_2);

  FUNC_7(&VAR_4, VAR_2);

  VAR_5 = FUNC_5(&VAR_4, VAR_2);




  if (!VAR_5)
   FUNC_13(VAR_2);

  if (FUNC_4(&VAR_4, VAR_2->i_sb, VAR_3))
   goto out;




  if (VAR_5)
      goto out;


  FUNC_11(VAR_2, 0 );

 } else {

  ;
 }
      out:
 FUNC_2(VAR_2);
 VAR_2->i_blocks = 0;
 FUNC_10(VAR_2->i_sb);
}
