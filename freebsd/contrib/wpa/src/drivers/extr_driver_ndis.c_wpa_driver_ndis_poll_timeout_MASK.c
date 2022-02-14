
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_driver_ndis_data {scalar_t__ mode; int ctx; int bssid; scalar_t__ wired; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,int ,void (*) (void*,void*),struct wpa_driver_ndis_data*,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct wpa_driver_ndis_data*) ;
 scalar_t__ FUNC_6 (struct wpa_driver_ndis_data*,int *) ;
 int FUNC_7 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_8(void *VAR_4, void *VAR_5)
{
 struct wpa_driver_ndis_data *VAR_6 = VAR_4;
 u8 VAR_7[VAR_0];
 int VAR_8;

 if (VAR_6->wired)
  return;

 if (FUNC_6(VAR_6, VAR_7)) {

  if (!FUNC_1(VAR_6->bssid)) {
   FUNC_4(VAR_6->bssid, 0, VAR_0);
   FUNC_7(VAR_6->ctx, VAR_2, ((void*)0));
  }
 } else {

  if (FUNC_2(VAR_6->bssid, VAR_7, VAR_0) != 0) {
   FUNC_3(VAR_6->bssid, VAR_7, VAR_0);
   FUNC_5(VAR_6);
   FUNC_7(VAR_6->ctx, VAR_1, ((void*)0));
  }
 }







 VAR_8 = VAR_6->mode == VAR_3;


 VAR_8 = 1;



 if (VAR_8) {
  FUNC_0(1, 0, FUNC_8,
     VAR_6, ((void*)0));
 }
}
