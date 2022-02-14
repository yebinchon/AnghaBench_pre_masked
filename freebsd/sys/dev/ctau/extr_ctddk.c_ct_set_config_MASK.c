
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cfg; } ;
struct TYPE_7__ {int type; TYPE_1__ opt; } ;
typedef TYPE_2__ ct_board_t ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*,int) ;

int FUNC_2 (ct_board_t *VAR_2, int VAR_3)
{
 if (VAR_2->opt.cfg == VAR_3)
  return 0;
 switch (VAR_2->type) {
 case 129:
 case 128:
 case 133:
  if (VAR_3 == VAR_1)
   return -1;
  FUNC_1 (VAR_2, VAR_3);
  return 0;
 case 132:
 case 131:
 case 130:
 case 135:
 case 134:
  FUNC_0 (VAR_2, VAR_3);
  return 0;
 default:
  return VAR_3 == VAR_0 ? 0 : -1;
 }
}
