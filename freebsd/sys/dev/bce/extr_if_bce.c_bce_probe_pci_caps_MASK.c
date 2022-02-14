
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct bce_softc {int link_speed; int link_width; int bce_cap_flags; int bce_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct bce_softc*,int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_11, struct bce_softc *VAR_12)
{
 u32 VAR_13;

 FUNC_0(VAR_6);


 if (FUNC_3(VAR_11, VAR_10, &VAR_13) == 0) {
  if (VAR_13 != 0)
   VAR_12->bce_cap_flags |= VAR_5;
 }


 if (FUNC_3(VAR_11, VAR_7, &VAR_13) == 0) {
  if (VAR_13 != 0) {
   u16 VAR_14 = FUNC_4(VAR_11, VAR_13 + 0x12, 2);
   FUNC_2(VAR_12, VAR_0, "PCIe link_status = "
       "0x%08X\n", VAR_14);
   VAR_12->link_speed = VAR_14 & 0xf;
   VAR_12->link_width = (VAR_14 >> 4) & 0x3f;
   VAR_12->bce_cap_flags |= VAR_3;
   VAR_12->bce_flags |= VAR_4;
  }
 }


 if (FUNC_3(VAR_11, VAR_8, &VAR_13) == 0) {
  if (VAR_13 != 0)
   VAR_12->bce_cap_flags |= VAR_2;
 }


 if (FUNC_3(VAR_11, VAR_9, &VAR_13) == 0) {
  if (VAR_13 != 0)
   VAR_12->bce_cap_flags |= VAR_1;
 }

 FUNC_1(VAR_6);
}
