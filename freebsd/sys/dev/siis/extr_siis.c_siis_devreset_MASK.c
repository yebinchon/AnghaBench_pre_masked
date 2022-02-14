
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct siis_channel {int r_mem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct siis_channel* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_4)
{
 struct siis_channel *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = 0;
 uint32_t VAR_7;

 FUNC_1(VAR_5->r_mem, VAR_1, VAR_2);
 while (((VAR_7 = FUNC_0(VAR_5->r_mem, VAR_3)) &
     VAR_2) != 0) {
  FUNC_2(100);
  if (VAR_6++ > 1000) {
   FUNC_4(VAR_4, "device reset stuck "
       "(timeout 100ms) status = %08x\n", VAR_7);
   return (VAR_0);
  }
 }
 return (0);
}
