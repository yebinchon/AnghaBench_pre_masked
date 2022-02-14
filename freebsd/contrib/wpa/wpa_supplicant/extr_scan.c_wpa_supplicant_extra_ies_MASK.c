
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {scalar_t__ p2p_group_interface; int enable_oce; struct wpabuf** vendor_elem; struct wpabuf* fst_ies; TYPE_3__* conf; TYPE_2__* global; TYPE_1__* wps; } ;
typedef int ext_capab ;
typedef enum wps_request_type { ____Placeholder_wps_request_type } wps_request_type ;
struct TYPE_6__ {scalar_t__ hs20; scalar_t__ interworking; } ;
struct TYPE_5__ {int p2p; } ;
struct TYPE_4__ {int uuid; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct wpa_supplicant*,int ) ;
 int FUNC_2 (struct wpa_supplicant*,struct wpabuf**) ;
 int FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*,struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,int *,int) ;
 scalar_t__ FUNC_7 (struct wpabuf**,int) ;
 int FUNC_8 (struct wpa_supplicant*,struct wpabuf*) ;
 int FUNC_9 (struct wpa_supplicant*,int *,int) ;
 int FUNC_10 (struct wpa_supplicant*,struct wpabuf**) ;
 int FUNC_11 (struct wpabuf*,int,int ) ;
 int FUNC_12 (struct wpa_supplicant*,struct wpabuf*) ;
 int FUNC_13 (struct wpa_supplicant*,struct wpabuf*) ;
 int FUNC_14 (struct wpa_supplicant*,int*) ;
 struct wpabuf* FUNC_15 (int ,int *,int ,int,int ,int *) ;

__attribute__((used)) static struct wpabuf * FUNC_16(struct wpa_supplicant *VAR_8)
{
 struct wpabuf *VAR_9 = ((void*)0);
 u8 VAR_10[18];
 int VAR_11;
  FUNC_1(VAR_8, VAR_6);

 VAR_11 = FUNC_9(VAR_8, VAR_10,
          sizeof(VAR_10));
 if (VAR_11 > 0 &&
     FUNC_7(&VAR_9, VAR_11) == 0)
  FUNC_6(VAR_9, VAR_10, VAR_11);
 if (VAR_8->vendor_elem[VAR_4]) {
  struct wpabuf *VAR_12 = VAR_8->vendor_elem[VAR_4];

  if (FUNC_7(&VAR_9, FUNC_4(VAR_12)) == 0)
   FUNC_5(VAR_9, VAR_12);
 }

 return VAR_9;
}
