
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ural_softc {int* rf_regs; int sc_dev; } ;


 int FUNC_0 (int,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct ural_softc*,int) ;
 int FUNC_3 (struct ural_softc*,int ) ;
 int FUNC_4 (struct ural_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct ural_softc *VAR_6, uint8_t VAR_7, uint32_t VAR_8)
{
 uint32_t VAR_9;
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < 100; VAR_10++) {
  if (!(FUNC_3(VAR_6, VAR_0) & VAR_4))
   break;
  if (FUNC_2(VAR_6, VAR_5 / 100))
   break;
 }
 if (VAR_10 == 100) {
  FUNC_1(VAR_6->sc_dev, "could not write to RF\n");
  return;
 }

 VAR_9 = VAR_3 | VAR_2 | (VAR_8 & 0xfffff) << 2 | (VAR_7 & 0x3);
 FUNC_4(VAR_6, VAR_1, VAR_9 & 0xffff);
 FUNC_4(VAR_6, VAR_0, VAR_9 >> 16);


 VAR_6->rf_regs[VAR_7] = VAR_8;

 FUNC_0(15, "RF R[%u] <- 0x%05x\n", VAR_7 & 0x3, VAR_8 & 0xfffff);
}
