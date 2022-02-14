
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_rtc_softc {int res; int mutex; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ) ;
 struct mv_rtc_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct mv_rtc_softc *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 FUNC_2(&VAR_2->mutex);

 FUNC_0(VAR_1, VAR_0, VAR_2->res);

 return (0);
}
