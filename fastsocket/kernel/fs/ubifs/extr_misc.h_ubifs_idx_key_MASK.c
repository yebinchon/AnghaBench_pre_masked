
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;
struct ubifs_idx_node {scalar_t__ branches; } ;
struct ubifs_branch {scalar_t__ key; } ;



__attribute__((used)) static inline void *FUNC_0(const struct ubifs_info *VAR_0,
      const struct ubifs_idx_node *VAR_1)
{
 return (void *)((struct ubifs_branch *)VAR_1->branches)->key;
}
