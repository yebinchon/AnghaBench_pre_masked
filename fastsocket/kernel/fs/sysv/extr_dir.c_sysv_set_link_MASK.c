
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_dir_entry {int inode; } ;
struct page {struct address_space* mapping; } ;
struct inode {int i_ctime; int i_mtime; int i_ino; int i_sb; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct address_space*,int,int ,int ,struct page**,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct page*,int,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;

void FUNC_10(struct sysv_dir_entry *VAR_3, struct page *VAR_4,
 struct inode *VAR_5)
{
 struct address_space *VAR_6 = VAR_4->mapping;
 struct inode *VAR_7 = VAR_6->host;
 loff_t VAR_8 = FUNC_9(VAR_4) +
   (char *)VAR_3-(char*)FUNC_8(VAR_4);
 int VAR_9;

 FUNC_6(VAR_4);
 VAR_9 = FUNC_2(((void*)0), VAR_6, VAR_8, VAR_2,
    VAR_0, &VAR_4, ((void*)0));
 FUNC_0(VAR_9);
 VAR_3->inode = FUNC_3(FUNC_1(VAR_5->i_sb), VAR_5->i_ino);
 VAR_9 = FUNC_4(VAR_4, VAR_8, VAR_2);
 FUNC_5(VAR_4);
 VAR_7->i_mtime = VAR_7->i_ctime = VAR_1;
 FUNC_7(VAR_7);
}
