
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_palloc_req {int * pr_desc_bh; int * pr_bitmap_bh; scalar_t__ pr_entry_nr; } ;
struct inode {int dummy; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct inode *VAR_0,
       struct nilfs_palloc_req *VAR_1)
{
 FUNC_0(VAR_1->pr_bitmap_bh);
 FUNC_0(VAR_1->pr_desc_bh);

 VAR_1->pr_entry_nr = 0;
 VAR_1->pr_bitmap_bh = ((void*)0);
 VAR_1->pr_desc_bh = ((void*)0);
}
