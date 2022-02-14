
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int dummy; } ;


 int FUNC_0 (struct mii_softc*,int,int ) ;

void
FUNC_1(struct mii_softc *VAR_0)
{
 static const struct {
  int reg;
  uint16_t val;
 } VAR_1[] = {
  { 4, 0x01e1 },
  { 9, 0x0300 },
  { 0, 0 },
 };
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2].reg != 0; VAR_2++)
  FUNC_0(VAR_0, VAR_1[VAR_2].reg, VAR_1[VAR_2].val);

}
