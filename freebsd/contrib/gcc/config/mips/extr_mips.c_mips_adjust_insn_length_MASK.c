
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_4__ {TYPE_1__* machine; } ;
struct TYPE_3__ {int ignore_hazard_length_p; } ;


 scalar_t__ FUNC_0 (int ) ;



 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

int
FUNC_5 (rtx VAR_2, int VAR_3)
{



  if (FUNC_0 (VAR_2) || (VAR_0 ? FUNC_4 (VAR_2) : FUNC_2 (VAR_2)))
    VAR_3 += 4;


  if (!VAR_1->machine->ignore_hazard_length_p && FUNC_1 (VAR_2) >= 0)
    switch (FUNC_3 (VAR_2))
      {
      case 128:
 break;

      case 130:
 VAR_3 += 4;
 break;

      case 129:
 VAR_3 += 8;
 break;
      }


  if (VAR_0)
    VAR_3 /= 2;

  return VAR_3;
}
