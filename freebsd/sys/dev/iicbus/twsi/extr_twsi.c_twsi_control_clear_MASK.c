
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct twsi_softc {int reg_control; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct twsi_softc*,int ) ;
 int FUNC_1 (struct twsi_softc*,int ,int) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static __inline void
FUNC_3(struct twsi_softc *VAR_2, uint32_t VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_2->reg_control);
 FUNC_2(VAR_2->dev, "read val=%x\n", VAR_4);
 VAR_4 &= ~(VAR_1 | VAR_0);
 VAR_4 &= ~VAR_3;
 FUNC_2(VAR_2->dev, "write val=%x\n", VAR_4);
 FUNC_1(VAR_2, VAR_2->reg_control, VAR_4);
}
