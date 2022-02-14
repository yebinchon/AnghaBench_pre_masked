
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_amd_softc {int regs; int gatt; int initial_aperture; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 struct agp_amd_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,int ,int,int) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_6)
{
 struct agp_amd_softc *VAR_7 = FUNC_8(VAR_6);

 FUNC_5(VAR_6);


 FUNC_2(VAR_3,
        FUNC_1(VAR_3) & ~VAR_4);


 FUNC_9(VAR_6, VAR_1, 0x00, 1);


 FUNC_3(VAR_0, 0);


 FUNC_0(VAR_6, VAR_7->initial_aperture);

 FUNC_4(VAR_7->gatt);
 FUNC_6(VAR_6);

 FUNC_7(VAR_6, VAR_5,
        VAR_2, VAR_7->regs);

 return 0;
}
