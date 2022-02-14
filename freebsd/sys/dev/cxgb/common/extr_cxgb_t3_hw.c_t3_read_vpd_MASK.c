
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct generic_vpd {int len; int * data; scalar_t__ offset; } ;
typedef int adapter_t ;


 int FUNC_0 (int *,scalar_t__,int*) ;

int FUNC_1(adapter_t *VAR_0, struct generic_vpd *VAR_1)
{
 u32 VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2 += 4) {
  VAR_3 = FUNC_0(VAR_0, VAR_1->offset + VAR_2,
          (u32 *) &(VAR_1->data[VAR_2]));
  if (VAR_3)
   return VAR_3;
 }

 return 0;
}
