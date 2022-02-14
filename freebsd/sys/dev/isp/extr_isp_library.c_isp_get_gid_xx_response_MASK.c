
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* snscb_ports; int snscb_cthdr; } ;
typedef TYPE_2__ sns_gid_xx_rsp_t ;
typedef int ispsoftc_t ;
struct TYPE_5__ {int control; int* portid; } ;


 int FUNC_0 (int *,int*,int) ;
 int FUNC_1 (int *,int *,int *) ;

void
FUNC_2(ispsoftc_t *VAR_0, sns_gid_xx_rsp_t *VAR_1, sns_gid_xx_rsp_t *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_1(VAR_0, &VAR_1->snscb_cthdr, &VAR_2->snscb_cthdr);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_0(VAR_0, &VAR_1->snscb_ports[VAR_4].control,
      VAR_2->snscb_ports[VAR_4].control);
  for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
   FUNC_0(VAR_0, &VAR_1->snscb_ports[VAR_4].portid[VAR_5],
       VAR_2->snscb_ports[VAR_4].portid[VAR_5]);
  }
  if (VAR_2->snscb_ports[VAR_4].control & 0x80)
   break;
 }
}
