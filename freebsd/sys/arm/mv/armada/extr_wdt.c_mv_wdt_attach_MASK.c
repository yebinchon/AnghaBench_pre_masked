
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_wdt_softc {struct mv_wdt_config* wdt_config; int wdt_mtx; int wdt_res; } ;
struct mv_wdt_config {scalar_t__ wdt_clock_src; int (* wdt_disable ) () ;} ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct mv_wdt_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 struct mv_wdt_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *,char*,int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int VAR_5 ;
 struct mv_wdt_softc* VAR_6 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_7)
{
 struct mv_wdt_softc *VAR_8;
 int VAR_9;

 if (VAR_6 != ((void*)0))
  return (VAR_0);

 VAR_8 = FUNC_2(VAR_7);
 VAR_6 = VAR_8;

 VAR_9 = FUNC_1(VAR_7, VAR_4, &VAR_8->wdt_res);
 if (VAR_9) {
  FUNC_3(VAR_7, "could not allocate resources\n");
  return (VAR_0);
 }

 FUNC_5(&VAR_8->wdt_mtx, "watchdog", ((void*)0), VAR_1);

 VAR_8->wdt_config = (struct mv_wdt_config *)
    FUNC_6(VAR_7, VAR_3)->ocd_data;

 if (VAR_8->wdt_config->wdt_clock_src == 0)
  VAR_8->wdt_config->wdt_clock_src = FUNC_4();

 if (VAR_6->wdt_config->wdt_disable != ((void*)0))
  VAR_6->wdt_config->wdt_disable();
 FUNC_0(VAR_5, VAR_2, VAR_8, 0);

 return (0);
}
