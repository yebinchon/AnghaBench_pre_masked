
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * valid_pch; } ;
struct TYPE_3__ {int (* gt_pch_use_address ) (int *,int ,int,int ) ;} ;


 TYPE_2__* FUNC_0 (int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int,int ) ;

void
FUNC_2 (void)
{
  if (FUNC_0 (VAR_1)->valid_pch)
    {
      FUNC_0 (VAR_1)->valid_pch = ((void*)0);
      VAR_0.gt_pch_use_address (((void*)0), 0, -1, 0);
    }
}
