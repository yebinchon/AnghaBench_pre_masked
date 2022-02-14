
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct mps_softc {int max_devices; TYPE_1__* mapping_table; } ;
struct TYPE_5__ {int Bus; int TargetID; int DevHandle; } ;
typedef TYPE_2__ mps_btdh_mapping_t ;
struct TYPE_4__ {int dev_handle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct mps_softc*,int ,char*) ;
 int FUNC_1 (struct mps_softc*,int) ;

__attribute__((used)) static int
FUNC_2(struct mps_softc *VAR_4, mps_btdh_mapping_t *VAR_5)
{
 uint8_t VAR_6 = VAR_1;
 uint8_t VAR_7 = VAR_1;
 uint16_t VAR_8, VAR_9, VAR_10;

 VAR_9 = VAR_5->Bus;
 VAR_10 = VAR_5->TargetID;
 VAR_8 = VAR_5->DevHandle;







 if ((VAR_9 == 0xFFFF) && (VAR_10 == 0xFFFF) && (VAR_8 != 0xFFFF))
  VAR_7 = VAR_3;
 if ((VAR_8 == 0xFFFF) && (VAR_9 != 0xFFFF) && (VAR_10 != 0xFFFF))
  VAR_6 = VAR_3;
 if (!VAR_7 && !VAR_6)
  return (VAR_0);




 if (VAR_6) {
  if (VAR_9 != 0)
   return (VAR_0);

  if (VAR_10 > VAR_4->max_devices) {
   FUNC_0(VAR_4, VAR_2, "Target ID is out of range "
      "for Bus/Target to DevHandle mapping.");
   return (VAR_0);
  }
  VAR_8 = VAR_4->mapping_table[VAR_10].dev_handle;
  if (VAR_8)
   VAR_5->DevHandle = VAR_8;
 } else {
  VAR_9 = 0;
  VAR_10 = FUNC_1(VAR_4, VAR_8);
  VAR_5->Bus = VAR_9;
  VAR_5->TargetID = VAR_10;
 }

 return (0);
}
