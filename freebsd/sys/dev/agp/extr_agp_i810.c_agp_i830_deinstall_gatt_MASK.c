
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_i810_softc {int * sc_res; } ;
typedef int device_t ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 struct agp_i810_softc* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(device_t VAR_1)
{
 struct agp_i810_softc *VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 VAR_3 = FUNC_0(VAR_2->sc_res[0], VAR_0);
 VAR_3 &= ~1;
 FUNC_1(VAR_2->sc_res[0], VAR_0, VAR_3);
}
