
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct glxsb_session* to_ses; struct cryptop* to_crp; struct cryptodesc* to_enccrd; struct cryptodesc* to_maccrd; } ;
struct glxsb_softc {int sc_cid; int sc_task_mtx; int sc_task_count; TYPE_1__ sc_to; } ;
struct glxsb_session {int dummy; } ;
struct cryptop {int crp_etype; } ;
struct cryptodesc {struct cryptodesc* crd_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct cryptop*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cryptop*,struct cryptodesc*,struct glxsb_session*,struct glxsb_softc*) ;
 int FUNC_3 (struct glxsb_session*,struct cryptodesc*,struct cryptop*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, int VAR_2)
{
 struct glxsb_softc *VAR_3 = VAR_1;
 struct glxsb_session *VAR_4;
 struct cryptop *VAR_5;
 struct cryptodesc *VAR_6, *VAR_7;
 int VAR_8;

 VAR_7 = VAR_3->sc_to.to_maccrd;
 VAR_6 = VAR_3->sc_to.to_enccrd;
 VAR_5 = VAR_3->sc_to.to_crp;
 VAR_4 = VAR_3->sc_to.to_ses;


 if (VAR_7 != ((void*)0) && VAR_7->crd_next == VAR_6) {
  VAR_8 = FUNC_3(VAR_4, VAR_7, VAR_5);
  if (VAR_8 != 0)
   goto out;
 }

 VAR_8 = FUNC_2(VAR_5, VAR_6, VAR_4, VAR_3);
 if (VAR_8 != 0)
  goto out;


 if (VAR_7 != ((void*)0) && VAR_6->crd_next == VAR_7) {
  VAR_8 = FUNC_3(VAR_4, VAR_7, VAR_5);
  if (VAR_8 != 0)
   goto out;
 }
out:
 FUNC_4(&VAR_3->sc_task_mtx);
 VAR_3->sc_task_count--;
 FUNC_5(&VAR_3->sc_task_mtx);

 VAR_5->crp_etype = VAR_8;
 FUNC_1(VAR_3->sc_cid, VAR_0);
 FUNC_0(VAR_5);
}
