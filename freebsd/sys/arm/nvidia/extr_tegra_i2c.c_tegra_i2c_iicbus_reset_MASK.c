
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct tegra_i2c_softc {int iicbus; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct tegra_i2c_softc*) ;
 int FUNC_2 (struct tegra_i2c_softc*) ;
 struct tegra_i2c_softc* FUNC_3 (int ) ;
 int FUNC_4 (struct tegra_i2c_softc*,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_0, u_char VAR_1, u_char VAR_2, u_char *VAR_3)
{
 struct tegra_i2c_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_0);
 VAR_5 = FUNC_0(VAR_4->iicbus, VAR_1);
 VAR_4 = FUNC_3(VAR_0);
 FUNC_1(VAR_4);
 FUNC_4(VAR_4, VAR_5);
 FUNC_2(VAR_4);
 return (0);
}
