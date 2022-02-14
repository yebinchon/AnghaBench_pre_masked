
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int bcr0; int port; } ;
typedef TYPE_1__ cx_board_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int FUNC_1 (int ,int ) ;

void FUNC_2 (cx_board_t *VAR_1, int VAR_2)
{
 switch (VAR_1->type) {
 case 128:
  if (VAR_2) VAR_1->bcr0 |= VAR_0;
  else VAR_1->bcr0 &= ~VAR_0;
  FUNC_1 (FUNC_0(VAR_1->port), VAR_1->bcr0);
  break;
 }
}
