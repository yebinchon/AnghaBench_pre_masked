
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_palloc_req {TYPE_1__* pr_entry_bh; int pr_entry_nr; } ;
struct nilfs_dat_entry {void* de_blocknr; void* de_end; void* de_start; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int b_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (struct inode*,struct nilfs_palloc_req*) ;
 struct nilfs_dat_entry* FUNC_4 (struct inode*,int ,TYPE_1__*,void*) ;
 int FUNC_5 (struct inode*,struct nilfs_palloc_req*) ;

void FUNC_6(struct inode *VAR_3, struct nilfs_palloc_req *VAR_4)
{
 struct nilfs_dat_entry *VAR_5;
 void *VAR_6;

 VAR_6 = FUNC_1(VAR_4->pr_entry_bh->b_page, VAR_0);
 VAR_5 = FUNC_4(VAR_3, VAR_4->pr_entry_nr,
          VAR_4->pr_entry_bh, VAR_6);
 VAR_5->de_start = FUNC_0(VAR_2);
 VAR_5->de_end = FUNC_0(VAR_1);
 VAR_5->de_blocknr = FUNC_0(0);
 FUNC_2(VAR_6, VAR_0);

 FUNC_5(VAR_3, VAR_4);
 FUNC_3(VAR_3, VAR_4);
}
