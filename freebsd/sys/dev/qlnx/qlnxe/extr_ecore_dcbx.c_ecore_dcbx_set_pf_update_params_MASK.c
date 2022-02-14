
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct protocol_dcb_data {int dummy; } ;
struct pf_update_ramrod_data {struct protocol_dcb_data iwarp_dcb_data; struct protocol_dcb_data eth_dcb_data; struct protocol_dcb_data iscsi_dcb_data; struct protocol_dcb_data rroce_dcb_data; struct protocol_dcb_data roce_dcb_data; struct protocol_dcb_data fcoe_dcb_data; void* update_iwarp_dcb_data_mode; void* update_eth_dcb_data_mode; void* update_iscsi_dcb_data_mode; void* update_rroce_dcb_data_mode; void* update_roce_dcb_data_mode; void* update_fcoe_dcb_data_mode; } ;
struct ecore_dcbx_results {TYPE_1__* arr; } ;
struct TYPE_2__ {void* update; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct protocol_dcb_data*,struct ecore_dcbx_results*,size_t) ;

void FUNC_1(struct ecore_dcbx_results *VAR_6,
         struct pf_update_ramrod_data *VAR_7)
{
 struct protocol_dcb_data *VAR_8;
 u8 VAR_9;

 VAR_9 = VAR_6->arr[VAR_1].update;
 VAR_7->update_fcoe_dcb_data_mode = VAR_9;

 VAR_9 = VAR_6->arr[VAR_4].update;
 VAR_7->update_roce_dcb_data_mode = VAR_9;

 VAR_9 = VAR_6->arr[VAR_5].update;
 VAR_7->update_rroce_dcb_data_mode = VAR_9;

 VAR_9 = VAR_6->arr[VAR_2].update;
 VAR_7->update_iscsi_dcb_data_mode = VAR_9;
 VAR_9 = VAR_6->arr[VAR_0].update;
 VAR_7->update_eth_dcb_data_mode = VAR_9;
 VAR_9 = VAR_6->arr[VAR_3].update;
 VAR_7->update_iwarp_dcb_data_mode = VAR_9;

 VAR_8 = &VAR_7->fcoe_dcb_data;
 FUNC_0(VAR_8, VAR_6, VAR_1);
 VAR_8 = &VAR_7->roce_dcb_data;
 FUNC_0(VAR_8, VAR_6, VAR_4);
 VAR_8 = &VAR_7->rroce_dcb_data;
 FUNC_0(VAR_8, VAR_6,
     VAR_5);
 VAR_8 = &VAR_7->iscsi_dcb_data;
 FUNC_0(VAR_8, VAR_6, VAR_2);
 VAR_8 = &VAR_7->eth_dcb_data;
 FUNC_0(VAR_8, VAR_6, VAR_0);
 VAR_8 = &VAR_7->iwarp_dcb_data;
 FUNC_0(VAR_8, VAR_6, VAR_3);
}
