
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct tuple_callbacks {int dummy; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, uint8_t *VAR_5, uint32_t VAR_6, uint32_t *VAR_7,
    struct tuple_callbacks *VAR_8, void *VAR_9)
{
 int VAR_10;

 if (VAR_0) {
  FUNC_0("Product version: %d.%d\n", VAR_5[0], VAR_5[1]);
  FUNC_0("Product name: ");
  for (VAR_10 = 2; VAR_10 < VAR_4; VAR_10++) {
   if (VAR_5[VAR_10] == '\0')
    FUNC_0(" | ");
   else if (VAR_5[VAR_10] == 0xff)
    break;
   else
    FUNC_0("%c", VAR_5[VAR_10]);
  }
  FUNC_0("\n");
 }
 return (0);
}
