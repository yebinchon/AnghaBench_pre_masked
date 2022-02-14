
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int device_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, uint8_t *VAR_2, uint8_t *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {

  FUNC_0(VAR_2 + 0x555, 0xaa);

  FUNC_0(VAR_2 + 0x2aa, 0x55);


  FUNC_0(VAR_2 + 0x555, 0xa0);
  FUNC_0(VAR_2 + VAR_4, VAR_3[VAR_4]);
  if (FUNC_2(VAR_2) != 0) {
   FUNC_1(VAR_1, "flash write timeout\n");
   return -1;
  }
 }


 FUNC_0(VAR_2, 0xf0);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2[VAR_4] != VAR_3[VAR_4]) {
   FUNC_1(VAR_1, "flash write has failed\n");
   return -1;
  }
 }
 return 0;
}
