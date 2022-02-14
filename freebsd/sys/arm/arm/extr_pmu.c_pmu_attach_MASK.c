
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pmu_softc {int * ih; int ** res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int **) ;
 int FUNC_1 (int ,int *,int,int ,int *,int *,int *) ;
 scalar_t__* VAR_6 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 struct pmu_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_6(device_t VAR_10)
{
 struct pmu_softc *VAR_11;



 int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_4(VAR_10);
 VAR_11->dev = VAR_10;

 if (FUNC_0(VAR_10, VAR_9, VAR_11->res)) {
  FUNC_5(VAR_10, "could not allocate resources\n");
  return (VAR_0);
 }


 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  if (VAR_11->res[VAR_13] == ((void*)0))
   break;

  VAR_12 = FUNC_1(VAR_10, VAR_11->res[VAR_13], VAR_1 | VAR_2,
      VAR_8, ((void*)0), ((void*)0), &VAR_11->ih[VAR_13]);
  if (VAR_12) {
   FUNC_5(VAR_10, "Unable to setup interrupt handler.\n");
   return (VAR_0);
  }
 }
 return (0);
}
