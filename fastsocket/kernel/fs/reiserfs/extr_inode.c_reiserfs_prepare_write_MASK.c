
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct reiserfs_transaction_handle {int t_refcount; int t_trans_id; } ;
struct page {TYPE_1__* mapping; } ;
struct inode {int i_sb; } ;
struct file {int dummy; } ;
struct TYPE_4__ {struct reiserfs_transaction_handle* journal_info; } ;
struct TYPE_3__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*,unsigned int,unsigned int,int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct reiserfs_transaction_handle*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct file *VAR_2, struct page *VAR_3,
      unsigned VAR_4, unsigned VAR_5)
{
 struct inode *VAR_6 = VAR_3->mapping->host;
 int VAR_7;
 int VAR_8 = 0;

 FUNC_5(VAR_6->i_sb);
 FUNC_2(VAR_3);
 if (FUNC_4(VAR_6->i_sb)) {
  struct reiserfs_transaction_handle *VAR_9;
  VAR_9 = (struct reiserfs_transaction_handle *)VAR_0->
      journal_info;
  FUNC_0(!VAR_9->t_refcount);
  FUNC_0(!VAR_9->t_trans_id);
  VAR_8 = VAR_9->t_refcount;
  VAR_9->t_refcount++;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_1);
 if (VAR_7 && FUNC_4(VAR_6->i_sb)) {
  struct reiserfs_transaction_handle *VAR_10 = VAR_0->journal_info;
  if (VAR_10->t_refcount > VAR_8) {
   if (VAR_8)
    VAR_10->t_refcount--;
   else {
    int VAR_11;
    FUNC_6(VAR_6->i_sb);
    VAR_11 = FUNC_3(VAR_10);
    FUNC_7(VAR_6->i_sb);
    if (VAR_11)
     VAR_7 = VAR_11;
   }
  }
 }
 return VAR_7;

}
