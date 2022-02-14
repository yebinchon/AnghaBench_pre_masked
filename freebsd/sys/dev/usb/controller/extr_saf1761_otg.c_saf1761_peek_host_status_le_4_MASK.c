
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct saf1761_otg_softc {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct saf1761_otg_softc*) ;
 scalar_t__ FUNC_2 (struct saf1761_otg_softc*,scalar_t__) ;
 int FUNC_3 (struct saf1761_otg_softc*,int ,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static uint32_t
FUNC_4(struct saf1761_otg_softc *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = 0;
 while (1) {
  uint32_t VAR_4;

  FUNC_3(VAR_1, VAR_0, VAR_2);
  FUNC_1(VAR_1);
  VAR_4 = FUNC_2(VAR_1, VAR_2);
  if (VAR_4 != 0)
   return (VAR_4);
  if (++VAR_3 == 8) {
   FUNC_0("STAUS is zero at offset 0x%x\n", VAR_2);
   break;
  }
 }
 return (0);
}
