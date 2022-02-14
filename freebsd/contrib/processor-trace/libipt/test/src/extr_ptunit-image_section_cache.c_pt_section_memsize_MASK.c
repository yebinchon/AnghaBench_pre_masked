
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long uint64_t ;
struct pt_section {unsigned long long size; unsigned long long bcsize; scalar_t__ mcount; } ;


 int VAR_0 ;

int FUNC_0(struct pt_section *VAR_1, uint64_t *VAR_2)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 *VAR_2 = VAR_1->mcount ? VAR_1->size + VAR_1->bcsize : 0ull;

 return 0;
}
