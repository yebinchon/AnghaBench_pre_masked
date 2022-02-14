
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct wpa_supplicant {size_t last_scan_res_used; int * last_scan_res; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,struct wpabuf*) ;
 scalar_t__ FUNC_1 (struct wpa_supplicant*,struct wpabuf**,int ,int ,int ) ;
 int FUNC_2 (struct wpa_supplicant*,struct wpabuf**) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_1,
      struct wpabuf **VAR_2)
{
 size_t VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->last_scan_res_used; VAR_3++) {
  if (FUNC_1(VAR_1, VAR_2, VAR_1->last_scan_res[VAR_3],
     0, 0) < 0)
   break;
 }

 if (!(*VAR_2))
  FUNC_2(VAR_1, VAR_2);

 FUNC_0(VAR_0, "RRM: Radio Measurement report", *VAR_2);
}
