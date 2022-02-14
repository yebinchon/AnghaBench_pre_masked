
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_table_entry {scalar_t__ start_offset; } ;


 struct unw_table_entry* FUNC_0 (void*,unsigned long*,unsigned long*) ;

void *
FUNC_1 (void *VAR_0)
{
  struct unw_table_entry *VAR_1;
  unsigned long VAR_2, VAR_3;

  VAR_1 = FUNC_0 (VAR_0, &VAR_2, &VAR_3);
  if (VAR_1 == ((void*)0))
    return ((void*)0);
  else
    return (void *)(VAR_2 + VAR_1->start_offset);
}
