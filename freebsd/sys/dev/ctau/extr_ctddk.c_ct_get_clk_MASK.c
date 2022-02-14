
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* board; scalar_t__ num; } ;
typedef TYPE_3__ ct_chan_t ;
struct TYPE_5__ {int clk1; int clk0; } ;
struct TYPE_6__ {TYPE_1__ opt; } ;



int FUNC_0 (ct_chan_t *VAR_0)
{
 return VAR_0->num ? VAR_0->board->opt.clk1 : VAR_0->board->opt.clk0;
}
