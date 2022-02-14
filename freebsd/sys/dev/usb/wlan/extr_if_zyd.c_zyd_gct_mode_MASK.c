
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct zyd_softc {int dummy; } ;
struct zyd_rf {struct zyd_softc* rf_sc; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct zyd_softc*,int const) ;

__attribute__((used)) static int
FUNC_2(struct zyd_rf *VAR_0)
{
 struct zyd_softc *VAR_1 = VAR_0->rf_sc;
 static const uint32_t VAR_2[] = {
  0x25f98, 0x25f9a, 0x25f94, 0x27fd4
 };
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2); VAR_3++) {
  if ((VAR_4 = FUNC_1(VAR_1, VAR_2[VAR_3])) != 0)
   break;
 }
 return (VAR_4);
}
