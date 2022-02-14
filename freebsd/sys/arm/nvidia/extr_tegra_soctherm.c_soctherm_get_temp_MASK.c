
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soctherm_softc {uintptr_t ntsensors; TYPE_1__* tsensors; } ;
typedef int device_t ;
struct TYPE_2__ {uintptr_t id; } ;


 int VAR_0 ;
 struct soctherm_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct soctherm_softc*,TYPE_1__*,int*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1, device_t VAR_2, uintptr_t VAR_3, int *VAR_4)
{
 struct soctherm_softc *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_1);

 if (VAR_3 >= 0x100) {
  VAR_3 -= 0x100;
  if (VAR_3 >= VAR_5->ntsensors)
   return (VAR_0);
  return(FUNC_1(VAR_5, VAR_5->tsensors + VAR_3, VAR_4));
 }

 for (VAR_6 = 0; VAR_6 < VAR_5->ntsensors; VAR_6++) {
  if (VAR_5->tsensors->id == VAR_3)
   return(FUNC_1(VAR_5, VAR_5->tsensors + VAR_3, VAR_4));
 }
 return (VAR_0);
}
