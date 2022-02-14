
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ecore_qable_obj {int dummy; } ecore_qable_obj ;
typedef int uint8_t ;
typedef int uint32_t ;
struct ecore_vlan_mac_obj {int exe_queue; int get_n_elements; int ramrod_cmd; int check_move; void* check_add; void* check_del; int set_one_rule; int put_cam_offset; int get_cam_offset; int put_credit; int get_credit; } ;
struct ecore_credit_pool_obj {int dummy; } ;
struct bxe_softc {int dummy; } ;
typedef int ecore_obj_type ;
typedef int ecore_dma_addr_t ;


 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct bxe_softc*,int *,int,union ecore_qable_obj*,int ,int ,int ,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct ecore_vlan_mac_obj*,int ,int ,int ,void*,int ,int,unsigned long*,int ,struct ecore_credit_pool_obj*,int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_3(struct bxe_softc *VAR_19,
   struct ecore_vlan_mac_obj *VAR_20,
   uint8_t VAR_21, uint32_t VAR_22, uint8_t VAR_23, void *VAR_24,
   ecore_dma_addr_t VAR_25, int VAR_26,
   unsigned long *VAR_27, ecore_obj_type VAR_28,
   struct ecore_credit_pool_obj *VAR_29)
{
 union ecore_qable_obj *VAR_30 = (union ecore_qable_obj *)VAR_20;

 FUNC_2(VAR_20, VAR_21, VAR_22, VAR_23, VAR_24,
       VAR_25, VAR_26, VAR_27, VAR_28,
       VAR_29, ((void*)0));


 VAR_20->get_credit = VAR_10;
 VAR_20->put_credit = VAR_14;
 VAR_20->get_cam_offset = VAR_9;
 VAR_20->put_cam_offset = VAR_13;

 if (FUNC_0(VAR_19)) {
  VAR_20->set_one_rule = VAR_16;
  VAR_20->check_del = VAR_4;
  VAR_20->check_add = VAR_3;
  VAR_20->check_move = VAR_6;
  VAR_20->ramrod_cmd = VAR_2;


  FUNC_1(VAR_19,
         &VAR_20->exe_queue, 1, VAR_30,
         VAR_18,
         VAR_15,
         VAR_12,
         VAR_7,
         VAR_8);
 } else {
  VAR_20->set_one_rule = VAR_17;
  VAR_20->check_del = VAR_4;
  VAR_20->check_add = VAR_3;
  VAR_20->check_move = VAR_5;
  VAR_20->ramrod_cmd =
   VAR_1;
  VAR_20->get_n_elements = VAR_11;


  FUNC_1(VAR_19,
         &VAR_20->exe_queue, VAR_0,
         VAR_30, VAR_18,
         VAR_15,
         VAR_12,
         VAR_7,
         VAR_8);
 }
}
