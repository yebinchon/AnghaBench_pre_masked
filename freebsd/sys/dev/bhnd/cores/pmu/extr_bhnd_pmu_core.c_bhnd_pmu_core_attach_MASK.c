
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bhnd_resource {int dummy; } ;
struct bhnd_pmu_softc {int rid; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct bhnd_resource* FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ,struct bhnd_resource*) ;
 int FUNC_3 (int ,int ,int,struct bhnd_resource*) ;
 struct bhnd_pmu_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3)
{
 struct bhnd_pmu_softc *VAR_4;
 struct bhnd_resource *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_4 = FUNC_4(VAR_3);


 VAR_7 = 0;
 VAR_5 = FUNC_1(VAR_3, VAR_2, &VAR_7, VAR_1);
 if (VAR_5 == ((void*)0)) {
  FUNC_5(VAR_3, "failed to allocate resources\n");
  return (VAR_0);
 }


 if ((VAR_6 = FUNC_0(VAR_3))) {
  FUNC_5(VAR_4->dev, "failed to allocate PMU state: %d\n",
      VAR_6);

  return (VAR_6);
 }


 if ((VAR_6 = FUNC_2(VAR_3, VAR_5))) {
  FUNC_3(VAR_3, VAR_2, VAR_7, VAR_5);
  return (VAR_6);
 }

 VAR_4->rid = VAR_7;
 return (0);
}
