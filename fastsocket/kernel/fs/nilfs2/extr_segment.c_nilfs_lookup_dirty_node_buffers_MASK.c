
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagevec {int * pages; } ;
struct address_space {int dummy; } ;
struct nilfs_inode_info {struct address_space i_btnode_cache; } ;
struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; int b_assoc_buffers; } ;
typedef int pgoff_t ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *,struct list_head*) ;
 struct buffer_head* FUNC_5 (int ) ;
 unsigned int FUNC_6 (struct pagevec*) ;
 int FUNC_7 (struct pagevec*,int ) ;
 scalar_t__ FUNC_8 (struct pagevec*,struct address_space*,int *,int ,int ) ;
 int FUNC_9 (struct pagevec*) ;

__attribute__((used)) static void FUNC_10(struct inode *VAR_2,
         struct list_head *VAR_3)
{
 struct nilfs_inode_info *VAR_4 = FUNC_0(VAR_2);
 struct address_space *VAR_5 = &VAR_4->i_btnode_cache;
 struct pagevec VAR_6;
 struct buffer_head *VAR_7, *VAR_8;
 unsigned int VAR_9;
 pgoff_t VAR_10 = 0;

 FUNC_7(&VAR_6, 0);

 while (FUNC_8(&VAR_6, VAR_5, &VAR_10, VAR_0,
      VAR_1)) {
  for (VAR_9 = 0; VAR_9 < FUNC_6(&VAR_6); VAR_9++) {
   VAR_7 = VAR_8 = FUNC_5(VAR_6.pages[VAR_9]);
   do {
    if (FUNC_1(VAR_7)) {
     FUNC_3(VAR_7);
     FUNC_4(&VAR_7->b_assoc_buffers,
            VAR_3);
    }
    VAR_7 = VAR_7->b_this_page;
   } while (VAR_7 != VAR_8);
  }
  FUNC_9(&VAR_6);
  FUNC_2();
 }
}
