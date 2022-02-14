
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int device_t ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int,int) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_0)
{
 uint32_t VAR_1;

 if (FUNC_1(VAR_0) == 0 && FUNC_3(VAR_0) == 0 &&
     FUNC_2(VAR_0) == 0) {
  VAR_1 = FUNC_4(VAR_0, 0x6c, 4);
  if (VAR_1 & 0x000e0000) {
   FUNC_0(VAR_0,
       "correcting nForce2 C1 CPU disconnect hangs\n");
   VAR_1 &= ~0x000e0000;
   FUNC_5(VAR_0, 0x6c, VAR_1, 4);
  }
 }
}
