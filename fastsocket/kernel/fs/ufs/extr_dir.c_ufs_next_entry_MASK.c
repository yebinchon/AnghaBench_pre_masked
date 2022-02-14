
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_dir_entry {int d_reclen; } ;
struct super_block {int dummy; } ;


 int FUNC_0 (struct super_block*,int ) ;

__attribute__((used)) static inline struct ufs_dir_entry *
FUNC_1(struct super_block *VAR_0, struct ufs_dir_entry *VAR_1)
{
 return (struct ufs_dir_entry *)((char *)VAR_1 +
     FUNC_0(VAR_0, VAR_1->d_reclen));
}
