
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct file_hash_entry {int dummy; } ;
struct TYPE_4__ {scalar_t__ file_hash_entries_used; scalar_t__ file_hash_entries_allocated; struct file_hash_entry* file_hash_entries; } ;
typedef TYPE_1__ cpp_reader ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static struct file_hash_entry *
FUNC_1 (cpp_reader *VAR_0)
{
  if (VAR_0->file_hash_entries_used == VAR_0->file_hash_entries_allocated)
    FUNC_0 (VAR_0);

  return &VAR_0->file_hash_entries[VAR_0->file_hash_entries_used++];
}
