
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_rr_softc {int sc_rr_tailq; int * sc_active; int sc_wait; } ;
struct TYPE_2__ {int units; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct g_rr_softc*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct g_rr_softc*,int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5(void *VAR_3)
{
 struct g_rr_softc *VAR_4 = VAR_3;

 FUNC_3(&VAR_4->sc_wait);
 FUNC_0(VAR_4->sc_active == ((void*)0), ("still a queue under service"));
 FUNC_0(FUNC_2(&VAR_4->sc_rr_tailq), ("still scheduled queues"));

 FUNC_1(VAR_4, VAR_2);
 VAR_1.units--;
 FUNC_4(VAR_4, VAR_0);
}
