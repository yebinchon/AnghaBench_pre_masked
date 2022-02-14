
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;
struct wpa_ssid {int dummy; } ;
struct TYPE_3__ {size_t op_class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 TYPE_1__* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int,int ,int ,size_t*,size_t*) ;
 int FUNC_1 (size_t*,int ,size_t) ;
 int FUNC_2 (int ,char*,struct wpabuf*) ;
 int FUNC_3 (int ,char*) ;
 struct wpabuf* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*) ;
 size_t FUNC_7 (struct wpabuf*) ;
 size_t* FUNC_8 (struct wpabuf*,int) ;
 int FUNC_9 (struct wpabuf*,size_t) ;
 scalar_t__ FUNC_10 (struct wpa_supplicant*,struct wpa_ssid*,TYPE_1__*) ;

size_t FUNC_11(struct wpa_supplicant *VAR_7,
        struct wpa_ssid *VAR_8,
        int VAR_9, u8 *VAR_10, size_t VAR_11)
{
 struct wpabuf *VAR_12;
 u8 VAR_13, VAR_14, VAR_15;
 u8 *VAR_16;
 size_t VAR_17;






 if (FUNC_0(VAR_9, 0, VAR_0,
       &VAR_14, &VAR_15) == VAR_3)
  return 0;





 VAR_12 = FUNC_4(VAR_6 + 3);
 if (!VAR_12)
  return 0;

 FUNC_9(VAR_12, VAR_4);

 VAR_16 = FUNC_8(VAR_12, 1);
 FUNC_9(VAR_12, VAR_14);

 for (VAR_13 = 0; VAR_5[VAR_13].op_class; VAR_13++) {
  if (FUNC_10(VAR_7, VAR_8, &VAR_5[VAR_13]))
   FUNC_9(VAR_12, VAR_5[VAR_13].op_class);
 }

 *VAR_16 = FUNC_7(VAR_12) - 2;
 if (*VAR_16 < 2 || FUNC_7(VAR_12) > VAR_11) {
  FUNC_3(VAR_2,
      "Failed to add supported operating classes IE");
  VAR_17 = 0;
 } else {
  FUNC_1(VAR_10, FUNC_6(VAR_12), FUNC_7(VAR_12));
  VAR_17 = FUNC_7(VAR_12);
  FUNC_2(VAR_1,
    "Added supported operating classes IE", VAR_12);
 }

 FUNC_5(VAR_12);
 return VAR_17;
}
