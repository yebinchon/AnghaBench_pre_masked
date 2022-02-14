
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 () ;

void
FUNC_5(device_t VAR_7)
{
 uint32_t VAR_8;






 if (FUNC_4() == VAR_5) {
  VAR_8 = FUNC_1(VAR_6, VAR_2);
  VAR_8 |= 1 << VAR_3;
  FUNC_2(VAR_6, VAR_2, VAR_8);
 }




 if (FUNC_4() == VAR_4) {
  FUNC_3(VAR_1, VAR_0);
  return;
 }
 if (FUNC_4() == VAR_5) {
  FUNC_3(FUNC_0(4, 5), VAR_0);
  FUNC_3(FUNC_0(4, 6), VAR_0);
  return;
 }
}
