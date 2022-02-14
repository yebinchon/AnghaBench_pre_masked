
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pmu_softc {int * res; int bsh; int bst; int model; int dev; } ;
typedef int device_t ;
struct TYPE_2__ {int ocd_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int VAR_1 ;
 struct pmu_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 TYPE_1__* FUNC_3 (int ,int ) ;
 struct pmu_softc* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct pmu_softc *VAR_5;

 VAR_5 = FUNC_1(VAR_4);
 VAR_5->dev = VAR_4;
 VAR_5->model = FUNC_3(VAR_4, VAR_1)->ocd_data;

 if (FUNC_0(VAR_4, VAR_3, VAR_5->res)) {
  FUNC_2(VAR_4, "could not allocate resources\n");
  return (VAR_0);
 }


 VAR_5->bst = FUNC_5(VAR_5->res[0]);
 VAR_5->bsh = FUNC_4(VAR_5->res[0]);

 VAR_2 = VAR_5;

 return (0);
}
