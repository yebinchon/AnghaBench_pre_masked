
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtwn_softc {int ntxchains; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct rtwn_softc *VAR_1, uint16_t VAR_2[2][2],
    uint16_t VAR_3[2][2], uint16_t VAR_4[2][2], uint16_t VAR_5[2][2])
{
 int VAR_6, VAR_7, VAR_8[2], VAR_9[2];

 VAR_8[0] = VAR_8[1] = VAR_9[0] = VAR_9[1] = 0;
 for (VAR_6 = 0; VAR_6 < VAR_1->ntxchains; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
   if (VAR_2[VAR_6][VAR_7] == 0xff || VAR_4[VAR_6][VAR_7] == 0xff ||
       VAR_3[VAR_6][VAR_7] == 0xff || VAR_5[VAR_6][VAR_7] == 0xff)
    continue;

   VAR_8[VAR_6] = (FUNC_0(VAR_2[VAR_6][VAR_7] - VAR_4[VAR_6][VAR_7]) <=
       VAR_0);

   VAR_9[VAR_6] = (FUNC_0(VAR_3[VAR_6][VAR_7] - VAR_5[VAR_6][VAR_7]) <=
       VAR_0);
  }
 }

 if (VAR_1->ntxchains > 1)
  return (VAR_8[0] && VAR_8[1] && VAR_9[0] && VAR_9[1]);
 else
  return (VAR_8[0] && VAR_9[0]);
}
