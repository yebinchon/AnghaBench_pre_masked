
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rum_softc {int* rf_regs; int sc_dev; } ;


 int FUNC_0 (int,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct rum_softc*,int) ;
 int FUNC_3 (struct rum_softc*,int ) ;
 int FUNC_4 (struct rum_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct rum_softc *VAR_4, uint8_t VAR_5, uint32_t VAR_6)
{
 uint32_t VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 100; VAR_8++) {
  if (!(FUNC_3(VAR_4, VAR_0) & VAR_2))
   break;
  if (FUNC_2(VAR_4, VAR_3 / 100))
   break;
 }
 if (VAR_8 == 100) {
  FUNC_1(VAR_4->sc_dev, "could not write to RF\n");
  return;
 }

 VAR_7 = VAR_2 | VAR_1 | (VAR_6 & 0xfffff) << 2 |
     (VAR_5 & 3);
 FUNC_4(VAR_4, VAR_0, VAR_7);


 VAR_4->rf_regs[VAR_5] = VAR_6;

 FUNC_0(15, "RF R[%u] <- 0x%05x\n", VAR_5 & 3, VAR_6 & 0xfffff);
}
