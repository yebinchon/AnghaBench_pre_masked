
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct agp_nvidia_softc {int wbc_mask; TYPE_1__* gatt; int mc1_dev; } ;
typedef int device_t ;
struct TYPE_2__ {int ag_entries; scalar_t__ ag_virtual; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int,int) ;

__attribute__((used)) static void
FUNC_5 (device_t VAR_2)
{
 struct agp_nvidia_softc *VAR_3;
 u_int32_t VAR_4, VAR_5;
 volatile u_int32_t *VAR_6;
 int VAR_7, VAR_8;

 VAR_3 = (struct agp_nvidia_softc *)FUNC_1(VAR_2);

 if (VAR_3->wbc_mask) {
  VAR_4 = FUNC_3(VAR_3->mc1_dev, VAR_0, 4);
  VAR_4 |= VAR_3->wbc_mask;
  FUNC_4(VAR_3->mc1_dev, VAR_0, VAR_4, 4);


  for (VAR_7 = 0; VAR_7 < 3000; VAR_7++) {
   VAR_4 = FUNC_3(VAR_3->mc1_dev,
        VAR_0, 4);
   if ((VAR_3->wbc_mask & VAR_4) == 0)
    break;
   else
    FUNC_0(1000);
  }
  if (VAR_7 == 3000)
   FUNC_2(VAR_2,
    "TLB flush took more than 3 seconds.\n");
 }

 VAR_6 = (volatile u_int32_t *)VAR_3->gatt->ag_virtual;


 VAR_8 = VAR_3->gatt->ag_entries * sizeof(u_int32_t) / VAR_1;
 for(VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  VAR_5 = VAR_6[VAR_7 * VAR_1 / sizeof(u_int32_t)];
 for(VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
  VAR_5 = VAR_6[VAR_7 * VAR_1 / sizeof(u_int32_t)];
}
