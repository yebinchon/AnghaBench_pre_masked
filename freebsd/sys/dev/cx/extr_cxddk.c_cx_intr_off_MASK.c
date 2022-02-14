
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bcr0; int bcr0b; scalar_t__ port; TYPE_1__* chan; } ;
typedef TYPE_2__ cx_board_t ;
struct TYPE_4__ {scalar_t__ port; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;

void FUNC_2 (cx_board_t *VAR_1)
{
 FUNC_1 (FUNC_0(VAR_1->port), VAR_1->bcr0 & ~VAR_0);
 if (VAR_1->chan[8].port || VAR_1->chan[12].port)
  FUNC_1 (FUNC_0(VAR_1->port+0x10), VAR_1->bcr0b & ~VAR_0);
}
