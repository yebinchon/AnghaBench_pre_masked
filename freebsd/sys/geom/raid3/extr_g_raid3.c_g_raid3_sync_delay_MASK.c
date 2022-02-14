
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_raid3_softc {int sc_sync_delayed; } ;
struct bio {int dummy; } ;


 int FUNC_0 (int,struct bio*,char*) ;
 int FUNC_1 (int *,struct bio*) ;

__attribute__((used)) static void
FUNC_2(struct g_raid3_softc *VAR_0, struct bio *VAR_1)
{

 FUNC_0(2, VAR_1, "Delaying synchronization request.");
 FUNC_1(&VAR_0->sc_sync_delayed, VAR_1);
}
