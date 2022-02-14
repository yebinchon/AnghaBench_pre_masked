
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk30_wd_softc {int freq; int mtx; int * res; int dev; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;
typedef int cell ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct rk30_wd_softc*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,char*,int*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_2 (int ,int ,int*,int ) ;
 struct rk30_wd_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,char*,char*,int ) ;
 int FUNC_6 (int ) ;
 struct rk30_wd_softc* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_7)
{
 struct rk30_wd_softc *VAR_8;
 int VAR_9;
 phandle_t VAR_10;
 pcell_t VAR_11;

 if (VAR_4 != ((void*)0))
  return (VAR_0);

 VAR_8 = FUNC_3(VAR_7);
 VAR_8->dev = VAR_7;

 VAR_10 = FUNC_6(VAR_8->dev);
 if (FUNC_1(VAR_10, "clock-frequency", &VAR_11, sizeof(VAR_11)) > 0)
  VAR_8->freq = VAR_11 / 1000000;
 else
  return (VAR_0);

 VAR_9 = 0;
 VAR_8->res = FUNC_2(VAR_7, VAR_3, &VAR_9, VAR_2);
 if (VAR_8->res == ((void*)0)) {
  FUNC_4(VAR_7, "could not allocate memory resource\n");
  return (VAR_0);
 }

 VAR_4 = VAR_8;
 FUNC_5(&VAR_8->mtx, "RK30XX Watchdog", "rk30_wd", VAR_1);
 FUNC_0(VAR_6, VAR_5, VAR_8, 0);

 return (0);
}
