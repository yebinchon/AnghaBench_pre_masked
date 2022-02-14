
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_via_softc {int gatt; int initial_aperture; int * regs; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct agp_via_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_2)
{
 struct agp_via_softc *VAR_3 = FUNC_4(VAR_2);

 FUNC_1(VAR_2);

 FUNC_5(VAR_2, VAR_3->regs[VAR_1], 0, 4);
 FUNC_5(VAR_2, VAR_3->regs[VAR_0], 0, 4);
 FUNC_0(VAR_2, VAR_3->initial_aperture);
 FUNC_2(VAR_3->gatt);
 FUNC_3(VAR_2);

 return 0;
}
