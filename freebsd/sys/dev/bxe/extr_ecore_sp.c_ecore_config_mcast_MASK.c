
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_raw_obj {int (* clear_pending ) (struct ecore_raw_obj*) ;int (* set_pending ) (struct ecore_raw_obj*) ;scalar_t__ (* check_pending ) (struct ecore_raw_obj*) ;} ;
struct ecore_mcast_ramrod_params {int ramrod_flags; int mcast_list_len; struct ecore_mcast_obj* mcast_obj; } ;
struct ecore_mcast_obj {int (* get_registry_size ) (struct ecore_mcast_obj*) ;int (* validate ) (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int) ;scalar_t__ total_pending_num; scalar_t__ max_cmd_len; int (* enqueue_cmd ) (struct bxe_softc*,struct ecore_mcast_obj*,struct ecore_mcast_ramrod_params*,int) ;int (* config_mcast ) (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int) ;int (* wait_comp ) (struct bxe_softc*,struct ecore_mcast_obj*) ;int (* revert ) (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int) ;int (* check_sched ) (struct ecore_mcast_obj*) ;struct ecore_raw_obj raw; } ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_mcast_cmd { ____Placeholder_ecore_mcast_cmd } ecore_mcast_cmd ;


 int FUNC_0 (struct bxe_softc*,char*,scalar_t__,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct ecore_mcast_obj*) ;
 int FUNC_3 (struct ecore_raw_obj*) ;
 int FUNC_4 (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int) ;
 int FUNC_5 (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int) ;
 int FUNC_6 (struct ecore_mcast_obj*) ;
 scalar_t__ FUNC_7 (struct ecore_raw_obj*) ;
 int FUNC_8 (struct bxe_softc*,struct ecore_mcast_obj*,struct ecore_mcast_ramrod_params*,int) ;
 scalar_t__ FUNC_9 (struct ecore_raw_obj*) ;
 int FUNC_10 (struct ecore_raw_obj*) ;
 int FUNC_11 (struct bxe_softc*,struct ecore_mcast_ramrod_params*,int) ;
 int FUNC_12 (struct bxe_softc*,struct ecore_mcast_obj*) ;

int FUNC_13(struct bxe_softc *VAR_2,
         struct ecore_mcast_ramrod_params *VAR_3,
         enum ecore_mcast_cmd VAR_4)
{
 struct ecore_mcast_obj *VAR_5 = VAR_3->mcast_obj;
 struct ecore_raw_obj *VAR_6 = &VAR_5->raw;
 int VAR_7 = 0, VAR_8;




 VAR_8 = VAR_5->get_registry_size(VAR_5);


 VAR_7 = VAR_5->validate(VAR_2, VAR_3, VAR_4);
 if (VAR_7)
  return VAR_7;


 if ((!VAR_3->mcast_list_len) && (!VAR_5->check_sched(VAR_5)))
  return VAR_0;

 FUNC_0(VAR_2, "o->total_pending_num=%d p->mcast_list_len=%d o->max_cmd_len=%d\n",
    VAR_5->total_pending_num, VAR_3->mcast_list_len, VAR_5->max_cmd_len);




 if (VAR_6->check_pending(VAR_6) ||
     ((VAR_5->max_cmd_len > 0) && (VAR_5->total_pending_num > VAR_5->max_cmd_len))) {
  VAR_7 = VAR_5->enqueue_cmd(VAR_2, VAR_3->mcast_obj, VAR_3, VAR_4);
  if (VAR_7 < 0)
   goto error_exit1;




  VAR_3->mcast_list_len = 0;
 }

 if (!VAR_6->check_pending(VAR_6)) {


  VAR_6->set_pending(VAR_6);


  VAR_7 = VAR_5->config_mcast(VAR_2, VAR_3, VAR_4);
  if (VAR_7 < 0)
   goto error_exit2;


  if (FUNC_1(VAR_1, &VAR_3->ramrod_flags))
   VAR_7 = VAR_5->wait_comp(VAR_2, VAR_5);
 }

 return VAR_7;

error_exit2:
 VAR_6->clear_pending(VAR_6);

error_exit1:
 VAR_5->revert(VAR_2, VAR_3, VAR_8);

 return VAR_7;
}
