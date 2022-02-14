
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int p2p_lo_started; int drv_flags; TYPE_2__* conf; TYPE_1__* global; } ;
struct p2p_data {int dummy; } ;
struct TYPE_4__ {int num_sec_device_types; int sec_device_type; int device_type; } ;
struct TYPE_3__ {struct p2p_data* p2p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int ,int) ;
 struct wpabuf* FUNC_3 (struct p2p_data*,unsigned int) ;
 int FUNC_4 (struct p2p_data*,unsigned int) ;
 int FUNC_5 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_6 (struct wpa_supplicant*,unsigned int,unsigned int,unsigned int,unsigned int,int *,size_t,int ,int ) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (struct wpabuf*) ;
 int FUNC_9 (struct wpabuf*) ;
 int FUNC_10 (struct wpabuf*) ;
 int FUNC_11 (struct wpa_supplicant*) ;

int FUNC_12(struct wpa_supplicant *VAR_4, unsigned int VAR_5,
        unsigned int VAR_6, unsigned int VAR_7,
        unsigned int VAR_8)
{
 struct p2p_data *VAR_9 = VAR_4->global->p2p;
 u8 *VAR_10;
 size_t VAR_11;
 struct wpabuf *VAR_12;
 int VAR_13;

 if (VAR_4->p2p_lo_started) {
  FUNC_5(VAR_4, VAR_0,
   "P2P Listen offload is already started");
  return 0;
 }

 if (VAR_4->global->p2p == ((void*)0) ||
     !(VAR_4->drv_flags & VAR_2)) {
  FUNC_7(VAR_0, "P2P: Listen offload not supported");
  return -1;
 }

 if (!FUNC_4(VAR_4->global->p2p, VAR_5)) {
  FUNC_7(VAR_1, "P2P: Input channel not supported: %u",
      VAR_5);
  return -1;
 }


 VAR_11 = (VAR_4->conf->num_sec_device_types + 1) *
  VAR_3;
 VAR_10 = FUNC_1(VAR_11);
 if (!VAR_10)
  return -1;
 FUNC_2(VAR_10, VAR_4->conf->device_type, VAR_3);
 FUNC_2(&VAR_10[VAR_3], VAR_4->conf->sec_device_type,
    VAR_4->conf->num_sec_device_types * VAR_3);


 VAR_12 = FUNC_3(VAR_9, VAR_5);
 if (!VAR_12) {
  FUNC_0(VAR_10);
  return -1;
 }

 VAR_13 = FUNC_6(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8,
       VAR_10, VAR_11,
       FUNC_10(VAR_12), FUNC_9(VAR_12));
 if (VAR_13 < 0)
  FUNC_5(VAR_4, VAR_0,
   "P2P: Failed to start P2P listen offload");

 FUNC_0(VAR_10);
 FUNC_8(VAR_12);

 if (VAR_13 == 0) {
  VAR_4->p2p_lo_started = 1;


  FUNC_11(VAR_4);
 }

 return VAR_13;
}
