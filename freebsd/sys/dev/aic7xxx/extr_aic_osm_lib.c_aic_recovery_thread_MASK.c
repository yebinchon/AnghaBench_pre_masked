
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aic_softc {int flags; TYPE_1__* platform_data; int timedout_scbs; } ;
struct TYPE_2__ {int * recovery_thread; int mtx; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (struct aic_softc*) ;
 int FUNC_2 (struct aic_softc*) ;
 int FUNC_3 (struct aic_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct aic_softc*,int *,int ,char*,int ) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_2)
{
 struct aic_softc *VAR_3;

 VAR_3 = (struct aic_softc *)VAR_2;
 FUNC_1(VAR_3);
 for (;;) {

  if (FUNC_0(&VAR_3->timedout_scbs) != 0
   && (VAR_3->flags & VAR_0) == 0)
   FUNC_5(VAR_3, &VAR_3->platform_data->mtx, VAR_1, "idle", 0);

  if ((VAR_3->flags & VAR_0) != 0)
   break;

  FUNC_2(VAR_3);
 }
 VAR_3->platform_data->recovery_thread = ((void*)0);
 FUNC_6(VAR_3->platform_data);
 FUNC_3(VAR_3);
 FUNC_4(0);
}
