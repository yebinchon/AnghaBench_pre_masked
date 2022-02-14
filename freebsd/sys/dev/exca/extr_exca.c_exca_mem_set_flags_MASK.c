
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct resource {int dummy; } ;
struct exca_softc {TYPE_1__* mem; int dev; } ;
struct TYPE_2__ {int kind; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct exca_softc*,int) ;
 int FUNC_2 (struct exca_softc*,struct resource*) ;

int
FUNC_3(struct exca_softc *VAR_3, struct resource *VAR_4, uint32_t VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_3->dev,
      "set_res_flags: specified resource not active\n");
  return (VAR_0);
 }

 switch (VAR_5)
 {
 case 129:
  VAR_3->mem[VAR_6].kind |= VAR_2;
  break;
 case 128:
  VAR_3->mem[VAR_6].kind &= ~VAR_2;
  break;
 case 131:
  VAR_3->mem[VAR_6].kind |= VAR_1;
  break;
 case 130:
  VAR_3->mem[VAR_6].kind &= ~VAR_1;
  break;
 }
 FUNC_1(VAR_3, VAR_6);
 return (0);
}
