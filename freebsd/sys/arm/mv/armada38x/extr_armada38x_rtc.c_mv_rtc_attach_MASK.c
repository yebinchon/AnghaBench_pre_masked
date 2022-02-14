
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_rtc_softc {int mutex; int res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 struct mv_rtc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *,int ) ;
 int FUNC_8 (struct mv_rtc_softc*) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4)
{
 struct mv_rtc_softc *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_4(VAR_4);

 VAR_5 = FUNC_3(VAR_4);
 VAR_5->dev = VAR_4;

 FUNC_1(VAR_4, VAR_2);

 FUNC_7(&VAR_5->mutex, FUNC_2(VAR_4), ((void*)0), VAR_1);

 VAR_7 = FUNC_0(VAR_4, VAR_3, VAR_5->res);

 if (VAR_7 != 0) {
  FUNC_5(VAR_4, "could not allocate resources\n");
  FUNC_6(&VAR_5->mutex);
  return (VAR_0);
 }
 FUNC_8(VAR_5);

 return (0);
}
