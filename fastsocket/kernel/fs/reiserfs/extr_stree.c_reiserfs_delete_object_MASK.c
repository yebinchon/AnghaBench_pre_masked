
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reiserfs_transaction_handle {int t_super; int t_trans_id; } ;
struct inode {scalar_t__ i_size; } ;
typedef int __le32 ;
struct TYPE_4__ {TYPE_1__* s_rs; } ;
struct TYPE_3__ {int s_inode_generation; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,struct inode*,int ) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,struct inode*,int *,int ) ;

int FUNC_7(struct reiserfs_transaction_handle *VAR_0,
      struct inode *VAR_1)
{
 int VAR_2;
 VAR_1->i_size = 0;
 FUNC_0(!VAR_0->t_trans_id);


 VAR_2 =
     FUNC_6(VAR_0, VAR_1, ((void*)0), 0 );
 if (VAR_2)
  return VAR_2;
 FUNC_5(VAR_0, VAR_1, FUNC_1(VAR_1));

 return VAR_2;
}
