
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_mcast_ramrod_params {scalar_t__ mcast_list_len; struct ecore_mcast_obj* mcast_obj; } ;
struct ecore_mcast_obj {scalar_t__ max_cmd_len; int total_pending_num; int (* set_registry_size ) (struct ecore_mcast_obj*,int) ;} ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct ecore_mcast_obj*,int) ;

__attribute__((used)) static void FUNC_1(struct bxe_softc *VAR_0,
          struct ecore_mcast_ramrod_params *VAR_1,
          int VAR_2)
{
 struct ecore_mcast_obj *VAR_3 = VAR_1->mcast_obj;

 VAR_3->set_registry_size(VAR_3, VAR_2);





 if (VAR_1->mcast_list_len)
  VAR_3->total_pending_num -= VAR_3->max_cmd_len;
}
