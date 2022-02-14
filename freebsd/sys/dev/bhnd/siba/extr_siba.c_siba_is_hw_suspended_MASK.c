
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int*,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static bool
FUNC_3(device_t VAR_5, device_t VAR_6)
{
 uint32_t VAR_7;
 uint16_t VAR_8;
 int VAR_9;


 VAR_9 = FUNC_1(VAR_6, VAR_1, &VAR_7, 4);
 if (VAR_9) {
  FUNC_2(VAR_6, "error reading HW reset state: %d\n",
      VAR_9);
  return (1);
 }


 if (VAR_7 & VAR_3)
  return (1);


 if (VAR_7 & VAR_2)
  return (1);


 VAR_8 = FUNC_0(VAR_7, VAR_4);
 if (!(VAR_8 & VAR_0))
  return (1);

 return (0);
}
