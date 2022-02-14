
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bktr_ptr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(bktr_ptr_t VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_1(0x0f) & 0x07;

 if (VAR_3 == 0) {
  return VAR_2;
 }
 if (VAR_3 == 1) {
  return VAR_2;
 }
 if (VAR_3 == 2) {
  if (VAR_1 == 0) {
   return VAR_2;
  } else {
   VAR_1--;
  }
 } else {
  if (VAR_1 < 4) {
   VAR_1++;
  } else {
   return VAR_2;
  }
 }
 VAR_4 = FUNC_1(0x01) & 0x07;
 FUNC_2(0x01, VAR_4 | (VAR_1 << 4));
 VAR_2 = FUNC_0(VAR_0);
 return VAR_2;
}
