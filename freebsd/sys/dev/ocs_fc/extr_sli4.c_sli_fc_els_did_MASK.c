
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int sli4_t ;
struct TYPE_2__ {int wqe_specific_2; scalar_t__ status; } ;
typedef TYPE_1__ sli4_fc_wcqe_t ;
typedef int int32_t ;



int32_t
FUNC_0(sli4_t *VAR_0, uint8_t *VAR_1, uint32_t *VAR_2)
{
 sli4_fc_wcqe_t *VAR_3 = (void *)VAR_1;

 *VAR_2 = 0;

 if (VAR_3->status) {
  return -1;
 } else {
  *VAR_2 = VAR_3->wqe_specific_2 & 0x00ffffff;
  return 0;
 }
}
