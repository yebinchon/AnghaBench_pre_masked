
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct rtwn_softc {int dummy; } ;


 int FUNC_0 (struct rtwn_softc*,int) ;
 scalar_t__ FUNC_1 (struct rtwn_softc*,int) ;

__attribute__((used)) static void
FUNC_2(struct rtwn_softc *VAR_0, uint64_t *VAR_1, int VAR_2)
{

 *VAR_1 = FUNC_0(VAR_0, VAR_2);
 *VAR_1 <<= 32;
 *VAR_1 += FUNC_1(VAR_0, VAR_2);
}
