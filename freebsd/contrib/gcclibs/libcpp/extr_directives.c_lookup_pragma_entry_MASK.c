
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pragma_entry {struct pragma_entry* next; int const* pragma; } ;
typedef int cpp_hashnode ;



__attribute__((used)) static struct pragma_entry *
FUNC_0 (struct pragma_entry *VAR_0, const cpp_hashnode *VAR_1)
{
  while (VAR_0 && VAR_0->pragma != VAR_1)
    VAR_0 = VAR_0->next;

  return VAR_0;
}
