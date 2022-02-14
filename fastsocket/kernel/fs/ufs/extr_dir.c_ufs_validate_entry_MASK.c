
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_dir_entry {scalar_t__ d_reclen; } ;
struct super_block {int dummy; } ;


 struct ufs_dir_entry* FUNC_0 (struct super_block*,struct ufs_dir_entry*) ;

__attribute__((used)) static inline unsigned
FUNC_1(struct super_block *VAR_0, char *VAR_1,
     unsigned VAR_2, unsigned VAR_3)
{
 struct ufs_dir_entry *VAR_4 = (struct ufs_dir_entry*)(VAR_1 + VAR_2);
 struct ufs_dir_entry *VAR_5 = (struct ufs_dir_entry*)(VAR_1 + (VAR_2&VAR_3));
 while ((char*)VAR_5 < (char*)VAR_4) {
  if (VAR_5->d_reclen == 0)
   break;
  VAR_5 = FUNC_0(VAR_0, VAR_5);
 }
 return (char *)VAR_5 - VAR_1;
}
