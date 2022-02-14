
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long bfd_size_type ;
struct TYPE_3__ {int memory; } ;
typedef TYPE_1__ bfd ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,unsigned long) ;

void *
FUNC_2 (bfd *VAR_2, bfd_size_type VAR_3, bfd_size_type VAR_4)
{
  void *VAR_5;

  if ((VAR_3 | VAR_4) >= VAR_0
      && VAR_4 != 0
      && VAR_3 > ~(bfd_size_type) 0 / VAR_4)
    {
      FUNC_0 (VAR_1);
      return ((void*)0);
    }

  VAR_4 *= VAR_3;

  if (VAR_4 != (unsigned long) VAR_4)
    {
      FUNC_0 (VAR_1);
      return ((void*)0);
    }

  VAR_5 = FUNC_1 (VAR_2->memory, (unsigned long) VAR_4);
  if (VAR_5 == ((void*)0))
    FUNC_0 (VAR_1);
  return VAR_5;
}
