
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {size_t dif_oper; } ;
typedef TYPE_1__ ocs_hw_dif_info_t ;
typedef int int32_t ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

int32_t
FUNC_3(ocs_hw_dif_info_t *VAR_1, int VAR_2)
{
 uint32_t VAR_3;
 uint8_t VAR_4[] = {
  0,
  0,
  VAR_0,
  0,
  VAR_0,
  VAR_0,
  VAR_0,
  VAR_0,
  VAR_0,
  VAR_0};
 uint8_t VAR_5[] = {
  0,
  VAR_0,
  0,
  VAR_0,
  0,
  VAR_0,
  VAR_0,
  VAR_0,
  VAR_0,
  VAR_0};


 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 == 0) {
  return -1;
 }

 if (VAR_2) {
  FUNC_1(VAR_1->dif_oper < FUNC_0(VAR_4), 0);
  VAR_3 += VAR_4[VAR_1->dif_oper];
 } else {
  FUNC_1(VAR_1->dif_oper < FUNC_0(VAR_5), 0);
  VAR_3 += VAR_5[VAR_1->dif_oper];
 }

 return VAR_3;
}
