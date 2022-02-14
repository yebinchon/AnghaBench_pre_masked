
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rtwn_softc {int nrxchains; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtwn_softc*,int ,int,int ) ;
 int FUNC_1 (struct rtwn_softc*,int,int const) ;

void
FUNC_2(struct rtwn_softc *VAR_1, uint32_t VAR_2[],
    const uint8_t VAR_3[], int VAR_4)
{
 int VAR_5, VAR_6;


 FUNC_0(VAR_1, VAR_0, 0x80000000, 0);

 for (VAR_5 = 0; VAR_5 < VAR_1->nrxchains; VAR_5++)
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
   VAR_2[VAR_5 * VAR_4 + VAR_6] = FUNC_1(VAR_1, VAR_5, VAR_3[VAR_6]);
}
