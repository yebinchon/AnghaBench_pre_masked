
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_3__ {int dif_oper; } ;
typedef TYPE_1__ ocs_hw_dif_info_t ;


 int VAR_0 ;





 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(uint8_t VAR_2, ocs_hw_dif_info_t *VAR_3)
{
 int VAR_4;

 if (VAR_2) {

  switch(VAR_3->dif_oper) {
   case 128:
   case 130:
   case 132:
    VAR_4 = VAR_1;
    break;
   default:
    VAR_4 = VAR_0;
    break;
  }
 } else {

  switch(VAR_3->dif_oper) {
   case 129:
   case 130:
   case 131:
    VAR_4 = VAR_1;
    break;
   default:
    VAR_4 = VAR_0;
    break;
  }
 }

 return VAR_4;
}
