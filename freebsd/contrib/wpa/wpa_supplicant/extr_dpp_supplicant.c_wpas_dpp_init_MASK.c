
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int dpp; int gas_server; } ;
struct dpp_global_config {int process_conf_obj; struct wpa_supplicant* cb_ctx; struct wpa_supplicant* msg_ctx; } ;
typedef int config ;
typedef int adv_proto_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int*,int ) ;
 int FUNC_1 (struct dpp_global_config*) ;
 scalar_t__ FUNC_2 (int ,int*,int,int ,int ,struct wpa_supplicant*) ;
 int FUNC_3 (struct dpp_global_config*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_4(struct wpa_supplicant *VAR_6)
{
 struct dpp_global_config VAR_7;
 u8 VAR_8[7];

 VAR_8[0] = VAR_2;
 VAR_8[1] = 5;
 FUNC_0(&VAR_8[2], VAR_1);
 VAR_8[5] = VAR_0;
 VAR_8[6] = 0x01;

 if (FUNC_2(VAR_6->gas_server, VAR_8,
    sizeof(VAR_8), VAR_3,
    VAR_4, VAR_6) < 0)
  return -1;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.msg_ctx = VAR_6;
 VAR_7.cb_ctx = VAR_6;



 VAR_6->dpp = FUNC_1(&VAR_7);
 return VAR_6->dpp ? 0 : -1;
}
