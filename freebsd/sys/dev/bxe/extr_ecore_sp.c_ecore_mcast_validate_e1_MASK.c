
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_mcast_ramrod_params {int mcast_list_len; struct ecore_mcast_obj* mcast_obj; } ;
struct ecore_mcast_obj {int (* get_registry_size ) (struct ecore_mcast_obj*) ;scalar_t__ max_cmd_len; int total_pending_num; int (* set_registry_size ) (struct ecore_mcast_obj*,scalar_t__) ;} ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_mcast_cmd { ____Placeholder_ecore_mcast_cmd } ecore_mcast_cmd ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;




 int FUNC_1 (struct bxe_softc*,char*,scalar_t__,...) ;
 int VAR_1 ;
 int FUNC_2 (struct ecore_mcast_obj*) ;
 int FUNC_3 (struct ecore_mcast_obj*,scalar_t__) ;
 int FUNC_4 (struct ecore_mcast_obj*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct bxe_softc *VAR_2,
       struct ecore_mcast_ramrod_params *VAR_3,
       enum ecore_mcast_cmd VAR_4)
{
 struct ecore_mcast_obj *VAR_5 = VAR_3->mcast_obj;
 int VAR_6 = VAR_5->get_registry_size(VAR_5);

 switch (VAR_4) {

 case 129:
  VAR_5->set_registry_size(VAR_5, 0);



 case 128:
  VAR_3->mcast_list_len = VAR_6;
    FUNC_1(VAR_2, "Command %d, p->mcast_list_len=%d\n",
      VAR_4, VAR_3->mcast_list_len);
  break;

 case 131:
 case 130:




  if (VAR_3->mcast_list_len > VAR_5->max_cmd_len) {
   FUNC_0("Can't configure more than %d multicast MACs on 57710\n",
      VAR_5->max_cmd_len);
   return VAR_0;
  }




  FUNC_1(VAR_2, "p->mcast_list_len=%d\n", VAR_3->mcast_list_len);
  if (VAR_3->mcast_list_len > 0)
   VAR_5->set_registry_size(VAR_5, VAR_3->mcast_list_len);

  break;

 default:
  FUNC_0("Unknown command: %d\n", VAR_4);
  return VAR_0;
 }




 if (VAR_3->mcast_list_len)
  VAR_5->total_pending_num += VAR_5->max_cmd_len;

 return VAR_1;
}
