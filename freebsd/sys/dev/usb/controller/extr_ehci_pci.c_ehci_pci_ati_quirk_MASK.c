
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int * FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,int,int) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, uint8_t VAR_2)
{
 device_t VAR_3;
 uint32_t VAR_4;

 if (VAR_2) {

  VAR_3 = FUNC_1(VAR_0, 0x4385);
  if (VAR_3 == ((void*)0))
   return;
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4 != 0x3a && VAR_4 != 0x3b)
   return;
 }





 VAR_4 = FUNC_3(VAR_1, 0x53, 1);
 if (!(VAR_4 & 0x8)) {
  VAR_4 |= 0x8;
  FUNC_4(VAR_1, 0x53, VAR_4, 1);
  FUNC_0(VAR_1, "AMD SB600/700 quirk applied\n");
 }
}
