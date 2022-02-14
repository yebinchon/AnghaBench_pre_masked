
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct hostapd_data {TYPE_2__* conf; scalar_t__ p2p_group; struct wpabuf* p2p_probe_resp_ie; struct wpabuf* p2p_beacon_ie; struct wpabuf* wps_probe_resp_ie; struct wpabuf* wps_beacon_ie; TYPE_1__* iface; } ;
typedef int buf ;
struct TYPE_4__ {int p2p; struct wpabuf* assocresp_elements; struct wpabuf* vendor_elements; scalar_t__ mbo_enabled; scalar_t__ wps_state; } ;
struct TYPE_3__ {struct wpabuf* fst_ies; } ;


 scalar_t__ FUNC_0 (struct hostapd_data*) ;
 scalar_t__ FUNC_1 (struct hostapd_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct wpabuf**,struct wpabuf*) ;
 scalar_t__ FUNC_3 (struct wpabuf**,int *,int) ;
 int * FUNC_4 (struct hostapd_data*,int *) ;
 int * FUNC_5 (struct hostapd_data*,int *) ;
 int * FUNC_6 (struct hostapd_data*,int *,int ) ;
 int * FUNC_7 (struct hostapd_data*,int *) ;
 int * FUNC_8 (struct hostapd_data*,int *) ;
 int * FUNC_9 (struct hostapd_data*,int *,int) ;
 int * FUNC_10 (struct hostapd_data*,int *) ;
 int * FUNC_11 (struct hostapd_data*,int *,int) ;
 int * FUNC_12 (struct hostapd_data*,int *) ;
 int * FUNC_13 (struct hostapd_data*,int *) ;
 int * FUNC_14 (struct hostapd_data*,int *) ;
 int * FUNC_15 (struct hostapd_data*,int *) ;
 struct wpabuf* FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (struct wpabuf*) ;
 int * FUNC_18 (struct wpabuf*,int) ;
 scalar_t__ FUNC_19 (struct wpabuf**,int) ;
 struct wpabuf* FUNC_20 () ;

int FUNC_21(struct hostapd_data *VAR_2,
          struct wpabuf **VAR_3,
          struct wpabuf **VAR_4,
          struct wpabuf **VAR_5)
{
 struct wpabuf *VAR_6 = ((void*)0), *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
 u8 VAR_9[200], *VAR_10;

 *VAR_3 = *VAR_4 = *VAR_5 = ((void*)0);

 VAR_10 = VAR_9;
 VAR_10 = FUNC_14(VAR_2, VAR_10);
 if (FUNC_3(&VAR_6, VAR_9, VAR_10 - VAR_9) < 0)
  goto fail;
 VAR_10 = FUNC_15(VAR_2, VAR_10);
 if (FUNC_3(&VAR_7, VAR_9, VAR_10 - VAR_9) < 0)
  goto fail;

 VAR_10 = VAR_9;
 VAR_10 = FUNC_5(VAR_2, VAR_10);
 if (FUNC_3(&VAR_8, VAR_9, VAR_10 - VAR_9) < 0)
  goto fail;
 VAR_10 = FUNC_8(VAR_2, VAR_10);
 VAR_10 = FUNC_4(VAR_2, VAR_10);
 VAR_10 = FUNC_13(VAR_2, VAR_10);
 if (FUNC_3(&VAR_6, VAR_9, VAR_10 - VAR_9) < 0 ||
     FUNC_3(&VAR_7, VAR_9, VAR_10 - VAR_9) < 0)
  goto fail;
 if (FUNC_2(&VAR_6, VAR_2->wps_beacon_ie) < 0 ||
     FUNC_2(&VAR_7, VAR_2->wps_probe_resp_ie) < 0)
  goto fail;
 FUNC_2(&VAR_6, VAR_2->conf->vendor_elements);
 FUNC_2(&VAR_7, VAR_2->conf->vendor_elements);
 FUNC_2(&VAR_8, VAR_2->conf->assocresp_elements);

 *VAR_3 = VAR_6;
 *VAR_4 = VAR_7;
 *VAR_5 = VAR_8;

 return 0;

fail:
 FUNC_17(VAR_6);
 FUNC_17(VAR_7);
 FUNC_17(VAR_8);
 return -1;
}
