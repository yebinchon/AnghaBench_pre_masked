
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_palloc_req {TYPE_1__* pr_entry_bh; int pr_entry_nr; } ;
struct nilfs_dat_entry {void* de_blocknr; void* de_start; } ;
struct inode {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int b_page; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (struct inode*,struct nilfs_palloc_req*) ;
 int FUNC_4 (struct inode*) ;
 struct nilfs_dat_entry* FUNC_5 (struct inode*,int ,TYPE_1__*,void*) ;

void FUNC_6(struct inode *VAR_1, struct nilfs_palloc_req *VAR_2,
       sector_t VAR_3)
{
 struct nilfs_dat_entry *VAR_4;
 void *VAR_5;

 VAR_5 = FUNC_1(VAR_2->pr_entry_bh->b_page, VAR_0);
 VAR_4 = FUNC_5(VAR_1, VAR_2->pr_entry_nr,
          VAR_2->pr_entry_bh, VAR_5);
 VAR_4->de_start = FUNC_0(FUNC_4(VAR_1));
 VAR_4->de_blocknr = FUNC_0(VAR_3);
 FUNC_2(VAR_5, VAR_0);

 FUNC_3(VAR_1, VAR_2);
}
