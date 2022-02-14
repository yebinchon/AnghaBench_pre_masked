
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct zyd_softc {int dummy; } ;
struct zyd_rf {struct zyd_softc* rf_sc; } ;


 int FUNC_0 (struct zyd_softc*,int) ;

__attribute__((used)) static int
FUNC_1(struct zyd_rf *VAR_0, uint16_t VAR_1)
{
 struct zyd_softc *VAR_2 = VAR_0->rf_sc;

 return FUNC_0(VAR_2, 0x300000 | 0x40000 | VAR_1);
}
