
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct agp_i810_softc {int * sc_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 struct agp_i810_softc* FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1)
{
 struct agp_i810_softc *VAR_2;
 uint32_t VAR_3;
 int VAR_4;

 VAR_2 = FUNC_3(VAR_1);
 FUNC_4();
 VAR_3 = FUNC_1(VAR_2->sc_res[0], VAR_0);
 FUNC_2(VAR_2->sc_res[0], VAR_0, VAR_3 | (1U << 31));
 for (VAR_4 = 0; VAR_4 < 20000 ; VAR_4++) {
  VAR_3 = FUNC_1(VAR_2->sc_res[0], VAR_0);
  if ((VAR_3 & (1U << 31)) == 0)
   break;
  FUNC_0(50);
 }
}
