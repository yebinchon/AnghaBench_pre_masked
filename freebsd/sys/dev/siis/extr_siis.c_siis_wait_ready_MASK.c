
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct siis_channel {int r_mem; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct siis_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3, int VAR_4)
{
 struct siis_channel *VAR_5 = FUNC_2(VAR_3);
 int VAR_6 = 0;
 uint32_t VAR_7;

 while (((VAR_7 = FUNC_0(VAR_5->r_mem, VAR_2)) &
     VAR_1) == 0) {
  FUNC_1(1000);
  if (VAR_6++ > VAR_4) {
   FUNC_3(VAR_3, "port is not ready (timeout %dms) "
       "status = %08x\n", VAR_4, VAR_7);
   return (VAR_0);
  }
 }
 return (0);
}
