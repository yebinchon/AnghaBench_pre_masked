
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct usbd_lookup_info {scalar_t__ idVendor; scalar_t__ bcdDevice; scalar_t__ idProduct; } ;
struct TYPE_2__ {scalar_t__ vid; scalar_t__ lo_rev; scalar_t__ hi_rev; scalar_t__ pid; scalar_t__* quirks; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static uint8_t
FUNC_4(const struct usbd_lookup_info *VAR_6, uint16_t VAR_7)
{
 uint16_t VAR_8;
 uint16_t VAR_9;

 if (VAR_7 == VAR_1)
  goto done;

 FUNC_1(&VAR_4);

 for (VAR_8 = 0; VAR_8 != VAR_2; VAR_8++) {

  if ((VAR_5[VAR_8].vid != VAR_6->idVendor) ||
      (VAR_5[VAR_8].lo_rev > VAR_6->bcdDevice) ||
      (VAR_5[VAR_8].hi_rev < VAR_6->bcdDevice)) {
   continue;
  }

  if (VAR_5[VAR_8].pid != VAR_6->idProduct) {
   if (VAR_5[VAR_8].pid != 0)
    continue;

   for (VAR_9 = 0; VAR_9 != VAR_3; VAR_9++) {
    if (VAR_5[VAR_8].quirks[VAR_9] == VAR_0)
     break;
   }
   if (VAR_9 == VAR_3)
    continue;
  }

  for (VAR_9 = 0; VAR_9 != VAR_3; VAR_9++) {
   if (VAR_5[VAR_8].quirks[VAR_9] == VAR_7) {
    FUNC_2(&VAR_4);
    FUNC_0("Found quirk '%s'.\n", FUNC_3(VAR_7));
    return (1);
   }
  }
 }
 FUNC_2(&VAR_4);
done:
 return (0);
}
