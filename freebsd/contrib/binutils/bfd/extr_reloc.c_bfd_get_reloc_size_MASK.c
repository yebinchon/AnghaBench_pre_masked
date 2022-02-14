
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; } ;
typedef TYPE_1__ reloc_howto_type ;


 int FUNC_0 () ;

unsigned int
FUNC_1 (reloc_howto_type *VAR_0)
{
  switch (VAR_0->size)
    {
    case 0: return 1;
    case 1: return 2;
    case 2: return 4;
    case 3: return 0;
    case 4: return 8;
    case 8: return 16;
    case -2: return 4;
    default: FUNC_0 ();
    }
}
