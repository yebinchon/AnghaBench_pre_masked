
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ valueT ;
typedef int val ;
typedef int bfd_vma ;


 int FUNC_0 () ;
 int FUNC_1 (char*,char*,long) ;
 int FUNC_2 (char*,scalar_t__) ;

void
FUNC_3 (char *VAR_0, valueT VAR_1)
{
  if (sizeof (VAR_1) <= sizeof (long))
    {
      FUNC_1 (VAR_0, "%ld", (long) VAR_1);
      return;
    }
  if (sizeof (VAR_1) <= sizeof (bfd_vma))
    {
      FUNC_2 (VAR_0, VAR_1);
      return;
    }
  FUNC_0 ();
}
