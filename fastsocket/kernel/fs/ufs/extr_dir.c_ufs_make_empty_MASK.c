
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ufs_dir_entry {int d_name; void* d_reclen; void* d_ino; } ;
struct super_block {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_mode; int i_ino; struct address_space* i_mapping; struct super_block* i_sb; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {TYPE_1__* s_uspi; } ;
struct TYPE_3__ {unsigned int s_dirblksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (int *,struct address_space*,int ,unsigned int const,int ,struct page**,int *) ;
 void* FUNC_3 (struct super_block*,scalar_t__) ;
 void* FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (struct super_block*,void*) ;
 struct page* FUNC_6 (struct address_space*,int ) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (char*,int ,int ) ;
 scalar_t__ FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (struct page*,int ,unsigned int const) ;
 int FUNC_14 (struct super_block*,struct ufs_dir_entry*,int) ;
 int FUNC_15 (struct super_block*,struct ufs_dir_entry*,int ) ;
 int FUNC_16 (struct page*) ;

int FUNC_17(struct inode * VAR_3, struct inode *VAR_4)
{
 struct super_block * VAR_5 = VAR_4->i_sb;
 struct address_space *VAR_6 = VAR_3->i_mapping;
 struct page *VAR_7 = FUNC_6(VAR_6, 0);
 const unsigned int VAR_8 = FUNC_1(VAR_5)->s_uspi->s_dirblksize;
 struct ufs_dir_entry * VAR_9;
 char *VAR_10;
 int VAR_11;

 if (!VAR_7)
  return -VAR_1;

 VAR_11 = FUNC_2(((void*)0), VAR_6, 0, VAR_8,
    VAR_0, &VAR_7, ((void*)0));
 if (VAR_11) {
  FUNC_16(VAR_7);
  goto fail;
 }

 FUNC_7(VAR_7);
 VAR_10 = (char*)FUNC_10(VAR_7);
 FUNC_9(VAR_10, 0, VAR_2);

 VAR_9 = (struct ufs_dir_entry *) VAR_10;

 VAR_9->d_ino = FUNC_4(VAR_5, VAR_3->i_ino);
 FUNC_15(VAR_5, VAR_9, VAR_3->i_mode);
 FUNC_14(VAR_5, VAR_9, 1);
 VAR_9->d_reclen = FUNC_3(VAR_5, FUNC_0(1));
 FUNC_12 (VAR_9->d_name, ".");
 VAR_9 = (struct ufs_dir_entry *)
  ((char *)VAR_9 + FUNC_5(VAR_5, VAR_9->d_reclen));
 VAR_9->d_ino = FUNC_4(VAR_5, VAR_4->i_ino);
 FUNC_15(VAR_5, VAR_9, VAR_4->i_mode);
 VAR_9->d_reclen = FUNC_3(VAR_5, VAR_8 - FUNC_0(1));
 FUNC_14(VAR_5, VAR_9, 2);
 FUNC_12 (VAR_9->d_name, "..");
 FUNC_8(VAR_7);

 VAR_11 = FUNC_13(VAR_7, 0, VAR_8);
fail:
 FUNC_11(VAR_7);
 return VAR_11;
}
