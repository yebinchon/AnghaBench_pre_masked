
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_6__ {int bitlen; } ;
typedef TYPE_1__ ib_field_t ;
typedef enum MAD_FIELDS { ____Placeholder_MAD_FIELDS } MAD_FIELDS ;


 int FUNC_0 (int *,int ,TYPE_1__ const*,void*) ;
 int FUNC_1 (int *,int ,TYPE_1__ const*) ;
 int FUNC_2 (int *,int ,TYPE_1__ const*) ;
 TYPE_1__* VAR_0 ;

void FUNC_3(uint8_t * VAR_1, enum MAD_FIELDS VAR_2, void *VAR_3)
{
 const ib_field_t *VAR_4 = VAR_0 + VAR_2;

 if (!VAR_2) {
  *(int *)VAR_3 = *(int *)VAR_1;
  return;
 }
 if (VAR_4->bitlen <= 32) {
  *(uint32_t *) VAR_3 = FUNC_1(VAR_1, 0, VAR_4);
  return;
 }
 if (VAR_4->bitlen == 64) {
  *(uint64_t *) VAR_3 = FUNC_2(VAR_1, 0, VAR_4);
  return;
 }
 FUNC_0(VAR_1, 0, VAR_4, VAR_3);
}
