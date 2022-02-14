
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct page {struct address_space* mapping; } ;
struct ocfs2_write_ctxt {int w_num_pages; struct page** w_pages; struct page* w_target_page; } ;
struct inode {int i_sb; } ;
struct address_space {struct inode* host; } ;
typedef unsigned long loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 struct page* FUNC_0 (struct address_space*,unsigned long,int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static int FUNC_7(struct address_space *VAR_4,
          struct ocfs2_write_ctxt *VAR_5,
          u32 VAR_6, loff_t VAR_7, int VAR_8,
          struct page *VAR_9)
{
 int VAR_10 = 0, VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14;
 struct inode *VAR_15 = VAR_4->host;

 VAR_13 = VAR_7 >> VAR_3;






 if (VAR_8) {
  VAR_5->w_num_pages = FUNC_4(VAR_15->i_sb);
  VAR_12 = FUNC_3(VAR_15->i_sb, VAR_6);
 } else {
  VAR_5->w_num_pages = 1;
  VAR_12 = VAR_13;
 }

 for(VAR_11 = 0; VAR_11 < VAR_5->w_num_pages; VAR_11++) {
  VAR_14 = VAR_12 + VAR_11;

  if (VAR_14 == VAR_13 && VAR_9) {





   FUNC_1(VAR_9);

   if (VAR_9->mapping != VAR_4) {
    FUNC_6(VAR_9);





    VAR_10 = -VAR_0;
    FUNC_2(VAR_10);
    goto out;
   }

   FUNC_5(VAR_9);
   VAR_5->w_pages[VAR_11] = VAR_9;
  } else {
   VAR_5->w_pages[VAR_11] = FUNC_0(VAR_4, VAR_14,
            VAR_2);
   if (!VAR_5->w_pages[VAR_11]) {
    VAR_10 = -VAR_1;
    FUNC_2(VAR_10);
    goto out;
   }
  }

  if (VAR_14 == VAR_13)
   VAR_5->w_target_page = VAR_5->w_pages[VAR_11];
 }
out:
 return VAR_10;
}
