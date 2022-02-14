
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_cpu_info {int flags; int isa; int * name; } ;


 int VAR_0 ;
 struct mips_cpu_info const* VAR_1 ;

__attribute__((used)) static const struct mips_cpu_info *
FUNC_0 (int VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_1[VAR_3].name != ((void*)0); VAR_3++)
    if ((VAR_1[VAR_3].flags & VAR_0)
 && VAR_2 == VAR_1[VAR_3].isa)
      return (&VAR_1[VAR_3]);

  return ((void*)0);
}
