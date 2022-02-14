
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_hash_entry {struct file_hash_entry* next; int const* start_dir; } ;
typedef int cpp_dir ;



__attribute__((used)) static struct file_hash_entry *
FUNC_0 (struct file_hash_entry *VAR_0, const cpp_dir *VAR_1)
{
  while (VAR_0 && VAR_0->start_dir != VAR_1)
    VAR_0 = VAR_0->next;

  return VAR_0;
}
