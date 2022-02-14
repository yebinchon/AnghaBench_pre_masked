
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sta_info {int last_tk_alg; int last_tk_key_idx; size_t last_tk_len; int last_tk; } ;
struct hostapd_data {int last_igtk_alg; int last_igtk_key_idx; size_t last_igtk_len; int last_gtk_alg; int last_gtk_key_idx; size_t last_gtk_len; int last_gtk; int last_igtk; TYPE_1__* conf; } ;
typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;
struct TYPE_2__ {char* iface; int vlan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;
 int FUNC_1 (char const*,struct hostapd_data*,int,int const*,int,int,int *,int ,int *,size_t) ;
 char* FUNC_2 (int ,int) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int ,int *,size_t) ;

__attribute__((used)) static int FUNC_5(void *VAR_4, int VAR_5, enum wpa_alg VAR_6,
        const u8 *VAR_7, int VAR_8, u8 *VAR_9,
        size_t VAR_10)
{
 struct hostapd_data *VAR_11 = VAR_4;
 const char *VAR_12 = VAR_11->conf->iface;

 if (VAR_5 > 0) {
  VAR_12 = FUNC_2(VAR_11->conf->vlan, VAR_5);
  if (VAR_12 == ((void*)0))
   return -1;
 }
 return FUNC_1(VAR_12, VAR_11, VAR_6, VAR_7, VAR_8, 1, ((void*)0), 0,
       VAR_9, VAR_10);
}
