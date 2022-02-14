
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct glxsb_session* to_ses; struct cryptop* to_crp; struct cryptodesc* to_enccrd; struct cryptodesc* to_maccrd; } ;
struct glxsb_softc {scalar_t__ sc_task_count; int sc_cryptotask; int sc_tq; int sc_task_mtx; TYPE_1__ sc_to; } ;
struct glxsb_session {int dummy; } ;
struct cryptop {int crp_etype; int crp_session; struct cryptodesc* crp_desc; int * crp_callback; } ;
struct cryptodesc {int crd_alg; int crd_len; struct cryptodesc* crd_next; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cryptop*) ;
 struct glxsb_session* FUNC_1 (int ) ;
 struct glxsb_softc* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_3, struct cryptop *VAR_4, int VAR_5)
{
 struct glxsb_softc *VAR_6 = FUNC_2(VAR_3);
 struct glxsb_session *VAR_7;
 struct cryptodesc *VAR_8, *VAR_9, *VAR_10;
 int VAR_11 = 0;

 VAR_9 = VAR_10 = ((void*)0);


 if (VAR_4 == ((void*)0))
  return (VAR_1);

 if (VAR_4->crp_callback == ((void*)0) || VAR_4->crp_desc == ((void*)0)) {
  VAR_11 = VAR_1;
  goto fail;
 }

 for (VAR_8 = VAR_4->crp_desc; VAR_8 != ((void*)0); VAR_8 = VAR_8->crd_next) {
  switch (VAR_8->crd_alg) {
  case 133:
  case 134:
  case 131:
  case 132:
  case 130:
  case 129:
  case 128:
   if (VAR_10 != ((void*)0)) {
    VAR_11 = VAR_1;
    goto fail;
   }
   VAR_10 = VAR_8;
   break;
  case 135:
   if (VAR_9 != ((void*)0)) {
    VAR_11 = VAR_1;
    goto fail;
   }
   VAR_9 = VAR_8;
   break;
  default:
   VAR_11 = VAR_1;
   goto fail;
  }
 }

 if (VAR_9 == ((void*)0) || VAR_9->crd_len % VAR_0 != 0) {
  VAR_11 = VAR_1;
  goto fail;
 }

 VAR_7 = FUNC_1(VAR_4->crp_session);

 FUNC_3(&VAR_6->sc_task_mtx);
 if (VAR_6->sc_task_count != 0) {
  FUNC_4(&VAR_6->sc_task_mtx);
  return (VAR_2);
 }
 VAR_6->sc_task_count++;

 VAR_6->sc_to.to_maccrd = VAR_10;
 VAR_6->sc_to.to_enccrd = VAR_9;
 VAR_6->sc_to.to_crp = VAR_4;
 VAR_6->sc_to.to_ses = VAR_7;
 FUNC_4(&VAR_6->sc_task_mtx);

 FUNC_5(VAR_6->sc_tq, &VAR_6->sc_cryptotask);
 return(0);

fail:
 VAR_4->crp_etype = VAR_11;
 FUNC_0(VAR_4);
 return (VAR_11);
}
