
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ mode; TYPE_3__* board; scalar_t__ num; } ;
typedef TYPE_2__ ct_chan_t ;
struct TYPE_5__ {unsigned long s1; unsigned long s0; } ;
struct TYPE_7__ {TYPE_1__ opt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

int FUNC_1 (ct_chan_t *VAR_1, unsigned long VAR_2)
{
 if (! (VAR_1->mode == VAR_0))
  return -1;
 if (VAR_1->num)
  VAR_1->board->opt.s1 = VAR_2;
 else
  VAR_1->board->opt.s0 = VAR_2;
 FUNC_0 (VAR_1->board);
 return 0;
}
