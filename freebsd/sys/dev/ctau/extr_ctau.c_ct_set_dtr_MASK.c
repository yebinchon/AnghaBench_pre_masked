
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dtr; TYPE_1__* board; scalar_t__ num; } ;
typedef TYPE_2__ ct_chan_t ;
struct TYPE_4__ {int bcr1; int port; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2 (ct_chan_t *VAR_2, int VAR_3)
{
 if (VAR_3) {
  VAR_2->dtr = 1;
  VAR_2->board->bcr1 |= VAR_2->num ? VAR_1 : VAR_0;
 } else {
  VAR_2->dtr = 0;
  VAR_2->board->bcr1 &= ~(VAR_2->num ? VAR_1 : VAR_0);
 }
 FUNC_1 (FUNC_0(VAR_2->board->port), VAR_2->board->bcr1);
}
