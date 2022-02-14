
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct pt_section {int mapping; } ;


 int VAR_0 ;

int FUNC_0(const struct pt_section *VAR_1, uint64_t *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 if (!VAR_1->mapping)
  return -VAR_0;

 *VAR_2 = 0ull;

 return 0;
}
