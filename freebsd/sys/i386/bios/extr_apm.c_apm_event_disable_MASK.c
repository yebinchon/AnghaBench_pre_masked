
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_softc {scalar_t__ initialized; int * event_thread; int mtx; int cv; scalar_t__ running; scalar_t__ active; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct apm_softc VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void)
{
 struct apm_softc *VAR_2 = &VAR_1;

 FUNC_0("called apm_event_disable()\n");

 if (VAR_2 == ((void*)0) || VAR_2->initialized == 0)
  return;

 FUNC_3(&VAR_2->mtx);
 VAR_2->active = 0;
 while (VAR_2->running) {
  FUNC_1(&VAR_2->cv);
  FUNC_2(VAR_2->event_thread, &VAR_2->mtx, VAR_0, "apmdie", 0);
 }
 FUNC_4(&VAR_2->mtx);
 VAR_2->event_thread = ((void*)0);
 return;
}
