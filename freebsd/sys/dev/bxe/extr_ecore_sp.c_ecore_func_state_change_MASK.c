
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_func_state_params {int cmd; int ramrod_flags; struct ecore_func_sp_obj* f_obj; } ;
struct ecore_func_sp_obj {unsigned long pending; int (* check_transition ) (struct bxe_softc*,struct ecore_func_sp_obj*,struct ecore_func_state_params*) ;int (* send_cmd ) (struct bxe_softc*,struct ecore_func_state_params*) ;int (* wait_comp ) (struct bxe_softc*,struct ecore_func_sp_obj*,int) ;int next_state; int one_pending_mutex; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_func_cmd { ____Placeholder_ecore_func_cmd } ecore_func_cmd ;


 int VAR_0 ;
 int FUNC_0 (int,unsigned long*) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int,unsigned long*) ;
 int FUNC_6 (int,unsigned long*) ;
 int FUNC_7 () ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct bxe_softc*,struct ecore_func_sp_obj*,int) ;
 int FUNC_10 (struct bxe_softc*,struct ecore_func_sp_obj*,struct ecore_func_state_params*) ;
 int FUNC_11 (struct bxe_softc*,struct ecore_func_sp_obj*,struct ecore_func_state_params*) ;
 int FUNC_12 (struct bxe_softc*,struct ecore_func_state_params*) ;
 int FUNC_13 (struct bxe_softc*,struct ecore_func_sp_obj*,int) ;

int FUNC_14(struct bxe_softc *VAR_6,
       struct ecore_func_state_params *VAR_7)
{
 struct ecore_func_sp_obj *VAR_8 = VAR_7->f_obj;
 int VAR_9, VAR_10 = 300;
 enum ecore_func_cmd VAR_11 = VAR_7->cmd;
 unsigned long *VAR_12 = &VAR_8->pending;

 FUNC_3(&VAR_8->one_pending_mutex);


 VAR_9 = VAR_8->check_transition(VAR_6, VAR_8, VAR_7);
 if ((VAR_9 == VAR_0) &&
     (FUNC_8(VAR_5, &VAR_7->ramrod_flags))) {
  while ((VAR_9 == VAR_0) && (--VAR_10 > 0)) {
   FUNC_4(&VAR_8->one_pending_mutex);
   FUNC_2(10);
   FUNC_3(&VAR_8->one_pending_mutex);
   VAR_9 = VAR_8->check_transition(VAR_6, VAR_8, VAR_7);
  }
  if (VAR_9 == VAR_0) {
   FUNC_4(&VAR_8->one_pending_mutex);
   FUNC_1("timeout waiting for previous ramrod completion\n");
   return VAR_9;
  }
 } else if (VAR_9) {
  FUNC_4(&VAR_8->one_pending_mutex);
  return VAR_9;
 }


 FUNC_6(VAR_11, VAR_12);


 if (FUNC_8(VAR_4, &VAR_7->ramrod_flags)) {
  FUNC_9(VAR_6, VAR_8, VAR_11);
  FUNC_4(&VAR_8->one_pending_mutex);
 } else {

  VAR_9 = VAR_8->send_cmd(VAR_6, VAR_7);

  FUNC_4(&VAR_8->one_pending_mutex);

  if (VAR_9) {
   VAR_8->next_state = VAR_1;
   FUNC_0(VAR_11, VAR_12);
   FUNC_7();
   return VAR_9;
  }

  if (FUNC_8(VAR_3, &VAR_7->ramrod_flags)) {
   VAR_9 = VAR_8->wait_comp(VAR_6, VAR_8, VAR_11);
   if (VAR_9)
    return VAR_9;

   return VAR_2;
  }
 }

 return FUNC_5(VAR_11, VAR_12);
}
