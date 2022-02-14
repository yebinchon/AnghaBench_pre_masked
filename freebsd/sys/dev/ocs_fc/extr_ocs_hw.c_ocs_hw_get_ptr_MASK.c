
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int os; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_property_e ;
 int FUNC_0 (int ,char*,int) ;
 void* FUNC_1 (int *) ;
 void* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *) ;
 void* FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *) ;
 void* FUNC_8 (int *) ;

void *
FUNC_9(ocs_hw_t *VAR_0, ocs_hw_property_e VAR_1)
{
 void *VAR_2 = ((void*)0);

 switch (VAR_1) {
 case 129:
  VAR_2 = FUNC_7(&VAR_0->sli);
  break;
 case 128:
  VAR_2 = FUNC_8(&VAR_0->sli);
  break;
 case 130:

  if (FUNC_6(&VAR_0->sli)) {
   VAR_2 = FUNC_5(&VAR_0->sli);
  }
  break;
 case 134:
  VAR_2 = FUNC_2(&VAR_0->sli, 0);
  break;
 case 133:
  VAR_2 = FUNC_2(&VAR_0->sli, 1);
  break;
 case 132:
  VAR_2 = FUNC_3(&VAR_0->sli);
  break;
 case 131:
  VAR_2 = FUNC_4(&VAR_0->sli);
  break;
 case 135:
  VAR_2 = FUNC_1(&VAR_0->sli);
  break;
 default:
  FUNC_0(VAR_0->os, "unsupported property %#x\n", VAR_1);
 }

 return VAR_2;
}
