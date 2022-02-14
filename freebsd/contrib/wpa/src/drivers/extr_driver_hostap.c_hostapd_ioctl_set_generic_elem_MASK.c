
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t len; int * data; } ;
struct TYPE_4__ {TYPE_1__ generic_elem; } ;
struct prism2_hostapd_param {TYPE_2__ u; int cmd; } ;
struct hostap_driver_data {size_t generic_ie_len; size_t wps_ie_len; int wps_ie; int generic_ie; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hostap_driver_data*,struct prism2_hostapd_param*,size_t) ;
 int FUNC_1 (struct prism2_hostapd_param*) ;
 int FUNC_2 (int *,int ,size_t) ;
 struct prism2_hostapd_param* FUNC_3 (size_t) ;
 int FUNC_4 (int ,char*,int *,size_t) ;

__attribute__((used)) static int FUNC_5(struct hostap_driver_data *VAR_3)
{
 struct prism2_hostapd_param *VAR_4;
 int VAR_5;
 size_t VAR_6, VAR_7;

 VAR_7 = VAR_3->generic_ie_len + VAR_3->wps_ie_len;
 VAR_6 = VAR_1 + VAR_7;
 if (VAR_6 < sizeof(*VAR_4))
  VAR_6 = sizeof(*VAR_4);

 VAR_4 = FUNC_3(VAR_6);
 if (VAR_4 == ((void*)0))
  return -1;

 VAR_4->cmd = VAR_2;
 VAR_4->u.generic_elem.len = VAR_7;
 if (VAR_3->generic_ie) {
  FUNC_2(VAR_4->u.generic_elem.data, VAR_3->generic_ie,
     VAR_3->generic_ie_len);
 }
 if (VAR_3->wps_ie) {
  FUNC_2(&VAR_4->u.generic_elem.data[VAR_3->generic_ie_len],
     VAR_3->wps_ie, VAR_3->wps_ie_len);
 }
 FUNC_4(VAR_0, "hostap: Set generic IE",
      VAR_4->u.generic_elem.data, VAR_7);
 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_6);

 FUNC_1(VAR_4);

 return VAR_5;
}
