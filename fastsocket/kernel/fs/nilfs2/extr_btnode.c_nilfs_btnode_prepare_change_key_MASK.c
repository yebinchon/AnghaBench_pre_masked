
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nilfs_btnode_chkey_ctxt {scalar_t__ oldkey; scalar_t__ newkey; struct buffer_head* newbh; struct buffer_head* bh; } ;
struct inode {scalar_t__ i_blkbits; } ;
struct buffer_head {TYPE_1__* b_page; } ;
struct address_space {int tree_lock; int page_tree; } ;
typedef scalar_t__ __u64 ;
struct TYPE_5__ {scalar_t__ index; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_1 (struct address_space*) ;
 int FUNC_2 (TYPE_1__*,char*,unsigned long long,unsigned long long) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct address_space*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct address_space*,scalar_t__,int ,struct buffer_head**,int) ;
 int FUNC_7 (int *,scalar_t__,TYPE_1__*) ;
 int FUNC_8 (int) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (TYPE_1__*) ;

int FUNC_14(struct address_space *VAR_4,
        struct nilfs_btnode_chkey_ctxt *VAR_5)
{
 struct buffer_head *VAR_6, *VAR_7;
 struct inode *VAR_8 = FUNC_1(VAR_4);
 __u64 VAR_9 = VAR_5->oldkey, VAR_10 = VAR_5->newkey;
 int VAR_11;

 if (VAR_9 == VAR_10)
  return 0;

 VAR_6 = VAR_5->bh;
 VAR_5->newbh = ((void*)0);

 if (VAR_8->i_blkbits == VAR_2) {
  FUNC_5(VAR_6->b_page);




retry:
  VAR_11 = FUNC_8(VAR_1 & ~VAR_3);
  if (VAR_11)
   goto failed_unlock;

  if (FUNC_12(VAR_9 != VAR_6->b_page->index))
   FUNC_2(VAR_6->b_page,
           "invalid oldkey %lld (newkey=%lld)",
           (unsigned long long)VAR_9,
           (unsigned long long)VAR_10);

  FUNC_10(&VAR_4->tree_lock);
  VAR_11 = FUNC_7(&VAR_4->page_tree, VAR_10, VAR_6->b_page);
  FUNC_11(&VAR_4->tree_lock);






  FUNC_9();
  if (!VAR_11)
   return 0;
  else if (VAR_11 != -VAR_0)
   goto failed_unlock;

  VAR_11 = FUNC_3(VAR_4, VAR_10, VAR_10);
  if (!VAR_11)
   goto retry;

  FUNC_13(VAR_6->b_page);
 }

 VAR_11 = FUNC_6(VAR_4, VAR_10, 0, &VAR_7, 1);
 if (FUNC_4(!VAR_11)) {
  FUNC_0(VAR_7 == VAR_6);
  VAR_5->newbh = VAR_7;
 }
 return VAR_11;

 failed_unlock:
 FUNC_13(VAR_6->b_page);
 return VAR_11;
}
