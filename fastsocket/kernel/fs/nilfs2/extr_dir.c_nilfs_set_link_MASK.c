
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct nilfs_dir_entry {int inode; int rec_len; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct page*,struct address_space*,unsigned int,unsigned int) ;
 int FUNC_6 (struct page*,struct address_space*,unsigned int,unsigned int) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct nilfs_dir_entry*,struct inode*) ;
 scalar_t__ FUNC_9 (struct page*) ;

void FUNC_10(struct inode *VAR_1, struct nilfs_dir_entry *VAR_2,
      struct page *VAR_3, struct inode *VAR_4)
{
 unsigned VAR_5 = (char *) VAR_2 - (char *) FUNC_9(VAR_3);
 unsigned VAR_6 = VAR_5 + FUNC_2(VAR_2->rec_len);
 struct address_space *VAR_7 = VAR_3->mapping;
 int VAR_8;

 FUNC_3(VAR_3);
 VAR_8 = FUNC_6(VAR_3, VAR_7, VAR_5, VAR_6);
 FUNC_0(VAR_8);
 VAR_2->inode = FUNC_1(VAR_4->i_ino);
 FUNC_8(VAR_2, VAR_4);
 VAR_8 = FUNC_5(VAR_3, VAR_7, VAR_5, VAR_6);
 FUNC_7(VAR_3);
 VAR_1->i_mtime = VAR_1->i_ctime = VAR_0;

 FUNC_4(VAR_1);
}
