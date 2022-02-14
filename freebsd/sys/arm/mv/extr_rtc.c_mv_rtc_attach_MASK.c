
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_rtc_softc {int res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int) ;
 struct mv_rtc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct mv_rtc_softc *VAR_3;

 VAR_3 = FUNC_2(VAR_2);
 VAR_3->dev = VAR_2;

 FUNC_1(VAR_2, 1000000);

 if (FUNC_0(VAR_2, VAR_1, VAR_3->res)) {
  FUNC_3(VAR_2, "could not allocate resources\n");
  return (VAR_0);
 }

 return (0);
}
