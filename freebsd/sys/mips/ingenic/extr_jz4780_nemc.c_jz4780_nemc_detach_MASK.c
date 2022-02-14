
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jz4780_nemc_softc {int res; int * clk; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 struct jz4780_nemc_softc* FUNC_3 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct jz4780_nemc_softc *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_1);
 if (VAR_2->clk != ((void*)0))
  FUNC_2(VAR_2->clk);
 FUNC_1(VAR_1, VAR_0, VAR_2->res);
 return (0);
}
