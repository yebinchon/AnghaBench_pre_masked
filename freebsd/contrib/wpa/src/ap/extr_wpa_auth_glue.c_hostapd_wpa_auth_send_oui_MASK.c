
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_auth_oui_iface_iter_data {size_t data_len; int oui_suffix; int const* data; int const* dst_addr; struct hostapd_data* src_hapd; } ;
struct hostapd_data {int own_addr; TYPE_1__* iface; } ;
struct eth_p_oui_ctx {int dummy; } ;
struct TYPE_4__ {int (* for_each_interface ) (TYPE_2__*,int ,struct wpa_auth_oui_iface_iter_data*) ;} ;
struct TYPE_3__ {TYPE_2__* interfaces; } ;


 int FUNC_0 (struct eth_p_oui_ctx*,int ,int const*,int const*,size_t) ;
 int VAR_0 ;
 struct eth_p_oui_ctx* FUNC_1 (struct hostapd_data*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,struct wpa_auth_oui_iface_iter_data*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, const u8 *VAR_2, u8 VAR_3,
         const u8 *VAR_4, size_t VAR_5)
{
 return -1;

}
