
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_size; TYPE_1__* i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; } ;
struct TYPE_6__ {unsigned int s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct reiserfs_transaction_handle*,struct inode*,int) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*,struct page**,struct buffer_head**) ;
 int FUNC_3 (struct reiserfs_transaction_handle*,TYPE_1__*,int) ;
 int FUNC_4 (struct reiserfs_transaction_handle*,TYPE_1__*,int) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,struct inode*,struct page*,int) ;
 int FUNC_8 (TYPE_1__*,char*,char*,int) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*,unsigned long,unsigned int) ;

int FUNC_15(struct inode *VAR_3, int VAR_4)
{
 struct reiserfs_transaction_handle VAR_5;

 unsigned long VAR_6 = VAR_3->i_size & (VAR_2 - 1);
 unsigned VAR_7 = VAR_3->i_sb->s_blocksize;
 unsigned VAR_8;
 struct page *VAR_9 = ((void*)0);
 int VAR_10;
 struct buffer_head *VAR_11 = ((void*)0);
 int VAR_12;

 FUNC_10(VAR_3->i_sb);

 if (VAR_3->i_size > 0) {
  VAR_10 = FUNC_2(VAR_3, &VAR_9, &VAR_11);
  if (VAR_10) {



   if (VAR_10 != -VAR_0)
    FUNC_8(VAR_3->i_sb, "clm-6001",
            "grab_tail_page failed %d",
            VAR_10);
   VAR_9 = ((void*)0);
   VAR_11 = ((void*)0);
  }
 }
 VAR_10 = FUNC_3(&VAR_5, VAR_3->i_sb,
         VAR_1 * 2 + 1);
 if (VAR_10)
  goto out;
 FUNC_9(VAR_3);
 if (VAR_4)



  FUNC_0(&VAR_5, VAR_3, 1);
 VAR_12 = FUNC_7(&VAR_5, VAR_3, VAR_9, VAR_4);
 VAR_10 =
     FUNC_4(&VAR_5, VAR_3->i_sb, VAR_1 * 2 + 1);
 if (VAR_10)
  goto out;


 if (VAR_12) {
  VAR_10 = VAR_12;
    goto out;
 }

 if (VAR_4) {
  VAR_10 = FUNC_12(VAR_3, 1 );
  if (VAR_10)
   goto out;
 }

 if (VAR_9) {
  VAR_8 = VAR_6 & (VAR_7 - 1);

  if (VAR_8) {
   VAR_8 = VAR_7 - VAR_8;
   FUNC_14(VAR_9, VAR_6, VAR_8);
   if (FUNC_1(VAR_11) && VAR_11->b_blocknr != 0) {
    FUNC_5(VAR_11);
   }
  }
  FUNC_13(VAR_9);
  FUNC_6(VAR_9);
 }

 FUNC_11(VAR_3->i_sb);
 return 0;
      out:
 if (VAR_9) {
  FUNC_13(VAR_9);
  FUNC_6(VAR_9);
 }
 FUNC_11(VAR_3->i_sb);
 return VAR_10;
}
