
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ state; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;

ocs_hw_rtn_e
FUNC_1(ocs_hw_t *VAR_4, uint8_t VAR_5)
{
 ocs_hw_rtn_e VAR_6 = VAR_1;

 if (FUNC_0(&VAR_4->sli, VAR_5) != 0) {
  VAR_6 = VAR_0;
 } else {
  if (VAR_4->state != VAR_3) {
   VAR_4->state = VAR_2;
  }
 }

 return VAR_6;
}
