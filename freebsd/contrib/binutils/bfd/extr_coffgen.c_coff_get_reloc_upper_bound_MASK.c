
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sec_ptr ;
typedef int bfd ;
typedef int arelent ;
struct TYPE_3__ {int reloc_count; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;

long
FUNC_2 (bfd *VAR_2, sec_ptr VAR_3)
{
  if (FUNC_0 (VAR_2) != VAR_1)
    {
      FUNC_1 (VAR_0);
      return -1;
    }
  return (VAR_3->reloc_count + 1) * sizeof (arelent *);
}
