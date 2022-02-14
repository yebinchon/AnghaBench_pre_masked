
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunos_dynamic_info {int dynrel_count; int valid; } ;
typedef int bfd ;
typedef int arelent ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static long
FUNC_3 (bfd *VAR_1)
{
  struct sunos_dynamic_info *VAR_2;

  if (! FUNC_2 (VAR_1))
    return -1;

  VAR_2 = (struct sunos_dynamic_info *) FUNC_1 (VAR_1);
  if (! VAR_2->valid)
    {
      FUNC_0 (VAR_0);
      return -1;
    }

  return (VAR_2->dynrel_count + 1) * sizeof (arelent *);
}
