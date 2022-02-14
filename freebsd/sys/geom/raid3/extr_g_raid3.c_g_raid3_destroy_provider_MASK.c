
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct g_raid3_softc {int * sc_syncdisk; TYPE_1__* sc_provider; int sc_name; int sc_queue_mtx; int sc_queue; } ;
struct bio {int dummy; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 struct bio* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct bio*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (struct bio*,int ) ;
 int FUNC_6 (struct g_raid3_softc*,int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(struct g_raid3_softc *VAR_1)
{
 struct bio *VAR_2;

 FUNC_7();
 FUNC_1(VAR_1->sc_provider != ((void*)0), ("NULL provider (device=%s).",
     VAR_1->sc_name));

 FUNC_8();
 FUNC_4(VAR_1->sc_provider, VAR_0);
 FUNC_11(&VAR_1->sc_queue_mtx);
 while ((VAR_2 = FUNC_2(&VAR_1->sc_queue)) != ((void*)0)) {
  FUNC_3(&VAR_1->sc_queue, VAR_2);
  FUNC_5(VAR_2, VAR_0);
 }
 FUNC_12(&VAR_1->sc_queue_mtx);
 FUNC_0(0, "Device %s: provider %s destroyed.", VAR_1->sc_name,
     VAR_1->sc_provider->name);
 FUNC_10(VAR_1->sc_provider, VAR_0);
 FUNC_9();
 VAR_1->sc_provider = ((void*)0);
 if (VAR_1->sc_syncdisk != ((void*)0))
  FUNC_6(VAR_1, 1);
}
