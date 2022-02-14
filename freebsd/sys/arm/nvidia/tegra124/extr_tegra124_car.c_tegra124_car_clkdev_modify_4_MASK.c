
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra124_car_softc {int mem_res; } ;
typedef int device_t ;
typedef int bus_addr_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct tegra124_car_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, bus_addr_t VAR_1, uint32_t VAR_2,
    uint32_t VAR_3)
{
 struct tegra124_car_softc *VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_2(VAR_0);
 VAR_5 = FUNC_0(VAR_4->mem_res, VAR_1);
 VAR_5 &= ~VAR_2;
 VAR_5 |= VAR_3;
 FUNC_1(VAR_4->mem_res, VAR_1, VAR_5);
 return (0);
}
