
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct jz4780_mmc_softc {int sc_dev; int sc_clk; } ;


 int FUNC_0 (struct jz4780_mmc_softc*,int ) ;
 int FUNC_1 (struct jz4780_mmc_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct jz4780_mmc_softc*) ;

__attribute__((used)) static int
FUNC_5(struct jz4780_mmc_softc *VAR_1, uint32_t VAR_2)
{
 uint64_t VAR_3;
 uint32_t VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_4(VAR_1);
 if (VAR_5 != 0)
  return (VAR_5);

 FUNC_2(VAR_1->sc_clk, &VAR_3);
 VAR_4 = (uint32_t)VAR_3;

 VAR_6 = 0;
 while (VAR_4 > VAR_2) {
  VAR_6++;
  VAR_4 >>= 1;
 }
 if (VAR_6 >= 7)
  VAR_6 = 7;





 FUNC_1(VAR_1, VAR_0, VAR_6);
 return (0);
}
