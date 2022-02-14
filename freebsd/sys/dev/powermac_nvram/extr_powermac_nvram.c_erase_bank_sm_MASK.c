
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int*,int ) ;
 scalar_t__ FUNC_2 (int*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_5, uint8_t *VAR_6)
{
 unsigned int VAR_7;

 FUNC_1(VAR_6, VAR_3);
 FUNC_1(VAR_6, VAR_2);

 if (FUNC_2(VAR_6) != 0) {
  FUNC_0(VAR_5, "flash erase timeout\n");
  return (-1);
 }

 FUNC_1(VAR_6, VAR_1);
 FUNC_1(VAR_6, VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  if (VAR_6[VAR_7] != 0xff) {
   FUNC_0(VAR_5, "flash write has failed\n");
   return (-1);
  }
 }
 return (0);
}
