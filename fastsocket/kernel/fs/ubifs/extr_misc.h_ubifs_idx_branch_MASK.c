
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int key_len; } ;
struct ubifs_idx_node {scalar_t__ branches; } ;
struct ubifs_branch {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline
struct ubifs_branch *FUNC_0(const struct ubifs_info *VAR_1,
          const struct ubifs_idx_node *VAR_2,
          int VAR_3)
{
 return (struct ubifs_branch *)((void *)VAR_2->branches +
           (VAR_0 + VAR_1->key_len) * VAR_3);
}
