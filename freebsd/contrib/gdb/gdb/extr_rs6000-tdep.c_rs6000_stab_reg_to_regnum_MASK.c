
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ppc_mq_regnum; int ppc_lr_regnum; int ppc_ctr_regnum; int ppc_xer_regnum; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1 (int VAR_1)
{
  int VAR_2;
  switch (VAR_1)
    {
    case 64:
      VAR_2 = FUNC_0 (VAR_0)->ppc_mq_regnum;
      break;
    case 65:
      VAR_2 = FUNC_0 (VAR_0)->ppc_lr_regnum;
      break;
    case 66:
      VAR_2 = FUNC_0 (VAR_0)->ppc_ctr_regnum;
      break;
    case 76:
      VAR_2 = FUNC_0 (VAR_0)->ppc_xer_regnum;
      break;
    default:
      VAR_2 = VAR_1;
      break;
    }
  return VAR_2;
}
