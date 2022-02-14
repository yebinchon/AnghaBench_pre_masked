
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (struct e1000_hw*,int ,scalar_t__,scalar_t__) ;

s32 FUNC_3(struct e1000_hw *VAR_4, u8 *VAR_5,
        u16 VAR_6, u16 VAR_7, u8 *VAR_8)
{
 u8 *VAR_9;
 u8 *VAR_10 = VAR_5;
 u32 VAR_11 = 0;
 u16 VAR_12, VAR_13, VAR_14, VAR_15;

 FUNC_0("e1000_mng_host_if_write_generic");



 if (VAR_6 == 0 || VAR_7 + VAR_6 > VAR_1)
  return -VAR_0;

 VAR_9 = (u8 *)&VAR_11;
 VAR_15 = VAR_7 & 0x3;
 VAR_7 >>= 2;

 if (VAR_15) {
  VAR_11 = FUNC_1(VAR_4, VAR_2, VAR_7);
  for (VAR_14 = VAR_15; VAR_14 < sizeof(u32); VAR_14++) {
   *(VAR_9 + VAR_14) = *VAR_10++;
   *VAR_8 += *(VAR_9 + VAR_14);
  }
  FUNC_2(VAR_4, VAR_2, VAR_7, VAR_11);
  VAR_6 -= VAR_14 - VAR_15;
  VAR_7++;
 }

 VAR_12 = VAR_6 & 0x3;
 VAR_6 -= VAR_12;


 VAR_6 >>= 2;




 for (VAR_13 = 0; VAR_13 < VAR_6; VAR_13++) {
  for (VAR_14 = 0; VAR_14 < sizeof(u32); VAR_14++) {
   *(VAR_9 + VAR_14) = *VAR_10++;
   *VAR_8 += *(VAR_9 + VAR_14);
  }

  FUNC_2(VAR_4, VAR_2, VAR_7 + VAR_13,
         VAR_11);
 }
 if (VAR_12) {
  for (VAR_14 = 0; VAR_14 < sizeof(u32); VAR_14++) {
   if (VAR_14 < VAR_12)
    *(VAR_9 + VAR_14) = *VAR_10++;
   else
    *(VAR_9 + VAR_14) = 0;

   *VAR_8 += *(VAR_9 + VAR_14);
  }
  FUNC_2(VAR_4, VAR_2, VAR_7 + VAR_13,
         VAR_11);
 }

 return VAR_3;
}
