
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_softc {scalar_t__ initialized; int active; int event_thread; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct apm_softc VAR_1 ;
 scalar_t__ FUNC_1 (int ,struct apm_softc*,int *,int ,int ,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void
FUNC_3(void)
{
 struct apm_softc *VAR_2 = &VAR_1;

 FUNC_0("called apm_event_enable()\n");

 if (VAR_2 == ((void*)0) || VAR_2->initialized == 0)
  return;


 VAR_2->active = 1;
 if (FUNC_1(VAR_0, VAR_2, &VAR_2->event_thread, 0, 0,
     "apm worker"))
  FUNC_2("Cannot create apm worker thread");

 return;
}
