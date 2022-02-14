
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntb_plx_softc {int split; } ;



__attribute__((used)) static unsigned
FUNC_0(struct ntb_plx_softc *VAR_0, unsigned VAR_1, unsigned *VAR_2)
{
 unsigned VAR_3;

 VAR_3 = 1 << VAR_0->split;
 if (VAR_1 < VAR_3) {
  *VAR_2 = VAR_1;
  return (0);
 }
 *VAR_2 = 0;
 return (VAR_1 - (VAR_3 - 1));
}
