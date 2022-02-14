
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_palloc_req {TYPE_1__* pr_entry_bh; int pr_entry_nr; } ;
struct nilfs_dat_entry {int de_blocknr; int de_start; } ;
struct inode {int dummy; } ;
typedef scalar_t__ sector_t ;
typedef void* __u64 ;
struct TYPE_2__ {int b_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,struct nilfs_palloc_req*) ;
 int FUNC_5 (struct inode*,struct nilfs_palloc_req*,int ) ;
 struct nilfs_dat_entry* FUNC_6 (struct inode*,int ,TYPE_1__*,void*) ;
 int FUNC_7 (struct inode*,struct nilfs_palloc_req*) ;

int FUNC_8(struct inode *VAR_2, struct nilfs_palloc_req *VAR_3)
{
 struct nilfs_dat_entry *VAR_4;
 __u64 VAR_5;
 sector_t VAR_6;
 void *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_5(VAR_2, VAR_3, 0);
 if (VAR_8 < 0) {
  FUNC_0(VAR_8 == -VAR_0);
  return VAR_8;
 }

 VAR_7 = FUNC_1(VAR_3->pr_entry_bh->b_page, VAR_1);
 VAR_4 = FUNC_6(VAR_2, VAR_3->pr_entry_nr,
          VAR_3->pr_entry_bh, VAR_7);
 VAR_5 = FUNC_3(VAR_4->de_start);
 VAR_6 = FUNC_3(VAR_4->de_blocknr);
 FUNC_2(VAR_7, VAR_1);

 if (VAR_6 == 0) {
  VAR_8 = FUNC_7(VAR_2, VAR_3);
  if (VAR_8 < 0) {
   FUNC_4(VAR_2, VAR_3);
   return VAR_8;
  }
 }

 return 0;
}
