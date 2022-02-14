
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {int os; } ;
typedef TYPE_1__ sli4_t ;
struct TYPE_6__ {int major_code; int minor_code; int resource_id; } ;
typedef TYPE_2__ sli4_eqe_t ;
typedef int int32_t ;




 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,char*,TYPE_1__*,int *,int *) ;
 int FUNC_2 (int ,char*,int,int ) ;

int32_t
FUNC_3(sli4_t *VAR_0, uint8_t *VAR_1, uint16_t *VAR_2)
{
 sli4_eqe_t *VAR_3 = (void *)VAR_1;
 int32_t VAR_4 = 0;

 if (!VAR_0 || !VAR_1 || !VAR_2) {
  FUNC_1(((void*)0), "bad parameters sli4=%p buf=%p cq_id=%p\n",
    VAR_0, VAR_1, VAR_2);
  return -1;
 }

 switch (VAR_3->major_code) {
 case 128:
  *VAR_2 = VAR_3->resource_id;
  break;
 case 129:
  FUNC_0(VAR_0->os, "sentinel EQE\n");
  VAR_4 = 1;
  break;
 default:
  FUNC_2(VAR_0->os, "Unsupported EQE: major %x minor %x\n",
    VAR_3->major_code, VAR_3->minor_code);
  VAR_4 = -1;
 }

 return VAR_4;
}
