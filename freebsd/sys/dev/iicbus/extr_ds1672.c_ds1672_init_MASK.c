
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,int ,int*,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 uint8_t VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, VAR_0, &VAR_3, 1);
 if (VAR_4)
  return (VAR_4);




 if (VAR_3 & VAR_1) {
  FUNC_0(VAR_2, "RTC oscillator was stopped. Check system"
      " time and RTC battery.\n");
  VAR_3 &= ~VAR_1;
  VAR_4 = FUNC_2(VAR_2, VAR_0, &VAR_3, 1);
 }
 return (VAR_4);
}
