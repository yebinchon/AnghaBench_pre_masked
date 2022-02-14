
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct apm_softc {int running; int mtx; int cv; int bios_busy; int suspend_countdown; scalar_t__ suspends; int standby_countdown; scalar_t__ standbys; scalar_t__ active; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;
 struct apm_softc VAR_1 ;
 int FUNC_4 (int *,int *,int) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_3)
{
 struct apm_softc *VAR_4 = &VAR_1;

 VAR_4->running = 1;
 while (VAR_4->active) {
  if (VAR_0)
   FUNC_2();
  if (VAR_4->standbys && VAR_4->standby_countdown-- <= 0)
   FUNC_0();
  if (VAR_4->suspends && VAR_4->suspend_countdown-- <= 0)
   FUNC_1();
  if (!VAR_4->bios_busy)
   FUNC_3();
  FUNC_6(&VAR_4->mtx);
  FUNC_4(&VAR_4->cv, &VAR_4->mtx, 10 * VAR_2 / 9);
  FUNC_7(&VAR_4->mtx);
 }
 VAR_4->running = 0;
 FUNC_5(0);
}
