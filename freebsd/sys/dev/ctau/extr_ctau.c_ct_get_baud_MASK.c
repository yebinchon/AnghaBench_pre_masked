
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ txs; } ;
struct TYPE_7__ {int rate; } ;
struct TYPE_8__ {scalar_t__ mode; unsigned long baud; TYPE_1__ hopt; TYPE_2__ gopt; } ;
typedef TYPE_3__ ct_chan_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_0 (TYPE_3__*) ;

unsigned long FUNC_1 (ct_chan_t *VAR_3)
{
 unsigned long VAR_4;
 unsigned long VAR_5;

 if (VAR_3->mode == VAR_2) {
  VAR_4 = 1000 * VAR_3->gopt.rate;
 } else if (VAR_3->mode == VAR_1) {
  VAR_5 = FUNC_0 (VAR_3);
  for (VAR_4=0; VAR_5; VAR_5 >>= 1)
   if (VAR_5 & 1)
    VAR_4 += 64000;
 } else
  VAR_4 = (VAR_3->hopt.txs == VAR_0) ? VAR_3->baud : 0;
 return VAR_4;
}
