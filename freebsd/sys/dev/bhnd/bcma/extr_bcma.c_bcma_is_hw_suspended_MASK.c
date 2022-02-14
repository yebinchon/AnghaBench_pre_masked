
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static bool
FUNC_3(device_t VAR_3, device_t VAR_4)
{
 uint32_t VAR_5;
 uint16_t VAR_6;
 int VAR_7;


 VAR_7 = FUNC_0(VAR_4, VAR_1, &VAR_5, 4);
 if (VAR_7) {
  FUNC_2(VAR_4, "error reading HW reset state: %d\n",
      VAR_7);
  return (1);
 }

 if (VAR_5 & VAR_0)
  return (1);


 VAR_7 = FUNC_1(VAR_4, &VAR_6);
 if (VAR_7) {
  FUNC_2(VAR_4, "error reading HW ioctl register: %d\n",
      VAR_7);
  return (1);
 }

 if (!(VAR_6 & VAR_2))
  return (1);

 return (0);
}
