
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mode; TYPE_3__* board; scalar_t__ num; } ;
typedef TYPE_2__ ct_chan_t ;
struct TYPE_6__ {int clk1; int clk0; } ;
struct TYPE_8__ {TYPE_1__ opt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2 (ct_chan_t *VAR_2, int VAR_3)
{
 if (VAR_2->num)
  VAR_2->board->opt.clk1 = VAR_3;
 else
  VAR_2->board->opt.clk0 = VAR_3;
 if (VAR_2->mode == VAR_0) {
  FUNC_0 (VAR_2->board);
  return 0;
 } else if (VAR_2->mode == VAR_1) {
  FUNC_1 (VAR_2->board);
  return 0;
 } else
  return -1;
}
