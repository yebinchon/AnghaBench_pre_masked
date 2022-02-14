
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct alloc_stat {scalar_t__ call_site; } ;



__attribute__((used)) static int FUNC_0(struct alloc_stat *VAR_0, struct alloc_stat *VAR_1)
{
 if (VAR_0->call_site < VAR_1->call_site)
  return -1;
 else if (VAR_0->call_site > VAR_1->call_site)
  return 1;
 return 0;
}
