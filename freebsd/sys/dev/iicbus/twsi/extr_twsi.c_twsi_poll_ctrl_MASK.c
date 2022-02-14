
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct twsi_softc {int dev; int reg_control; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct twsi_softc*,int ) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_3(struct twsi_softc *VAR_0, int VAR_1, uint32_t VAR_2)
{

 VAR_1 /= 10;
 FUNC_2(VAR_0->dev, "Waiting for ctrl reg to match mask %x\n", VAR_2);
 while (!(FUNC_1(VAR_0, VAR_0->reg_control) & VAR_2)) {
  FUNC_0(10);
  if (--VAR_1 < 0)
   return (VAR_1);
 }
 FUNC_2(VAR_0->dev, "done\n");
 return (0);
}
