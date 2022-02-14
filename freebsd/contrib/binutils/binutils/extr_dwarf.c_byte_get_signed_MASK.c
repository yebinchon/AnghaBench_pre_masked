
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dwarf_vma ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned char*,int) ;

__attribute__((used)) static dwarf_vma
FUNC_2 (unsigned char *VAR_0, int VAR_1)
{
  dwarf_vma VAR_2 = FUNC_1 (VAR_0, VAR_1);

  switch (VAR_1)
    {
    case 1:
      return (VAR_2 ^ 0x80) - 0x80;
    case 2:
      return (VAR_2 ^ 0x8000) - 0x8000;
    case 4:
      return (VAR_2 ^ 0x80000000) - 0x80000000;
    case 8:
      return VAR_2;
    default:
      FUNC_0 ();
    }
}
