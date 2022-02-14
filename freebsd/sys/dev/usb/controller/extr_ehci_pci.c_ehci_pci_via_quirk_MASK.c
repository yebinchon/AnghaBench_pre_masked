
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_0)
{
 uint32_t VAR_1;

 if ((FUNC_1(VAR_0) == 0x3104) &&
     ((FUNC_2(VAR_0) & 0xf0) == 0x60)) {

  VAR_1 = FUNC_3(VAR_0, 0x4b, 1);
  if (VAR_1 & 0x20)
   return;
  VAR_1 |= 0x20;
  FUNC_4(VAR_0, 0x4b, VAR_1, 1);
  FUNC_0(VAR_0, "VIA-quirk applied\n");
 }
}
