
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ team; } ;
struct TYPE_4__ {TYPE_1__ ts; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 () ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_2__* FUNC_1 () ;

unsigned
FUNC_2 (unsigned VAR_3)
{

  if (VAR_3 == 1)
    return 1;



  if (FUNC_1()->ts.team && !VAR_1)
    return 1;


  if (VAR_3 == 0)
    VAR_3 = VAR_2;



  if (VAR_0)
    {
      unsigned VAR_4 = FUNC_0 ();
      if (VAR_4 < VAR_3)
 return VAR_4;
    }

  return VAR_3;
}
