
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Elf_Scn {scalar_t__ s_ndx; } ;



__attribute__((used)) static int
FUNC_0(struct _Elf_Scn *VAR_0, struct _Elf_Scn *VAR_1)
{

 if (VAR_0->s_ndx < VAR_1->s_ndx)
  return (-1);
 if (VAR_0->s_ndx > VAR_1->s_ndx)
  return (1);
 return (0);
}
