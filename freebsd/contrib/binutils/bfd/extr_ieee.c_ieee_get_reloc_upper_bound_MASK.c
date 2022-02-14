
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sec_ptr ;
typedef int bfd ;
typedef int arelent ;
struct TYPE_3__ {int flags; int reloc_count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static long
FUNC_1 (bfd *VAR_1, sec_ptr VAR_2)
{
  if ((VAR_2->flags & VAR_0) != 0)
    return 0;
  if (! FUNC_0 (VAR_1))
    return -1;
  return (VAR_2->reloc_count + 1) * sizeof (arelent *);
}
