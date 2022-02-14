
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* snscb_data; scalar_t__ snscb_sblen; scalar_t__* snscb_addr; scalar_t__ snscb_rblen; } ;
typedef TYPE_1__ sns_screq_t ;
typedef int ispsoftc_t ;


 int FUNC_0 (int *,scalar_t__,scalar_t__*) ;

void
FUNC_1(ispsoftc_t *VAR_0, sns_screq_t *VAR_1, sns_screq_t *VAR_2)
{
 int VAR_3, VAR_4 = (int) VAR_1->snscb_sblen;
 FUNC_0(VAR_0, VAR_1->snscb_rblen, &VAR_2->snscb_rblen);
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++) {
  FUNC_0(VAR_0, VAR_1->snscb_addr[VAR_3], &VAR_2->snscb_addr[VAR_3]);
 }
 FUNC_0(VAR_0, VAR_1->snscb_sblen, &VAR_2->snscb_sblen);
 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
  FUNC_0(VAR_0, VAR_1->snscb_data[VAR_3], &VAR_2->snscb_data[VAR_3]);
 }
}
