
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct func_map {scalar_t__ addr; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct func_map *VAR_2 = VAR_0;
 const struct func_map *VAR_3 = VAR_1;

 if ((VAR_2->addr == VAR_3->addr) ||

     (VAR_2->addr > VAR_3->addr &&
      VAR_2->addr < (VAR_3+1)->addr))
  return 0;

 if (VAR_2->addr < VAR_3->addr)
  return -1;

 return 1;
}
