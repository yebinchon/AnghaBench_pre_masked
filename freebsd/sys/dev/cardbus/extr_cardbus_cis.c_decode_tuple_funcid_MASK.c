
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct tuple_callbacks {int dummy; } ;
struct cardbus_devinfo {int funcid; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct cardbus_devinfo* FUNC_0 (int ) ;
 char** VAR_1 ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, device_t VAR_3, int VAR_4,
    int VAR_5, uint8_t *VAR_6, uint32_t VAR_7, uint32_t *VAR_8,
    struct tuple_callbacks *VAR_9, void *VAR_10)
{
 struct cardbus_devinfo *VAR_11 = FUNC_0(VAR_3);
 int VAR_12 = FUNC_1(VAR_1);
 int VAR_13;

 if (VAR_0) {
  FUNC_2("Functions: ");
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   if (VAR_6[VAR_13] < VAR_12)
    FUNC_2("%s", VAR_1[VAR_6[VAR_13]]);
   else
    FUNC_2("Unknown(%d)", VAR_6[VAR_13]);
   if (VAR_13 < VAR_5 - 1)
    FUNC_2(", ");
  }
  FUNC_2("\n");
 }
 if (VAR_5 > 0)
  VAR_11->funcid = VAR_6[0];
 return (0);
}
