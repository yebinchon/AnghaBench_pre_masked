
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct tuple_callbacks {int dummy; } ;
struct TYPE_3__ {int nid; } ;
struct TYPE_4__ {TYPE_1__ lan; } ;
struct cardbus_devinfo {int funcid; int fepresent; TYPE_2__ funce; } ;
typedef int device_t ;




 int FUNC_0 (int*,int ,int) ;
 scalar_t__ VAR_0 ;
 struct cardbus_devinfo* FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, device_t VAR_2, int VAR_3,
    int VAR_4, uint8_t *VAR_5, uint32_t VAR_6, uint32_t *VAR_7,
    struct tuple_callbacks *VAR_8, void *VAR_9)
{
 struct cardbus_devinfo *VAR_10 = FUNC_1(VAR_2);
 int VAR_11, VAR_12;

 if (VAR_0) {
  FUNC_2("Function Extension: ");
  for (VAR_12 = 0; VAR_12 < VAR_4; VAR_12++)
   FUNC_2("%02x", VAR_5[VAR_12]);
  FUNC_2("\n");
 }
 if (VAR_4 < 2)
  return (0);
 VAR_11 = VAR_5[0];
 switch (VAR_10->funcid) {
 case 129:
  switch (VAR_11) {
  case 128:
   if (VAR_5[1] > sizeof(VAR_10->funce.lan.nid)) {

    return (0);
   }
   FUNC_0(VAR_5 + 2, VAR_10->funce.lan.nid,
       VAR_5[1]);
   break;
  }
  VAR_10->fepresent |= 1<<VAR_11;
  break;
 }
 return (0);
}
