
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long bfd_size_type ;
struct TYPE_3__ {int memory; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ,unsigned long) ;

void *
FUNC_2 (bfd *VAR_1, bfd_size_type VAR_2)
{
  void *VAR_3;

  if (VAR_2 != (unsigned long) VAR_2)
    {
      FUNC_0 (VAR_0);
      return ((void*)0);
    }

  VAR_3 = FUNC_1 (VAR_1->memory, (unsigned long) VAR_2);
  if (VAR_3 == ((void*)0))
    FUNC_0 (VAR_0);
  return VAR_3;
}
