
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct ecore_vlan_mac_obj {int raw; int wait; int complete; int restore; int delete_all; struct ecore_credit_pool_obj* vlans_pool; struct ecore_credit_pool_obj* macs_pool; scalar_t__ saved_ramrod_flags; int head_exe_request; scalar_t__ head_reader; int head; } ;
struct ecore_credit_pool_obj {int dummy; } ;
typedef int ecore_obj_type ;
typedef int ecore_dma_addr_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ,void*,int ,int,unsigned long*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_2(struct ecore_vlan_mac_obj *VAR_5,
 uint8_t VAR_6, uint32_t VAR_7, uint8_t VAR_8, void *VAR_9, ecore_dma_addr_t VAR_10,
 int VAR_11, unsigned long *VAR_12, ecore_obj_type VAR_13,
 struct ecore_credit_pool_obj *VAR_14,
 struct ecore_credit_pool_obj *VAR_15)
{
 FUNC_0(&VAR_5->head);
 VAR_5->head_reader = 0;
 VAR_5->head_exe_request = VAR_0;
 VAR_5->saved_ramrod_flags = 0;

 VAR_5->macs_pool = VAR_14;
 VAR_5->vlans_pool = VAR_15;

 VAR_5->delete_all = VAR_2;
 VAR_5->restore = VAR_3;
 VAR_5->complete = VAR_1;
 VAR_5->wait = VAR_4;

 FUNC_1(&VAR_5->raw, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
      VAR_11, VAR_12, VAR_13);
}
