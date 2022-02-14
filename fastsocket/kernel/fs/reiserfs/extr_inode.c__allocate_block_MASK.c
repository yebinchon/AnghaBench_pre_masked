
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct treepath {int dummy; } ;
struct reiserfs_transaction_handle {int t_trans_id; } ;
struct inode {int dummy; } ;
typedef int sector_t ;
typedef int b_blocknr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct reiserfs_transaction_handle*,struct inode*,int *,struct treepath*,int ) ;
 int FUNC_2 (struct reiserfs_transaction_handle*,struct inode*,int *,struct treepath*,int ) ;

__attribute__((used)) static inline int FUNC_3(struct reiserfs_transaction_handle *VAR_1,
      sector_t VAR_2,
      struct inode *VAR_3,
      b_blocknr_t * VAR_4,
      struct treepath *VAR_5, int VAR_6)
{
 FUNC_0(!VAR_1->t_trans_id);







 return FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5,
      VAR_2);
}
