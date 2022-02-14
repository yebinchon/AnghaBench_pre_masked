
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_pmu_softc {int chipc_dev; int dev; int clkctl; int query; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bhnd_pmu_softc*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;
 struct bhnd_pmu_softc* FUNC_5 (int ) ;

int
FUNC_6(device_t VAR_2)
{
 struct bhnd_pmu_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(VAR_2);

 if ((VAR_4 = FUNC_1(VAR_2, VAR_0)))
  return (VAR_4);

 FUNC_0(VAR_3);
 FUNC_3(&VAR_3->query);
 FUNC_2(VAR_3->clkctl);
 FUNC_4(VAR_3->dev, VAR_3->chipc_dev, VAR_1);

 return (0);
}
