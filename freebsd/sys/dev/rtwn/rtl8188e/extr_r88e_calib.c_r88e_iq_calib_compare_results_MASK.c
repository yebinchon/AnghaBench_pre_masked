
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct rtwn_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct rtwn_softc *VAR_1, uint16_t VAR_2[2],
    uint16_t VAR_3[2], uint16_t VAR_4[2], uint16_t VAR_5[2])
{
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = VAR_8 = 0;
 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  if (VAR_2[VAR_6] == 0xff || VAR_4[VAR_6] == 0xff ||
      VAR_3[VAR_6] == 0xff || VAR_5[VAR_6] == 0xff)
   continue;

  VAR_7 = (FUNC_0(VAR_2[VAR_6] - VAR_4[VAR_6]) <= VAR_0);
  VAR_8 = (FUNC_0(VAR_3[VAR_6] - VAR_5[VAR_6]) <= VAR_0);
 }

 return (VAR_7 && VAR_8);
}
