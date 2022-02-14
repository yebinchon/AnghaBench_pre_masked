
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ecore_qable_obj {int dummy; } ecore_qable_obj ;
typedef int uint8_t ;
typedef int uint32_t ;
struct ecore_vlan_mac_obj {int exe_queue; int ramrod_cmd; int check_move; int check_add; int check_del; int set_one_rule; int put_cam_offset; int get_cam_offset; int put_credit; int get_credit; } ;
struct ecore_credit_pool_obj {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_obj_type ;
typedef int ecore_dma_addr_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct bxe_softc*,int *,int ,union ecore_qable_obj*,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct ecore_vlan_mac_obj*,int ,int ,int ,void*,int ,int,unsigned long*,int ,struct ecore_credit_pool_obj*,struct ecore_credit_pool_obj*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_5(struct bxe_softc *VAR_15,
    struct ecore_vlan_mac_obj *VAR_16,
    uint8_t VAR_17, uint32_t VAR_18, uint8_t VAR_19, void *VAR_20,
    ecore_dma_addr_t VAR_21, int VAR_22,
    unsigned long *VAR_23, ecore_obj_type VAR_24,
    struct ecore_credit_pool_obj *VAR_25,
    struct ecore_credit_pool_obj *VAR_26)
{
 union ecore_qable_obj *VAR_27 =
  (union ecore_qable_obj *)VAR_16;

 FUNC_4(VAR_16, VAR_17, VAR_18, VAR_19,
       VAR_20, VAR_21, VAR_22, VAR_23,
       VAR_24, VAR_25, VAR_26);


 VAR_16->get_credit = VAR_8;
 VAR_16->put_credit = VAR_11;




 VAR_16->get_cam_offset = VAR_7;
 VAR_16->put_cam_offset = VAR_10;

 if (FUNC_0(VAR_15)) {
  FUNC_2("Do not support chips others than E2/E3\n");
  FUNC_1();
 } else {
  VAR_16->set_one_rule = VAR_13;
  VAR_16->check_del = VAR_4;
  VAR_16->check_add = VAR_3;
  VAR_16->check_move = VAR_2;
  VAR_16->ramrod_cmd =
   VAR_1;


  FUNC_3(VAR_15,
         &VAR_16->exe_queue,
         VAR_0,
         VAR_27, VAR_14,
         VAR_12,
         VAR_9,
         VAR_5,
         VAR_6);
 }
}
