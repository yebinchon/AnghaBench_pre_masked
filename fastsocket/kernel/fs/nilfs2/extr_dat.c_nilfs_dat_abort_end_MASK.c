
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_palloc_req {TYPE_1__* pr_entry_bh; int pr_entry_nr; } ;
struct nilfs_dat_entry {int de_blocknr; int de_start; } ;
struct inode {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int b_page; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (void*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*,struct nilfs_palloc_req*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,struct nilfs_palloc_req*) ;
 struct nilfs_dat_entry* FUNC_6 (struct inode*,int ,TYPE_1__*,void*) ;

void FUNC_7(struct inode *VAR_1, struct nilfs_palloc_req *VAR_2)
{
 struct nilfs_dat_entry *VAR_3;
 __u64 VAR_4;
 sector_t VAR_5;
 void *VAR_6;

 VAR_6 = FUNC_0(VAR_2->pr_entry_bh->b_page, VAR_0);
 VAR_3 = FUNC_6(VAR_1, VAR_2->pr_entry_nr,
          VAR_2->pr_entry_bh, VAR_6);
 VAR_4 = FUNC_2(VAR_3->de_start);
 VAR_5 = FUNC_2(VAR_3->de_blocknr);
 FUNC_1(VAR_6, VAR_0);

 if (VAR_4 == FUNC_4(VAR_1) && VAR_5 == 0)
  FUNC_5(VAR_1, VAR_2);
 FUNC_3(VAR_1, VAR_2);
}
