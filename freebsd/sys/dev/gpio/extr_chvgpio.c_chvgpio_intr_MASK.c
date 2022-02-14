
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct chvgpio_softc {int sc_mem_res; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct chvgpio_softc *VAR_2 = VAR_1;
 uint32_t VAR_3;
 int VAR_4;

 VAR_3 = FUNC_0(VAR_2->sc_mem_res, VAR_0);
 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  if ((VAR_3 & (1 << VAR_4)) == 0)
   continue;
  FUNC_1(VAR_2->sc_mem_res, VAR_0, 1 << VAR_4);
 }
}
