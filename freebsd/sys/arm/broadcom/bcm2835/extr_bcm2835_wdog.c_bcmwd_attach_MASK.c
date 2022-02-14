
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcmwd_softc {int wdog_period; int mtx; int regs_offset; int * res; int bsh; int bst; int dev; scalar_t__ wdog_armed; int wdog_passwd; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct bcmwd_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct bcmwd_softc* VAR_7 ;
 int VAR_8 ;
 int * FUNC_1 (int ,int ,int*,int ) ;
 int VAR_9 ;
 struct bcmwd_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,char*,char*,int ) ;
 TYPE_1__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_8(device_t VAR_11)
{
 struct bcmwd_softc *VAR_12;
 int VAR_13;

 if (VAR_7 != ((void*)0))
  return (VAR_1);

 VAR_12 = FUNC_2(VAR_11);
 VAR_12->wdog_period = 7;
 VAR_12->wdog_passwd = VAR_0;
 VAR_12->wdog_armed = 0;
 VAR_12->dev = VAR_11;

 VAR_13 = 0;
 VAR_12->res = FUNC_1(VAR_11, VAR_4, &VAR_13, VAR_3);
 if (VAR_12->res == ((void*)0)) {
  FUNC_3(VAR_11, "could not allocate memory resource\n");
  return (VAR_1);
 }

 VAR_12->bst = FUNC_7(VAR_12->res);
 VAR_12->bsh = FUNC_6(VAR_12->res);


 if (FUNC_5(VAR_11, VAR_9)->ocd_data
    == VAR_5)
  VAR_12->regs_offset = VAR_6;

 VAR_7 = VAR_12;
 FUNC_4(&VAR_12->mtx, "BCM2835 Watchdog", "bcmwd", VAR_2);
 FUNC_0(VAR_10, VAR_8, VAR_12, 0);

 return (0);
}
