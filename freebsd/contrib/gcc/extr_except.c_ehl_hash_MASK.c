
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehl_map_entry {int label; } ;
typedef int const hashval_t ;


 int const FUNC_0 (int ) ;

__attribute__((used)) static hashval_t
FUNC_1 (const void *VAR_0)
{
  struct ehl_map_entry *VAR_1 = (struct ehl_map_entry *) VAR_0;


  const hashval_t VAR_2 = 0x9e3779b9;
  return FUNC_0 (VAR_1->label) * VAR_2;
}
