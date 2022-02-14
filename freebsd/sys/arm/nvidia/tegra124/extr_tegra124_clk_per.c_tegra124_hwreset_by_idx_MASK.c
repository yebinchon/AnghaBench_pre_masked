
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra124_car_softc {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int,int) ;
 int FUNC_3 (int ,int,int*) ;
 int FUNC_4 (intptr_t) ;

int
FUNC_5(struct tegra124_car_softc *VAR_0, intptr_t VAR_1, bool VAR_2)
{
 uint32_t VAR_3, VAR_4, VAR_5;

 VAR_4 = 1 << (VAR_1 % 32);
 VAR_5 = FUNC_4(VAR_1);

 FUNC_0(VAR_0->dev);
 FUNC_2(VAR_0->dev, VAR_5, VAR_4, VAR_2 ? VAR_4 : 0);
 FUNC_3(VAR_0->dev, VAR_5, &VAR_3);
 FUNC_1(VAR_0->dev);

 return(0);
}
