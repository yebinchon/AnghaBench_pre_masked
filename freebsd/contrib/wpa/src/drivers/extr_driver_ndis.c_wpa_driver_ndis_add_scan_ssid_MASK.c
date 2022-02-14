
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_scan_res {int ie_len; } ;
struct TYPE_3__ {int SsidLength; int Ssid; } ;
typedef TYPE_1__ NDIS_802_11_SSID ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 struct wpa_scan_res* FUNC_1 (struct wpa_scan_res*,int) ;
 scalar_t__ FUNC_2 (struct wpa_scan_res*,int ) ;

__attribute__((used)) static struct wpa_scan_res * FUNC_3(
 struct wpa_scan_res *VAR_2, NDIS_802_11_SSID *VAR_3)
{
 struct wpa_scan_res *VAR_4;
 u8 *VAR_5;

 if (FUNC_2(VAR_2, VAR_1))
  return VAR_2;

 if (VAR_3->SsidLength == 0 || VAR_3->SsidLength > VAR_0)
  return VAR_2;

 VAR_4 = FUNC_1(VAR_2, sizeof(*VAR_2) + VAR_2->ie_len + 2 + VAR_3->SsidLength);
 if (VAR_4 == ((void*)0))
  return VAR_2;

 VAR_5 = ((u8 *) (VAR_4 + 1)) + VAR_4->ie_len;
 *VAR_5++ = VAR_1;
 *VAR_5++ = VAR_3->SsidLength;
 FUNC_0(VAR_5, VAR_3->Ssid, VAR_3->SsidLength);
 VAR_4->ie_len += 2 + VAR_3->SsidLength;

 return VAR_4;
}
