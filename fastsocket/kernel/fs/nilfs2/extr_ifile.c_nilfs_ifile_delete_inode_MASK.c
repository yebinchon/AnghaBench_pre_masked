
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct nilfs_palloc_req {TYPE_1__* pr_entry_bh; int pr_entry_nr; } ;
struct nilfs_inode {scalar_t__ i_flags; } ;
struct inode {int dummy; } ;
typedef int ino_t ;
struct TYPE_5__ {int b_page; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct inode*,struct nilfs_palloc_req*) ;
 struct nilfs_inode* FUNC_5 (struct inode*,int ,TYPE_1__*,void*) ;
 int FUNC_6 (struct inode*,struct nilfs_palloc_req*) ;
 int FUNC_7 (struct inode*,int ,int ,TYPE_1__**) ;
 int FUNC_8 (struct inode*,struct nilfs_palloc_req*) ;

int FUNC_9(struct inode *VAR_1, ino_t VAR_2)
{
 struct nilfs_palloc_req VAR_3 = {
  .pr_entry_nr = VAR_2, .pr_entry_bh = ((void*)0)
 };
 struct nilfs_inode *VAR_4;
 void *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_8(VAR_1, &VAR_3);
 if (!VAR_6) {
  VAR_6 = FUNC_7(VAR_1, VAR_3.pr_entry_nr, 0,
         &VAR_3.pr_entry_bh);
  if (VAR_6 < 0)
   FUNC_4(VAR_1, &VAR_3);
 }
 if (VAR_6 < 0) {
  FUNC_0(VAR_3.pr_entry_bh);
  return VAR_6;
 }

 VAR_5 = FUNC_1(VAR_3.pr_entry_bh->b_page, VAR_0);
 VAR_4 = FUNC_5(VAR_1, VAR_3.pr_entry_nr,
       VAR_3.pr_entry_bh, VAR_5);
 VAR_4->i_flags = 0;
 FUNC_2(VAR_5, VAR_0);

 FUNC_3(VAR_3.pr_entry_bh);
 FUNC_0(VAR_3.pr_entry_bh);

 FUNC_6(VAR_1, &VAR_3);

 return 0;
}
