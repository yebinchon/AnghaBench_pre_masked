
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_req {int pr_desc_bh; int pr_bitmap_bh; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;

void FUNC_3(struct inode *VAR_0,
         struct nilfs_palloc_req *VAR_1)
{
 FUNC_1(VAR_1->pr_bitmap_bh);
 FUNC_1(VAR_1->pr_desc_bh);
 FUNC_2(VAR_0);

 FUNC_0(VAR_1->pr_bitmap_bh);
 FUNC_0(VAR_1->pr_desc_bh);
}
