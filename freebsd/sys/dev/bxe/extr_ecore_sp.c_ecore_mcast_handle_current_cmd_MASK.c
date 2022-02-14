
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_mcast_ramrod_params {scalar_t__ mcast_list_len; struct ecore_mcast_obj* mcast_obj; } ;
struct ecore_mcast_obj {int (* hdl_restore ) (struct bxe_softc*,struct ecore_mcast_obj*,int ,int*) ;} ;
struct bxe_softc {int dummy; } ;
typedef enum ecore_mcast_cmd { ____Placeholder_ecore_mcast_cmd } ecore_mcast_cmd ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;



 int FUNC_1 (struct bxe_softc*,char*,scalar_t__) ;
 int FUNC_2 (struct bxe_softc*,struct ecore_mcast_obj*,struct ecore_mcast_ramrod_params*,int*) ;
 int FUNC_3 (struct bxe_softc*,struct ecore_mcast_obj*,struct ecore_mcast_ramrod_params*,int*) ;
 int FUNC_4 (struct bxe_softc*,struct ecore_mcast_obj*,int ,int*) ;

__attribute__((used)) static inline int FUNC_5(struct bxe_softc *VAR_1,
   struct ecore_mcast_ramrod_params *VAR_2,
   enum ecore_mcast_cmd VAR_3,
   int VAR_4)
{
 struct ecore_mcast_obj *VAR_5 = VAR_2->mcast_obj;
 int VAR_6 = VAR_4;

 FUNC_1(VAR_1, "p->mcast_list_len=%d\n", VAR_2->mcast_list_len);

 switch (VAR_3) {
 case 130:
  FUNC_2(VAR_1, VAR_5, VAR_2, &VAR_6);
  break;

 case 129:
  FUNC_3(VAR_1, VAR_5, VAR_2, &VAR_6);
  break;

 case 128:
  VAR_5->hdl_restore(VAR_1, VAR_5, 0, &VAR_6);
  break;

 default:
  FUNC_0("Unknown command: %d\n", VAR_3);
  return VAR_0;
 }


 VAR_2->mcast_list_len = 0;

 return VAR_6;
}
