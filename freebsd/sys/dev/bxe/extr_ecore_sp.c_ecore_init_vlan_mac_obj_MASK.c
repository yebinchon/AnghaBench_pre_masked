
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ecore_qable_obj {int dummy; } ecore_qable_obj ;
typedef int uint8_t ;
typedef int uint32_t ;
struct ecore_vlan_mac_obj {int exe_queue; int ramrod_cmd; int check_move; void* check_add; void* check_del; int set_one_rule; int put_cam_offset; int get_cam_offset; int put_credit; int get_credit; } ;
struct ecore_credit_pool_obj {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_obj_type ;
typedef int ecore_dma_addr_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_4 (struct bxe_softc*,int *,int,union ecore_qable_obj*,int ,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (struct ecore_vlan_mac_obj*,int ,int ,int ,void*,int ,int,unsigned long*,int ,struct ecore_credit_pool_obj*,struct ecore_credit_pool_obj*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

void FUNC_6(struct bxe_softc *VAR_18,
        struct ecore_vlan_mac_obj *VAR_19,
        uint8_t VAR_20, uint32_t VAR_21, uint8_t VAR_22, void *VAR_23,
        ecore_dma_addr_t VAR_24, int VAR_25,
        unsigned long *VAR_26, ecore_obj_type VAR_27,
        struct ecore_credit_pool_obj *VAR_28,
        struct ecore_credit_pool_obj *VAR_29)
{
 union ecore_qable_obj *VAR_30 =
  (union ecore_qable_obj *)VAR_19;

 FUNC_5(VAR_19, VAR_20, VAR_21, VAR_22, VAR_23,
       VAR_24, VAR_25, VAR_26, VAR_27,
       VAR_28, VAR_29);


 VAR_19->get_credit = VAR_10;
 VAR_19->put_credit = VAR_13;




 VAR_19->get_cam_offset = VAR_9;
 VAR_19->put_cam_offset = VAR_12;

 if (FUNC_0(VAR_18)) {
  FUNC_3("Do not support chips others than E2\n");
  FUNC_2();
 } else if (FUNC_1(VAR_18)) {
  VAR_19->set_one_rule = VAR_15;
  VAR_19->check_del = VAR_6;
  VAR_19->check_add = VAR_5;
  VAR_19->check_move = VAR_4;
  VAR_19->ramrod_cmd = VAR_2;


  FUNC_4(VAR_18,
         &VAR_19->exe_queue, 1, VAR_30,
         VAR_17,
         VAR_14,
         VAR_11,
         VAR_7,
         VAR_8);
 } else {
  VAR_19->set_one_rule = VAR_16;
  VAR_19->check_del = VAR_6;
  VAR_19->check_add = VAR_5;
  VAR_19->check_move = VAR_3;
  VAR_19->ramrod_cmd =
   VAR_1;


  FUNC_4(VAR_18,
         &VAR_19->exe_queue,
         VAR_0,
         VAR_30, VAR_17,
         VAR_14,
         VAR_11,
         VAR_7,
         VAR_8);
 }
}
