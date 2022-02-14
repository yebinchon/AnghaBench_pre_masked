
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct tuple_callbacks {char* name; } ;
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
  if (VAR_8)
   FUNC_0("TUPLE: %s [%d]:", VAR_8->name, VAR_4);
  else
   FUNC_0("TUPLE: Unknown(0x%02x) [%d]:", VAR_3, VAR_4);

  for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
   if (VAR_10 % 0x10 == 0 && VAR_4 > 0x10)
    FUNC_0("\n       0x%02x:", VAR_10);
   FUNC_0(" %02x", VAR_5[VAR_10]);
  }
  FUNC_0("\n");
 }
 return (0);
}
