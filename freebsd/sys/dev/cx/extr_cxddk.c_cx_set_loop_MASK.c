
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int llm; } ;
struct TYPE_7__ {TYPE_1__ tcor; } ;
struct TYPE_8__ {int txbaud; TYPE_2__ opt; } ;
typedef TYPE_3__ cx_chan_t ;


 int FUNC_0 (TYPE_3__*,int ) ;

void FUNC_1 (cx_chan_t *VAR_0, int VAR_1)
{
 if (! VAR_0->txbaud)
  return;

 VAR_0->opt.tcor.llm = VAR_1 ? 1 : 0;
 FUNC_0 (VAR_0, VAR_0->txbaud);
}
