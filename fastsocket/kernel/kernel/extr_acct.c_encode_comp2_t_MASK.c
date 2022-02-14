
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned long comp2_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static comp2_t FUNC_0(u64 VAR_4)
{
 int VAR_5, VAR_6;

 VAR_5 = (VAR_4 > (VAR_3>>1));
 VAR_6 = 0;
 while (VAR_4 > VAR_3) {
  VAR_6 = VAR_4 & 1;
  VAR_4 >>= 1;
  VAR_5++;
 }




 if (VAR_6 && (++VAR_4 > VAR_3)) {
  VAR_4 >>= 1;
  VAR_5++;
 }

 if (VAR_5 > VAR_2) {

  return (1ul << (VAR_1+VAR_0-1)) - 1;
 } else {
  return (VAR_4 & (VAR_3>>1)) | (VAR_5 << (VAR_1-1));
 }
}
