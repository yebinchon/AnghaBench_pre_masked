
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int sli4_t ;
struct TYPE_2__ {int status; int wqe_specific_2; } ;
typedef TYPE_1__ sli4_fc_wcqe_t ;
 int VAR_0 ;

uint32_t
FUNC_0(sli4_t *VAR_1, uint8_t *VAR_2)
{
 sli4_fc_wcqe_t *VAR_3 = (void *)VAR_2;
 uint32_t VAR_4;

 switch (VAR_3->status) {
 case 132:
  VAR_4 = VAR_0;
  break;
 case 131:
 case 136:
  VAR_4 = 0xff;
  break;
 case 128:
 case 133:
 case 129:
 case 134:
 case 130:
  VAR_4 = VAR_0;
  break;
 case 135:
  VAR_4 = VAR_0;
  break;
 default:
  VAR_4 = 0;
 }

 return VAR_3->wqe_specific_2 & VAR_4;
}
