
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; int CTL; } ;
typedef TYPE_1__ ct_chan_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2 (ct_chan_t *VAR_2, int VAR_3)
{
 if (VAR_2->mode != VAR_1)
  return;
 if (VAR_3)
  FUNC_1 (VAR_2->CTL, FUNC_0 (VAR_2->CTL) | VAR_0);
 else
  FUNC_1 (VAR_2->CTL, FUNC_0 (VAR_2->CTL) & ~VAR_0);
}
