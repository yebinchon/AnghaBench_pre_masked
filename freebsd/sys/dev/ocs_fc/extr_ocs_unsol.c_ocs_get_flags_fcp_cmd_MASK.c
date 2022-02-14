
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int task_attribute; scalar_t__ rddata; scalar_t__ wrdata; } ;
typedef TYPE_1__ fcp_cmnd_iu_t ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static uint32_t
FUNC_0(fcp_cmnd_iu_t *VAR_7)
{
 uint32_t VAR_8 = 0;
 switch (VAR_7->task_attribute) {
 case 129:
  VAR_8 |= VAR_5;
  break;
 case 131:
  VAR_8 |= VAR_3;
  break;
 case 130:
  VAR_8 |= VAR_4;
  break;
 case 132:
  VAR_8 |= VAR_0;
  break;
 case 128:
  VAR_8 |= VAR_6;
  break;
 }
 if (VAR_7->wrdata)
  VAR_8 |= VAR_1;
 if (VAR_7->rddata)
  VAR_8 |= VAR_2;

 return VAR_8;
}
