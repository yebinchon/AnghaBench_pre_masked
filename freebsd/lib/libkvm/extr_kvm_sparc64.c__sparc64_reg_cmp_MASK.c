
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sparc64_dump_reg {scalar_t__ dr_pa; scalar_t__ dr_size; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct sparc64_dump_reg *VAR_2, *VAR_3;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;
 if (VAR_2->dr_pa < VAR_3->dr_pa)
  return (-1);
 else if (VAR_2->dr_pa >= VAR_3->dr_pa + VAR_3->dr_size)
  return (1);
 else
  return (0);
}
