
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct tuple_callbacks {int dummy; } ;
struct cardbus_devinfo {int mfrid; int prodid; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 struct cardbus_devinfo* FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, uint8_t *VAR_5, uint32_t VAR_6, uint32_t *VAR_7,
    struct tuple_callbacks *VAR_8, void *VAR_9)
{
 struct cardbus_devinfo *VAR_10 = FUNC_0(VAR_2);
 int VAR_11;

 if (VAR_0) {
  FUNC_1("Manufacturer ID: ");
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
   FUNC_1("%02x", VAR_5[VAR_11]);
  FUNC_1("\n");
 }

 if (VAR_4 == 5) {
  VAR_10->mfrid = VAR_5[1] | (VAR_5[2] << 8);
  VAR_10->prodid = VAR_5[3] | (VAR_5[4] << 8);
 }
 return (0);
}
