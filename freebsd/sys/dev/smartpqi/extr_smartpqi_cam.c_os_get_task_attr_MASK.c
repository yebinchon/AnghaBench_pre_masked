
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tag_action; } ;
union ccb {TYPE_1__ csio; } ;
typedef int uint8_t ;
struct TYPE_5__ {union ccb* cm_ccb; } ;
typedef TYPE_2__ rcb_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

uint8_t FUNC_0(rcb_t *VAR_3)
{
 union ccb *VAR_4 = VAR_3->cm_ccb;
 uint8_t VAR_5 = VAR_2;

 switch(VAR_4->csio.tag_action) {
 case 130:
  VAR_5 = VAR_0;
  break;
 case 129:
  VAR_5 = VAR_1;
  break;
 case 128:
 default:
  VAR_5 = VAR_2;
  break;
 }
 return VAR_5;
}
