
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int ocs_bitmap_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (int *,int ,int*) ;

int32_t
FUNC_2(ocs_bitmap_t *VAR_0, uint8_t VAR_1, uint32_t VAR_2)
{
 int32_t VAR_3;

 if (!VAR_0) {
  return -1;
 }

 if (VAR_1) {
  FUNC_1(VAR_0, VAR_2, &VAR_3);
 } else {
  FUNC_0(VAR_0, VAR_2, &VAR_3);
 }

 return VAR_3;
}
