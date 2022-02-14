
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_stat {scalar_t__ ptr; } ;



__attribute__((used)) static int FUNC_0(struct alloc_stat *VAR_0, struct alloc_stat *VAR_1)
{
 if (VAR_0->ptr < VAR_1->ptr)
  return -1;
 else if (VAR_0->ptr > VAR_1->ptr)
  return 1;
 return 0;
}
