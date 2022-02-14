
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct generic_vpd {scalar_t__ offset; } ;
typedef int adapter_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;

int FUNC_2(adapter_t * VAR_1, struct generic_vpd *VAR_2)
{
 u32 VAR_3=0, VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = VAR_2->offset;

 while (VAR_4 < (VAR_2->offset + VAR_0)) {
  VAR_6 = FUNC_1(VAR_1, VAR_4);
  if (VAR_6 < 0)
   return VAR_6;
  else if (VAR_6 == 1)
   break;

  VAR_5 = FUNC_0(VAR_1, VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  VAR_3 += VAR_5;
  VAR_4 += VAR_5;
 }
 return (VAR_3 + 1);
}
