
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_i2c_softc {int core_freq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tegra_i2c_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct tegra_i2c_softc *VAR_3, int VAR_4)
{
 int VAR_5;

 VAR_5 = ((VAR_3->core_freq / VAR_4) / 10) - 1;
 if ((VAR_3->core_freq / (10 * (VAR_5 + 1))) > VAR_4)
  VAR_5++;
 if (VAR_5 > 65535)
  VAR_5 = 65535;
 FUNC_0(VAR_3, VAR_0,
     (1 << VAR_1) |
     (VAR_5 << VAR_2));
}
