
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ port; TYPE_1__* chan; } ;
typedef TYPE_2__ cx_board_t ;
struct TYPE_5__ {scalar_t__ type; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3 (cx_board_t *VAR_0)
{
 FUNC_1 (VAR_0, 0, 0, 0);


 FUNC_2 (FUNC_0(VAR_0->port), 0);
 if (VAR_0->chan[8].type || VAR_0->chan[12].type)
  FUNC_2 (FUNC_0(VAR_0->port+0x10), 0);
}
