
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ti_sdma_softc {int sc_active_channels; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ti_sdma_softc*) ;
 int FUNC_2 (struct ti_sdma_softc*) ;
 int FUNC_3 (struct ti_sdma_softc*,int ) ;
 struct ti_sdma_softc* VAR_2 ;

int
FUNC_4(unsigned int VAR_3, uint32_t *VAR_4)
{
 struct ti_sdma_softc *VAR_5 = VAR_2;
 uint32_t VAR_6;


 if (VAR_5 == ((void*)0))
  return (VAR_1);

 FUNC_1(VAR_5);

 if ((VAR_5->sc_active_channels & (1 << VAR_3)) == 0) {
  FUNC_2(VAR_5);
  return (VAR_0);
 }

 FUNC_2(VAR_5);

 VAR_6 = FUNC_3(VAR_5, FUNC_0(VAR_3));

 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_6;

 return (0);
}
