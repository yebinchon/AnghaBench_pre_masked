
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_hw {int dummy; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_del_udp_tunnel_completion {int index; } ;
struct i40e_aqc_add_udp_tunnel {int protocol_type; int udp_port; } ;
struct TYPE_2__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_aq_desc*,int ) ;

enum i40e_status_code FUNC_3(struct i40e_hw *VAR_1,
    u16 VAR_2, u8 VAR_3,
    u8 *VAR_4,
    struct i40e_asq_cmd_details *VAR_5)
{
 struct i40e_aq_desc VAR_6;
 struct i40e_aqc_add_udp_tunnel *VAR_7 =
  (struct i40e_aqc_add_udp_tunnel *)&VAR_6.params.raw;
 struct i40e_aqc_del_udp_tunnel_completion *VAR_8 =
  (struct i40e_aqc_del_udp_tunnel_completion *)&VAR_6.params.raw;
 enum i40e_status_code VAR_9;

 FUNC_2(&VAR_6, VAR_0);

 VAR_7->udp_port = FUNC_0(VAR_2);
 VAR_7->protocol_type = VAR_3;

 VAR_9 = FUNC_1(VAR_1, &VAR_6, ((void*)0), 0, VAR_5);

 if (!VAR_9 && VAR_4)
  *VAR_4 = VAR_8->index;

 return VAR_9;
}
