
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct agp_i810_softc {int * sc_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct agp_i810_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_4, uint32_t VAR_5)
{
 struct agp_i810_softc *VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_6 = FUNC_2(VAR_4);


 VAR_8 = FUNC_0(VAR_6->sc_res[0], VAR_3);
 VAR_8 &= ~VAR_1;
 FUNC_1(VAR_6->sc_res[0], VAR_3, VAR_8);


 VAR_7 = FUNC_0(VAR_6->sc_res[0], VAR_0);
 VAR_7 &= ~VAR_2;
 VAR_7 |= VAR_5;
 FUNC_1(VAR_6->sc_res[0], VAR_0, VAR_7);
}
