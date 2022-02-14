
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vma ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;


 int FUNC_0 (char*,char*,long) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_2 (bfd_vma VAR_0, char *VAR_1, bfd_boolean VAR_2, bfd_boolean VAR_3)
{
  if (sizeof (VAR_0) <= sizeof (unsigned long))
    {
      if (VAR_3)
 FUNC_0 (VAR_1, "0x%lx", (unsigned long) VAR_0);
      else if (VAR_2)
 FUNC_0 (VAR_1, "%lu", (unsigned long) VAR_0);
      else
 FUNC_0 (VAR_1, "%ld", (long) VAR_0);
    }
  else
    {
      VAR_1[0] = '0';
      VAR_1[1] = 'x';
      FUNC_1 (VAR_1 + 2, VAR_0);
    }
}
