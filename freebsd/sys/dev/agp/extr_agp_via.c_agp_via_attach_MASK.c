
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct agp_via_softc {int initial_aperture; scalar_t__* regs; struct agp_gatt* gatt; } ;
struct agp_gatt {int ag_physical; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct agp_gatt* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct agp_via_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ,scalar_t__,int) ;
 int FUNC_9 (int ,scalar_t__,int,int) ;
 scalar_t__* VAR_5 ;
 scalar_t__* VAR_6 ;

__attribute__((used)) static int
FUNC_10(device_t VAR_7)
{
 struct agp_via_softc *VAR_8 = FUNC_6(VAR_7);
 struct agp_gatt *VAR_9;
 int VAR_10;
 u_int32_t VAR_11;
 u_int32_t VAR_12;

 VAR_8->regs = VAR_5;


 VAR_12 = FUNC_8(VAR_7, FUNC_3(VAR_7) + VAR_0, 4);
 if (((VAR_12 >> 20) & 0x0f) >= 3) {
  VAR_11 = FUNC_8(VAR_7, VAR_1, 1);
  if ((VAR_11 & (1 << 1)) == 0)
   VAR_8->regs = VAR_6;
 }

 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_8->initial_aperture = FUNC_0(VAR_7);

 for (;;) {
  VAR_9 = FUNC_2(VAR_7);
  if (VAR_9)
   break;





  if (FUNC_1(VAR_7, FUNC_0(VAR_7) / 2)) {
   FUNC_5(VAR_7);
   return VAR_2;
  }
 }
 VAR_8->gatt = VAR_9;

 if (VAR_8->regs == VAR_5) {

  FUNC_9(VAR_7, VAR_8->regs[VAR_3], VAR_9->ag_physical | 3, 4);


  FUNC_9(VAR_7, VAR_8->regs[VAR_4], 0x0f, 4);
 } else {
  u_int32_t VAR_13;


  FUNC_9(VAR_7, VAR_8->regs[VAR_3], VAR_9->ag_physical, 4);


  VAR_13 = FUNC_8(VAR_7, VAR_8->regs[VAR_4], 4);
  FUNC_9(VAR_7, VAR_8->regs[VAR_4], VAR_13 | (3 << 7), 4);
 }

 FUNC_7(VAR_7, "aperture size is %dM\n",
  VAR_8->initial_aperture / 1024 / 1024);

 return 0;
}
