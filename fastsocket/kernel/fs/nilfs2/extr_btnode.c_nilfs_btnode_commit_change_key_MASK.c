
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {scalar_t__ index; } ;
struct nilfs_btnode_chkey_ctxt {scalar_t__ oldkey; scalar_t__ newkey; struct buffer_head* bh; struct buffer_head* newbh; } ;
struct buffer_head {scalar_t__ b_blocknr; struct page* b_page; } ;
struct address_space {int tree_lock; int page_tree; } ;
typedef scalar_t__ __u64 ;


 int FUNC_0 (struct page*,char*,unsigned long long,unsigned long long) ;
 int VAR_0 ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*,struct buffer_head*) ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct page*) ;

void FUNC_10(struct address_space *VAR_1,
        struct nilfs_btnode_chkey_ctxt *VAR_2)
{
 struct buffer_head *VAR_3 = VAR_2->bh, *VAR_4 = VAR_2->newbh;
 __u64 VAR_5 = VAR_2->oldkey, VAR_6 = VAR_2->newkey;
 struct page *VAR_7;

 if (VAR_5 == VAR_6)
  return;

 if (VAR_4 == ((void*)0)) {
  VAR_7 = VAR_3->b_page;
  if (FUNC_8(VAR_5 != VAR_7->index))
   FUNC_0(VAR_7,
           "invalid oldkey %lld (newkey=%lld)",
           (unsigned long long)VAR_5,
           (unsigned long long)VAR_6);
  FUNC_2(VAR_3);

  FUNC_6(&VAR_1->tree_lock);
  FUNC_4(&VAR_1->page_tree, VAR_5);
  FUNC_5(&VAR_1->page_tree, VAR_6,
       VAR_0);
  FUNC_7(&VAR_1->tree_lock);

  VAR_7->index = VAR_3->b_blocknr = VAR_6;
  FUNC_9(VAR_7);
 } else {
  FUNC_3(VAR_4, VAR_3);
  FUNC_2(VAR_4);

  VAR_4->b_blocknr = VAR_6;
  VAR_2->bh = VAR_4;
  FUNC_1(VAR_3);
 }
}
