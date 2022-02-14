
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_clock_softc {int clkdom; int dev; } ;
struct clknode {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct clknode* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct clknode*,int,int ,int ) ;
 int FUNC_4 (struct clknode*,char*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct jz4780_clock_softc *VAR_2)
{
 struct clknode *VAR_3;
 int VAR_4;





 FUNC_1(VAR_2->clkdom);


 VAR_4 = VAR_0;

 VAR_3 = FUNC_2(VAR_2->clkdom, VAR_1);
 if (VAR_3 != ((void*)0)) {
  VAR_4 = FUNC_4(VAR_3, "mpll");
  if (VAR_4 != 0)
   FUNC_5(VAR_2->dev,
       "unable to reparent uhc clock\n");
  else
   VAR_4 = FUNC_3(VAR_3, 48000000, 0, 0);
  if (VAR_4 != 0)
   FUNC_5(VAR_2->dev, "unable to init uhc clock\n");
 } else
  FUNC_5(VAR_2->dev, "unable to lookup uhc clock\n");

 FUNC_0(VAR_2->clkdom);
 return (VAR_4);
}
