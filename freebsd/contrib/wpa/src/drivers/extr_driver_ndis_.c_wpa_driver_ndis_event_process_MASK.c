
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_driver_ndis_data {int dummy; } ;
typedef enum event_types { ____Placeholder_event_types } event_types ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wpa_driver_ndis_data*) ;
 int FUNC_1 (struct wpa_driver_ndis_data*) ;
 int FUNC_2 (struct wpa_driver_ndis_data*) ;
 int FUNC_3 (struct wpa_driver_ndis_data*) ;
 int FUNC_4 (struct wpa_driver_ndis_data*,int *,size_t) ;
 int FUNC_5 (int ,char*,int *,size_t) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void FUNC_7(struct wpa_driver_ndis_data *VAR_2,
       u8 *VAR_3, size_t VAR_4)
{
 u8 *VAR_5, *VAR_6 = ((void*)0);
 enum event_types VAR_7;
 size_t VAR_8 = 0;

 FUNC_5(VAR_1, "NDIS: received event data", VAR_3, VAR_4);
 if (VAR_4 < sizeof(int))
  return;
 VAR_7 = *((int *) VAR_3);
 VAR_5 = VAR_3 + sizeof(int);
 FUNC_6(VAR_0, "NDIS: event - type %d", VAR_7);

 if (VAR_3 + VAR_4 - VAR_5 > 2) {
  VAR_8 = (int) *VAR_5++ << 8;
  VAR_8 += *VAR_5++;
  if (VAR_8 > (size_t) (VAR_3 + VAR_4 - VAR_5)) {
   FUNC_6(VAR_0, "NDIS: event data overflow");
   return;
  }
  VAR_6 = VAR_5;
  FUNC_5(VAR_1, "NDIS: event data", VAR_6, VAR_8);
 }

 switch (VAR_7) {
 case 130:
  FUNC_2(VAR_2);
  break;
 case 129:
  FUNC_3(VAR_2);
  break;
 case 128:
  FUNC_4(VAR_2, VAR_6, VAR_8);
  break;
 case 132:
  FUNC_0(VAR_2);
  break;
 case 131:
  FUNC_1(VAR_2);
  break;
 }
}
