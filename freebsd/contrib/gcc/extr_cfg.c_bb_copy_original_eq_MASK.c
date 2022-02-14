
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct htab_bb_copy_original_entry {scalar_t__ index1; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  struct htab_bb_copy_original_entry *VAR_2
    = ((struct htab_bb_copy_original_entry *)VAR_0);
  struct htab_bb_copy_original_entry *VAR_3
    = ((struct htab_bb_copy_original_entry *)VAR_1);

  return VAR_2->index1 == VAR_3->index1;
}
