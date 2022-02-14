
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char dwarf_vma ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int) ;

dwarf_vma
FUNC_3 (unsigned char *VAR_0, int VAR_1)
{
  switch (VAR_1)
    {
    case 1:
      return *VAR_0;

    case 2:
      return ((unsigned int) (VAR_0[0]))
 | (((unsigned int) (VAR_0[1])) << 8);

    case 4:
      return ((unsigned long) (VAR_0[0]))
 | (((unsigned long) (VAR_0[1])) << 8)
 | (((unsigned long) (VAR_0[2])) << 16)
 | (((unsigned long) (VAR_0[3])) << 24);

    case 8:
      if (sizeof (dwarf_vma) == 8)
 return ((dwarf_vma) (VAR_0[0]))
   | (((dwarf_vma) (VAR_0[1])) << 8)
   | (((dwarf_vma) (VAR_0[2])) << 16)
   | (((dwarf_vma) (VAR_0[3])) << 24)
   | (((dwarf_vma) (VAR_0[4])) << 32)
   | (((dwarf_vma) (VAR_0[5])) << 40)
   | (((dwarf_vma) (VAR_0[6])) << 48)
   | (((dwarf_vma) (VAR_0[7])) << 56);
      else if (sizeof (dwarf_vma) == 4)



 return ((unsigned long) (VAR_0[0]))
   | (((unsigned long) (VAR_0[1])) << 8)
   | (((unsigned long) (VAR_0[2])) << 16)
   | (((unsigned long) (VAR_0[3])) << 24);

    default:
      FUNC_2 (FUNC_0("Unhandled data length: %d\n"), VAR_1);
      FUNC_1 ();
    }
}
