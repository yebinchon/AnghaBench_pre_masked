
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tps65217_status_reg {int off; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,int ,int *,int) ;
 int FUNC_1 (scalar_t__,int ,int *,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(void *VAR_2, int VAR_3)
{
 device_t VAR_4;
 struct tps65217_status_reg VAR_5;

 if (!(VAR_3 & VAR_0))
  return;
 VAR_4 = (device_t)VAR_2;
 FUNC_0(VAR_4, VAR_1, (uint8_t *)&VAR_5, 1);

 VAR_5.off = 1;
 FUNC_1(VAR_4, VAR_1, (uint8_t *)&VAR_5, 1);

 FUNC_2();
}
