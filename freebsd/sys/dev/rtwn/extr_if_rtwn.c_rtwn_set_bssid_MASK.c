
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (struct rtwn_softc*,scalar_t__,int ) ;
 int FUNC_4 (struct rtwn_softc*,scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_5(struct rtwn_softc *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_4(VAR_0, FUNC_0(VAR_2), FUNC_2(&VAR_1[0]));
 if (VAR_3 != 0)
  return (VAR_3);
 VAR_3 = FUNC_3(VAR_0, FUNC_0(VAR_2) + 4, FUNC_1(&VAR_1[4]));

 return (VAR_3);
}
