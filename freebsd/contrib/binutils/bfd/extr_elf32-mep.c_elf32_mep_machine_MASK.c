
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int bfd ;
struct TYPE_2__ {int e_flags; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1 (bfd * VAR_3)
{
  switch (FUNC_0 (VAR_3)->e_flags & VAR_0)
    {
    default: break;
    case 131: return VAR_1;
    case 130: return VAR_1;
    case 129: return VAR_1;
    case 128: return VAR_2;
    }

  return VAR_1;
}
