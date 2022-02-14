
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysv_dir_entry {int name; void* inode; } ;
struct page {int dummy; } ;
struct inode {int i_ino; int i_sb; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,struct address_space*,int ,int,int ,struct page**,int *) ;
 void* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct page*,int ,int) ;
 struct page* FUNC_4 (struct address_space*,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (char*,int ,int ) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct page*) ;

int FUNC_12(struct inode *VAR_4, struct inode *VAR_5)
{
 struct address_space *VAR_6 = VAR_4->i_mapping;
 struct page *VAR_7 = FUNC_4(VAR_6, 0);
 struct sysv_dir_entry * VAR_8;
 char *VAR_9;
 int VAR_10;

 if (!VAR_7)
  return -VAR_1;
 VAR_10 = FUNC_1(((void*)0), VAR_6, 0, 2 * VAR_3,
    VAR_0, &VAR_7, ((void*)0));
 if (VAR_10) {
  FUNC_11(VAR_7);
  goto fail;
 }
 FUNC_5(VAR_7);

 VAR_9 = (char*)FUNC_8(VAR_7);
 FUNC_7(VAR_9, 0, VAR_2);

 VAR_8 = (struct sysv_dir_entry *) VAR_9;
 VAR_8->inode = FUNC_2(FUNC_0(VAR_4->i_sb), VAR_4->i_ino);
 FUNC_10(VAR_8->name,".");
 VAR_8++;
 VAR_8->inode = FUNC_2(FUNC_0(VAR_4->i_sb), VAR_5->i_ino);
 FUNC_10(VAR_8->name,"..");

 FUNC_6(VAR_7);
 VAR_10 = FUNC_3(VAR_7, 0, 2 * VAR_3);
fail:
 FUNC_9(VAR_7);
 return VAR_10;
}
