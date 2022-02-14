
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ string; } ;
struct sec_merge_hash_entry {scalar_t__ len; TYPE_1__ root; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static inline int
FUNC_1 (const struct sec_merge_hash_entry *VAR_0,
    const struct sec_merge_hash_entry *VAR_1)
{
  if (VAR_0->len <= VAR_1->len)


    return 0;

  return FUNC_0 (VAR_0->root.string + (VAR_0->len - VAR_1->len),
   VAR_1->root.string, VAR_1->len) == 0;
}
