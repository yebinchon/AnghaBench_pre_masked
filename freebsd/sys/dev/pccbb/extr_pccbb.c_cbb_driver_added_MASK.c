
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {int intrhand; } ;
typedef int driver_t ;
typedef int device_t ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int **,int*) ;
 struct cbb_softc* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

void
FUNC_8(device_t VAR_2, driver_t *VAR_3)
{
 struct cbb_softc *VAR_4 = FUNC_2(VAR_2);
 device_t *VAR_5;
 device_t VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 FUNC_0(VAR_3, VAR_2);
 VAR_7 = FUNC_1(VAR_2, &VAR_5, &VAR_8);
 if (VAR_7 != 0) {
  FUNC_4(VAR_2, "Cannot get children list, no reprobe\n");
  return;
 }
 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = VAR_5[VAR_7];
  if (FUNC_3(VAR_6) == VAR_0 &&
      FUNC_5(VAR_6) == 0)
   VAR_9++;
 }
 FUNC_6(VAR_5, VAR_1);

 if (VAR_9 > 0)
  FUNC_7(&VAR_4->intrhand);
}
