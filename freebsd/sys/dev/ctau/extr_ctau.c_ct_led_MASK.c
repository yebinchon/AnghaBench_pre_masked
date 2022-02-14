
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int e1cfg; int port; int gmd2; } ;
typedef TYPE_1__ ct_board_t ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

void FUNC_3 (ct_board_t *VAR_2, int VAR_3)
{
 switch (VAR_2->type) {
 case 129:
 case 128:
 case 130:
  if (VAR_3) VAR_2->gmd2 |= VAR_1;
  else VAR_2->gmd2 &= ~VAR_1;
  FUNC_2 (FUNC_1(VAR_2->port), VAR_2->gmd2);
  break;
 default:
  if (VAR_3) VAR_2->e1cfg |= VAR_0;
  else VAR_2->e1cfg &= ~VAR_0;
  FUNC_2 (FUNC_0(VAR_2->port), VAR_2->e1cfg);
  break;
 }
}
