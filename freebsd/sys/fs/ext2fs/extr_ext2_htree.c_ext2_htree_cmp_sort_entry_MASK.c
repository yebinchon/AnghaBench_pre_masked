
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ext2fs_htree_sort_entry {scalar_t__ h_hash; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct ext2fs_htree_sort_entry *VAR_2, *VAR_3;

 VAR_2 = (const struct ext2fs_htree_sort_entry *)VAR_0;
 VAR_3 = (const struct ext2fs_htree_sort_entry *)VAR_1;

 if (VAR_2->h_hash < VAR_3->h_hash)
  return (-1);
 if (VAR_2->h_hash > VAR_3->h_hash)
  return (1);
 return (0);
}
