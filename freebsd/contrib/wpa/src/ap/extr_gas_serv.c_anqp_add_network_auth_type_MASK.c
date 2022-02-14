
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct hostapd_data {TYPE_1__* conf; } ;
struct TYPE_2__ {int network_auth_type_len; scalar_t__ network_auth_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hostapd_data*,struct wpabuf*,int ) ;
 int FUNC_1 (struct wpabuf*,scalar_t__,int ) ;
 int FUNC_2 (struct wpabuf*,int ) ;

__attribute__((used)) static void FUNC_3(struct hostapd_data *VAR_1,
           struct wpabuf *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2, VAR_0))
  return;

 if (VAR_1->conf->network_auth_type) {
  FUNC_2(VAR_2, VAR_0);
  FUNC_2(VAR_2, VAR_1->conf->network_auth_type_len);
  FUNC_1(VAR_2, VAR_1->conf->network_auth_type,
    VAR_1->conf->network_auth_type_len);
 }
}
