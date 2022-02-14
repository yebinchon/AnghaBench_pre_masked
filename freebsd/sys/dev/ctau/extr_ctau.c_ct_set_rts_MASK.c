
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rts; int CTL; } ;
typedef TYPE_1__ ct_chan_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;

void FUNC_2 (ct_chan_t *VAR_1, int VAR_2)
{
 VAR_1->rts = (VAR_2 != 0);
 if (VAR_1->rts)
  FUNC_1 (VAR_1->CTL, FUNC_0 (VAR_1->CTL) & ~VAR_0);
 else
  FUNC_1 (VAR_1->CTL, FUNC_0 (VAR_1->CTL) | VAR_0);
}
