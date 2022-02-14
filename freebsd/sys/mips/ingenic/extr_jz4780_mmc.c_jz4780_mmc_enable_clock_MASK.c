
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int f_max; } ;
struct jz4780_mmc_softc {int sc_clk; TYPE_1__ sc_host; int sc_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct jz4780_mmc_softc *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->sc_dev, 0, "mmc", &VAR_0->sc_clk);
 if (VAR_1 == 0)
  VAR_1 = FUNC_0(VAR_0->sc_clk);
 if (VAR_1 == 0)
  VAR_1 = FUNC_3(VAR_0->sc_clk, VAR_0->sc_host.f_max, 0);
 if (VAR_1 != 0)
  FUNC_2(VAR_0->sc_clk);
 return (VAR_1);
}
