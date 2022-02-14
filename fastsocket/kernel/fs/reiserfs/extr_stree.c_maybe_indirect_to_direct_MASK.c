
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct treepath {int dummy; } ;
struct super_block {int s_blocksize; } ;
struct reiserfs_transaction_handle {int t_trans_id; } ;
struct page {int dummy; } ;
struct inode {int i_size; int i_count; struct super_block* i_sb; } ;
struct cpu_key {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {int i_flags; } ;


 int FUNC_0 (int) ;
 char VAR_0 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (struct reiserfs_transaction_handle*,struct inode*,struct page*,struct treepath*,struct cpu_key const*,int,char*) ;
 int FUNC_4 (struct treepath*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct reiserfs_transaction_handle *VAR_2,
        struct inode *VAR_3,
        struct page *VAR_4,
        struct treepath *VAR_5,
        const struct cpu_key *VAR_6,
        loff_t VAR_7, char *VAR_8)
{
 struct super_block *VAR_9 = VAR_3->i_sb;
 int VAR_10 = VAR_9->s_blocksize;
 int VAR_11;
 FUNC_0(!VAR_2->t_trans_id);
 FUNC_0(VAR_7 != VAR_3->i_size);





 if (FUNC_2(&VAR_3->i_count) > 1 ||
     !FUNC_5(VAR_3) ||
     !VAR_4 || (FUNC_1(VAR_3)->i_flags & VAR_1)) {

  *VAR_8 = VAR_0;
  VAR_11 =
      VAR_10 - (VAR_7 & (VAR_10 - 1));
  FUNC_4(VAR_5);
  return VAR_11;
 }



 return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
          VAR_7, VAR_8);
}
