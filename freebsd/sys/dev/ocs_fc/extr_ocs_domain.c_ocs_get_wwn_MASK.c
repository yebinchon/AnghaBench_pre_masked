
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int ocs_hw_t ;
typedef int ocs_hw_property_e ;


 int* FUNC_0 (int *,int ) ;

uint64_t
FUNC_1(ocs_hw_t *VAR_0, ocs_hw_property_e VAR_1)
{
 uint8_t *VAR_2 = FUNC_0(VAR_0, VAR_1);
 uint64_t VAR_3 = 0;

 if (VAR_2) {
  uint32_t VAR_4;
  for (VAR_4 = 0; VAR_4 < sizeof(VAR_3); VAR_4++) {
   VAR_3 = (VAR_3 << 8) | VAR_2[VAR_4];
  }
 }
 return VAR_3;
}
