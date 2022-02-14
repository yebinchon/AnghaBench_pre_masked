
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_dir_entry {int d_ino; int d_reclen; } ;
struct page {int mapping; } ;
struct inode {int i_ctime; int i_mtime; int i_mode; int i_sb; int i_ino; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,unsigned int,int ,struct page**,int *) ;
 int FUNC_2 (int ,int ) ;
 unsigned int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*,int,unsigned int) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (int ,struct ufs_dir_entry*,int ) ;

void FUNC_11(struct inode *VAR_2, struct ufs_dir_entry *VAR_3,
    struct page *VAR_4, struct inode *VAR_5)
{
 loff_t VAR_6 = FUNC_7(VAR_4) +
   (char *) VAR_3 - (char *) FUNC_6(VAR_4);
 unsigned VAR_7 = FUNC_3(VAR_2->i_sb, VAR_3->d_reclen);
 int VAR_8;

 FUNC_4(VAR_4);
 VAR_8 = FUNC_1(((void*)0), VAR_4->mapping, VAR_6, VAR_7,
    VAR_0, &VAR_4, ((void*)0));
 FUNC_0(VAR_8);

 VAR_3->d_ino = FUNC_2(VAR_2->i_sb, VAR_5->i_ino);
 FUNC_10(VAR_2->i_sb, VAR_3, VAR_5->i_mode);

 VAR_8 = FUNC_8(VAR_4, VAR_6, VAR_7);
 FUNC_9(VAR_4);
 VAR_2->i_mtime = VAR_2->i_ctime = VAR_1;
 FUNC_5(VAR_2);
}
