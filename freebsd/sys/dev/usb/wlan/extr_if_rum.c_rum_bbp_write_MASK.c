
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rum_softc {int sc_dev; } ;


 int FUNC_0 (int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (struct rum_softc*) ;
 int FUNC_3 (struct rum_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct rum_softc *VAR_2, uint8_t VAR_3, uint8_t VAR_4)
{
 uint32_t VAR_5;

 FUNC_0(2, "reg=0x%08x\n", VAR_3);

 if (FUNC_2(VAR_2) != 0) {
  FUNC_1(VAR_2->sc_dev, "could not write to BBP\n");
  return;
 }

 VAR_5 = VAR_0 | (VAR_3 & 0x7f) << 8 | VAR_4;
 FUNC_3(VAR_2, VAR_1, VAR_5);
}
