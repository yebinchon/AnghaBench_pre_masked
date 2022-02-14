
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int dummy; } ;





 int FUNC_0 (int) ;
 int FUNC_1 (struct mii_softc*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_0)
{
 static const struct {
  int reg;
  uint16_t val;
 } VAR_1[] = {
  { 130, 0x0c20 },
  { 129, 0x0012 },
  { 128, 0x1804 },
  { 129, 0x0013 },
  { 128, 0x1204 },
  { 129, 0x8006 },
  { 128, 0x0132 },
  { 129, 0x8006 },
  { 128, 0x0232 },
  { 129, 0x201f },
  { 128, 0x0a20 },
  { 0, 0 },
 };
 int VAR_2;

 for (VAR_2 = 0; VAR_1[VAR_2].reg != 0; VAR_2++)
  FUNC_1(VAR_0, VAR_1[VAR_2].reg, VAR_1[VAR_2].val);
 FUNC_0(40);
}
