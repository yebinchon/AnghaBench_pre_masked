
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_amd_softc {int initial_aperture; struct agp_amd_gatt* gatt; int regs; int bsh; int bst; } ;
struct agp_amd_gatt {int ag_pdir; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ) ;
 struct agp_amd_gatt* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int*,int ) ;
 struct agp_amd_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,int ,int ,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_11)
{
 struct agp_amd_softc *VAR_12 = FUNC_10(VAR_11);
 struct agp_amd_gatt *VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = FUNC_7(VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_15 = VAR_5;
 VAR_12->regs = FUNC_9(VAR_11, VAR_10, &VAR_15,
       VAR_9);
 if (!VAR_12->regs) {
  FUNC_8(VAR_11);
  return VAR_8;
 }

 VAR_12->bst = FUNC_13(VAR_12->regs);
 VAR_12->bsh = FUNC_12(VAR_12->regs);

 VAR_12->initial_aperture = FUNC_1(VAR_11);

 for (;;) {
  VAR_13 = FUNC_6(VAR_11);
  if (VAR_13)
   break;





  if (FUNC_2(VAR_11, FUNC_1(VAR_11) / 2))
   return VAR_8;
 }
 VAR_12->gatt = VAR_13;


 FUNC_5(VAR_0, VAR_13->ag_pdir);


 FUNC_11(VAR_11,
    VAR_1,
    VAR_4, 1);


 FUNC_11(VAR_11,
    VAR_2,
    VAR_3, 1);


 FUNC_4(VAR_6,
        FUNC_3(VAR_6) | VAR_7);
 FUNC_0(VAR_11);

 return 0;
}
