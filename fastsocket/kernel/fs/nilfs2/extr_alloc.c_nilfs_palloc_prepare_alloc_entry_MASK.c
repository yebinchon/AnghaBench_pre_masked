
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_req {unsigned long pr_entry_nr; struct buffer_head* pr_bitmap_bh; struct buffer_head* pr_desc_bh; } ;
struct nilfs_palloc_group_desc {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;


 int VAR_0 ;
 int FUNC_0 (struct buffer_head*) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned char* FUNC_3 (struct inode*,struct buffer_head*,void*) ;
 struct nilfs_palloc_group_desc* FUNC_4 (struct inode*,unsigned long,struct buffer_head*,void*) ;
 unsigned long FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,unsigned long,unsigned long,unsigned char*,unsigned long) ;
 int FUNC_7 (struct inode*,unsigned long,int,struct buffer_head**) ;
 int FUNC_8 (struct inode*,unsigned long,int,struct buffer_head**) ;
 int FUNC_9 (struct inode*,unsigned long,unsigned long*) ;
 int FUNC_10 (struct inode*,unsigned long,struct nilfs_palloc_group_desc*,int) ;
 scalar_t__ FUNC_11 (struct inode*,unsigned long,struct nilfs_palloc_group_desc*) ;
 unsigned long FUNC_12 (struct inode*) ;
 unsigned long FUNC_13 (struct inode*) ;
 unsigned long FUNC_14 (struct inode*,unsigned long,unsigned long) ;

int FUNC_15(struct inode *VAR_1,
         struct nilfs_palloc_req *VAR_2)
{
 struct buffer_head *VAR_3, *VAR_4;
 struct nilfs_palloc_group_desc *VAR_5;
 unsigned char *VAR_6;
 void *VAR_7, *VAR_8;
 unsigned long VAR_9, VAR_10, VAR_11;
 unsigned long VAR_12, VAR_13;
 unsigned long VAR_14, VAR_15, VAR_16;
 unsigned long VAR_17, VAR_18;
 int VAR_19, VAR_20;

 VAR_11 = FUNC_12(VAR_1);
 VAR_10 = VAR_11 - 1;
 VAR_9 = FUNC_9(VAR_1, VAR_2->pr_entry_nr, &VAR_12);
 VAR_15 = FUNC_5(VAR_1);
 VAR_16 = FUNC_13(VAR_1);

 for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17 += VAR_14) {
  if (VAR_9 >= VAR_11) {

   VAR_9 = 0;
   VAR_10 = FUNC_9(VAR_1, VAR_2->pr_entry_nr,
            &VAR_13) - 1;
  }
  VAR_20 = FUNC_8(VAR_1, VAR_9, 1, &VAR_3);
  if (VAR_20 < 0)
   return VAR_20;
  VAR_7 = FUNC_1(VAR_3->b_page);
  VAR_5 = FUNC_4(
   VAR_1, VAR_9, VAR_3, VAR_7);
  VAR_14 = FUNC_14(VAR_1, VAR_9,
          VAR_10);
  for (VAR_18 = 0; VAR_18 < VAR_14; VAR_18++, VAR_5++, VAR_9++) {
   if (FUNC_11(VAR_1, VAR_9, VAR_5)
       > 0) {
    VAR_20 = FUNC_7(
     VAR_1, VAR_9, 1, &VAR_4);
    if (VAR_20 < 0)
     goto out_desc;
    VAR_8 = FUNC_1(VAR_4->b_page);
    VAR_6 = FUNC_3(
     VAR_1, VAR_4, VAR_8);
    VAR_19 = FUNC_6(
     VAR_1, VAR_9, VAR_12, VAR_6,
     VAR_15);
    if (VAR_19 >= 0) {

     FUNC_10(
      VAR_1, VAR_9, VAR_5, -1);
     VAR_2->pr_entry_nr =
      VAR_15 * VAR_9 + VAR_19;
     FUNC_2(VAR_3->b_page);
     FUNC_2(VAR_4->b_page);

     VAR_2->pr_desc_bh = VAR_3;
     VAR_2->pr_bitmap_bh = VAR_4;
     return 0;
    }
    FUNC_2(VAR_4->b_page);
    FUNC_0(VAR_4);
   }

   VAR_12 = 0;
  }

  FUNC_2(VAR_3->b_page);
  FUNC_0(VAR_3);
 }


 return -VAR_0;

 out_desc:
 FUNC_2(VAR_3->b_page);
 FUNC_0(VAR_3);
 return VAR_20;
}
