
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0, "PCI Configuration space:");
 for (VAR_1 = 0; VAR_1 < 256; VAR_1 += 4) {
  if (VAR_1 % 16 == 0)
   FUNC_2("\n  0x%02x: ", VAR_1);
  FUNC_2("0x%08x ", FUNC_1(VAR_0, VAR_1, 4));
 }
 FUNC_2("\n");
}
