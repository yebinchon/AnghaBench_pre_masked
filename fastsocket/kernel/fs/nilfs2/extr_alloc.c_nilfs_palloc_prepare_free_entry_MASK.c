
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_req {struct buffer_head* pr_bitmap_bh; struct buffer_head* pr_desc_bh; int pr_entry_nr; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct inode*,unsigned long,int,struct buffer_head**) ;
 int FUNC_2 (struct inode*,unsigned long,int,struct buffer_head**) ;
 unsigned long FUNC_3 (struct inode*,int ,unsigned long*) ;

int FUNC_4(struct inode *VAR_0,
        struct nilfs_palloc_req *VAR_1)
{
 struct buffer_head *VAR_2, *VAR_3;
 unsigned long VAR_4, VAR_5;
 int VAR_6;

 VAR_4 = FUNC_3(VAR_0, VAR_1->pr_entry_nr, &VAR_5);
 VAR_6 = FUNC_2(VAR_0, VAR_4, 1, &VAR_2);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_6 = FUNC_1(VAR_0, VAR_4, 1, &VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2);
  return VAR_6;
 }

 VAR_1->pr_desc_bh = VAR_2;
 VAR_1->pr_bitmap_bh = VAR_3;
 return 0;
}
