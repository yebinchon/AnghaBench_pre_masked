
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_3__* global; TYPE_2__* wps; scalar_t__ p2p_scan_work; } ;
struct wpa_driver_scan_params {int num_ssids; int* freqs; int p2p_probe; size_t* extra_ies; void* extra_ies_len; TYPE_1__* ssids; } ;
typedef enum p2p_scan_type { ____Placeholder_p2p_scan_type } p2p_scan_type ;
struct TYPE_8__ {int p2p; } ;
struct TYPE_7__ {int * p2p; scalar_t__ p2p_disabled; } ;
struct TYPE_6__ {int uuid; TYPE_4__ dev; } ;
struct TYPE_5__ {size_t* ssid; void* ssid_len; } ;


 size_t FUNC_0 (int*) ;
 int VAR_0 ;




 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int,int) ;
 size_t* FUNC_2 (void*) ;
 int FUNC_3 (size_t*,int ,void*) ;
 struct wpa_driver_scan_params* FUNC_4 (int) ;
 int FUNC_5 (int *,struct wpabuf*,size_t const*,unsigned int) ;
 size_t FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (struct wpa_supplicant*,int ,char*,int ,int ,struct wpa_driver_scan_params*) ;
 int FUNC_9 (struct wpa_supplicant*,char*,int ) ;
 int FUNC_10 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_11 (struct wpa_driver_scan_params*) ;
 struct wpabuf* FUNC_12 (void*) ;
 int FUNC_13 (struct wpabuf*) ;
 int FUNC_14 (struct wpabuf*) ;
 void* FUNC_15 (struct wpabuf*) ;
 int FUNC_16 (struct wpabuf*,struct wpabuf*) ;
 unsigned int FUNC_17 (struct wpa_supplicant*,int*) ;
 int FUNC_18 (struct wpa_supplicant*,int) ;
 int VAR_4 ;
 struct wpabuf* FUNC_19 (int ,TYPE_4__*,int ,int ,unsigned int,size_t const*) ;

__attribute__((used)) static int FUNC_20(void *VAR_5, enum p2p_scan_type VAR_6, int VAR_7,
    unsigned int VAR_8,
    const u8 *VAR_9, const u8 *VAR_10, u16 VAR_11)
{
 struct wpa_supplicant *VAR_12 = VAR_5;
 struct wpa_driver_scan_params *VAR_13 = ((void*)0);
 struct wpabuf *VAR_14, *VAR_15;
 unsigned int VAR_16 = 0;
 int VAR_17[] = { 2412, 2437, 2462, 60480 };
 size_t VAR_18;
 u8 *VAR_19, VAR_20;
 unsigned int VAR_21;

 if (VAR_12->global->p2p_disabled || VAR_12->global->p2p == ((void*)0))
  return -1;

 if (VAR_12->p2p_scan_work) {
  FUNC_10(VAR_12, VAR_0, "P2P: Reject scan trigger since one is already pending");
  return -1;
 }

 VAR_13 = FUNC_4(sizeof(*VAR_13));
 if (VAR_13 == ((void*)0))
  return -1;


 VAR_13->num_ssids = 1;
 VAR_19 = FUNC_2(VAR_2);
 if (VAR_19 == ((void*)0))
  goto fail;
 FUNC_3(VAR_19, VAR_1, VAR_2);
 VAR_13->ssids[0].ssid = VAR_19;
 VAR_13->ssids[0].ssid_len = VAR_2;

 VAR_12->wps->dev.p2p = 1;
 VAR_14 = FUNC_19(VAR_11, &VAR_12->wps->dev,
     VAR_12->wps->uuid, VAR_3,
     VAR_8, VAR_9);
 if (VAR_14 == ((void*)0))
  goto fail;

 switch (VAR_6) {
 case 130:
  VAR_13->freqs = FUNC_1(FUNC_0(VAR_17) + 1,
       sizeof(int));
  if (VAR_13->freqs == ((void*)0))
   goto fail;
  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_17); VAR_20++) {
   if (FUNC_18(
        VAR_12, VAR_17[VAR_20]))
    VAR_13->freqs[VAR_16++] =
     VAR_17[VAR_20];
  }
  VAR_13->freqs[VAR_16++] = 0;
  break;
 case 131:
  break;
 case 128:
  VAR_13->freqs = FUNC_1(2, sizeof(int));
  if (VAR_13->freqs == ((void*)0))
   goto fail;
  VAR_13->freqs[0] = VAR_7;
  VAR_13->freqs[1] = 0;
  break;
 case 129:
  VAR_13->freqs = FUNC_1(FUNC_0(VAR_17) + 2,
       sizeof(int));
  if (VAR_13->freqs == ((void*)0))
   goto fail;
  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_17); VAR_20++) {
   if (FUNC_18(
        VAR_12, VAR_17[VAR_20]))
    VAR_13->freqs[VAR_16++] =
     VAR_17[VAR_20];
  }
  if (FUNC_7(VAR_12->global->p2p, VAR_7))
   VAR_13->freqs[VAR_16++] = VAR_7;
  VAR_13->freqs[VAR_16++] = 0;
  break;
 }

 VAR_18 = FUNC_6(VAR_12->global->p2p);
 VAR_15 = FUNC_12(FUNC_15(VAR_14) + VAR_18);
 if (VAR_15 == ((void*)0)) {
  FUNC_13(VAR_14);
  goto fail;
 }
 FUNC_16(VAR_15, VAR_14);
 FUNC_13(VAR_14);

 VAR_21 = FUNC_17(VAR_12, VAR_13->freqs);
 FUNC_5(VAR_12->global->p2p, VAR_15, VAR_10, VAR_21);

 VAR_13->p2p_probe = 1;
 VAR_19 = FUNC_2(FUNC_15(VAR_15));
 if (VAR_19 == ((void*)0)) {
  FUNC_13(VAR_15);
  goto fail;
 }
 FUNC_3(VAR_19, FUNC_14(VAR_15), FUNC_15(VAR_15));
 VAR_13->extra_ies = VAR_19;
 VAR_13->extra_ies_len = FUNC_15(VAR_15);
 FUNC_13(VAR_15);

 FUNC_9(VAR_12, "p2p-scan", 0);
 if (FUNC_8(VAR_12, 0, "p2p-scan", 0, VAR_4,
      VAR_13) < 0)
  goto fail;
 return 0;

fail:
 FUNC_11(VAR_13);
 return -1;
}
