
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_dir_entry {int dummy; } ;
struct page {int dummy; } ;
struct inode {int i_sb; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct inode*,int ) ;
 struct ufs_dir_entry* FUNC_3 (int ,struct ufs_dir_entry*) ;

struct ufs_dir_entry *FUNC_4(struct inode *VAR_0, struct page **VAR_1)
{
 struct page *VAR_2 = FUNC_2(VAR_0, 0);
 struct ufs_dir_entry *VAR_3 = ((void*)0);

 if (!FUNC_0(VAR_2)) {
  VAR_3 = FUNC_3(VAR_0->i_sb,
        (struct ufs_dir_entry *)FUNC_1(VAR_2));
  *VAR_1 = VAR_2;
 }
 return VAR_3;
}
