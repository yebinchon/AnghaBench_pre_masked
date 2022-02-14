
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_queue_state_params {int ramrod_flags; struct ecore_queue_sp_obj* q_obj; } ;
struct ecore_queue_sp_obj {unsigned long pending; int (* check_transition ) (struct bxe_softc*,struct ecore_queue_sp_obj*,struct ecore_queue_state_params*) ;int (* set_pending ) (struct ecore_queue_sp_obj*,struct ecore_queue_state_params*) ;int (* send_cmd ) (struct bxe_softc*,struct ecore_queue_state_params*) ;int (* wait_comp ) (struct bxe_softc*,struct ecore_queue_sp_obj*,int) ;int next_state; int (* complete_cmd ) (struct bxe_softc*,struct ecore_queue_sp_obj*,int) ;} ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct bxe_softc*,char*,unsigned long) ;
 int VAR_1 ;
 int FUNC_3 (int,unsigned long*) ;
 int FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct bxe_softc*,struct ecore_queue_sp_obj*,struct ecore_queue_state_params*) ;
 int FUNC_7 (struct ecore_queue_sp_obj*,struct ecore_queue_state_params*) ;
 int FUNC_8 (struct bxe_softc*,struct ecore_queue_sp_obj*,int) ;
 int FUNC_9 (struct bxe_softc*,struct ecore_queue_state_params*) ;
 int FUNC_10 (struct bxe_softc*,struct ecore_queue_sp_obj*,int) ;

int FUNC_11(struct bxe_softc *VAR_5,
        struct ecore_queue_state_params *VAR_6)
{
 struct ecore_queue_sp_obj *VAR_7 = VAR_6->q_obj;
 int VAR_8, VAR_9;
 unsigned long *VAR_10 = &VAR_7->pending;


 VAR_8 = VAR_7->check_transition(VAR_5, VAR_7, VAR_6);
 if (VAR_8) {
  FUNC_1("check transition returned an error. rc %d\n", VAR_8);
  return VAR_0;
 }


 FUNC_2(VAR_5, "pending bit was=%lx\n", VAR_7->pending);
 VAR_9 = VAR_7->set_pending(VAR_7, VAR_6);
 FUNC_2(VAR_5, "pending bit now=%lx\n", VAR_7->pending);


 if (FUNC_5(VAR_4, &VAR_6->ramrod_flags))
  VAR_7->complete_cmd(VAR_5, VAR_7, VAR_9);
 else {

  VAR_8 = VAR_7->send_cmd(VAR_5, VAR_6);
  if (VAR_8) {
   VAR_7->next_state = VAR_1;
   FUNC_0(VAR_9, VAR_10);
   FUNC_4();
   return VAR_8;
  }

  if (FUNC_5(VAR_3, &VAR_6->ramrod_flags)) {
   VAR_8 = VAR_7->wait_comp(VAR_5, VAR_7, VAR_9);
   if (VAR_8)
    return VAR_8;

   return VAR_2;
  }
 }

 return FUNC_3(VAR_9, VAR_10);
}
