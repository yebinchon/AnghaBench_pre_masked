
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct nilfs_dir_entry {int name_len; int name; void* inode; void* rec_len; } ;
struct inode {int i_ino; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 struct page* FUNC_3 (struct address_space*,int ) ;
 void* FUNC_4 (struct page*,int ) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (void*,int ,unsigned int) ;
 unsigned int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct page*,struct address_space*,int ,unsigned int) ;
 int FUNC_10 (struct page*,struct address_space*,int ,unsigned int) ;
 int FUNC_11 (struct nilfs_dir_entry*,struct inode*) ;
 int FUNC_12 (struct page*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct page*) ;

int FUNC_15(struct inode *VAR_2, struct inode *VAR_3)
{
 struct address_space *VAR_4 = VAR_2->i_mapping;
 struct page *VAR_5 = FUNC_3(VAR_4, 0);
 unsigned VAR_6 = FUNC_8(VAR_2);
 struct nilfs_dir_entry *VAR_7;
 int VAR_8;
 void *VAR_9;

 if (!VAR_5)
  return -VAR_0;

 VAR_8 = FUNC_10(VAR_5, VAR_4, 0, VAR_6);
 if (FUNC_13(VAR_8)) {
  FUNC_14(VAR_5);
  goto fail;
 }
 VAR_9 = FUNC_4(VAR_5, VAR_1);
 FUNC_7(VAR_9, 0, VAR_6);
 VAR_7 = (struct nilfs_dir_entry *)VAR_9;
 VAR_7->name_len = 1;
 VAR_7->rec_len = FUNC_1(FUNC_0(1));
 FUNC_6(VAR_7->name, ".\0\0", 4);
 VAR_7->inode = FUNC_2(VAR_2->i_ino);
 FUNC_11(VAR_7, VAR_2);

 VAR_7 = (struct nilfs_dir_entry *)(VAR_9 + FUNC_0(1));
 VAR_7->name_len = 2;
 VAR_7->rec_len = FUNC_1(VAR_6 - FUNC_0(1));
 VAR_7->inode = FUNC_2(VAR_3->i_ino);
 FUNC_6(VAR_7->name, "..\0", 4);
 FUNC_11(VAR_7, VAR_2);
 FUNC_5(VAR_9, VAR_1);
 VAR_8 = FUNC_9(VAR_5, VAR_4, 0, VAR_6);
fail:
 FUNC_12(VAR_5);
 return VAR_8;
}
