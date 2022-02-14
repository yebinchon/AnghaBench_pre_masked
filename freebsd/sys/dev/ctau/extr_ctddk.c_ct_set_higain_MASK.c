
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int higain; } ;
struct TYPE_5__ {scalar_t__ mode; int board; TYPE_1__ gopt; } ;
typedef TYPE_2__ ct_chan_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1 (ct_chan_t *VAR_1, int VAR_2)
{
 if (! (VAR_1->mode == VAR_0))
  return -1;
 VAR_1->gopt.higain = VAR_2 ? 1 : 0;
 FUNC_0 (VAR_1->board);
 return 0;
}
