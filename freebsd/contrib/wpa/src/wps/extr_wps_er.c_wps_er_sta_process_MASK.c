
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_er_sta {int * wps; } ;
struct wpabuf {int dummy; } ;
typedef enum wsc_op_code { ____Placeholder_wsc_op_code } wsc_op_code ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct wps_er_sta*,int *) ;
 int FUNC_1 (int,int ,int ,struct wps_er_sta*,int *) ;
 int FUNC_2 (int ,char*,char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wps_er_sta*,struct wpabuf*) ;
 int VAR_3 ;
 struct wpabuf* FUNC_5 (int *,int*) ;
 int FUNC_6 (int *,int,struct wpabuf*) ;

__attribute__((used)) static void FUNC_7(struct wps_er_sta *VAR_4, struct wpabuf *VAR_5,
          enum wsc_op_code VAR_6)
{
 enum wps_process_res VAR_7;

 VAR_7 = FUNC_6(VAR_4->wps, VAR_6, VAR_5);
 if (VAR_7 == VAR_1) {
  struct wpabuf *VAR_8 = FUNC_5(VAR_4->wps, &VAR_6);
  if (VAR_8)
   FUNC_4(VAR_4, VAR_8);
 } else {
  FUNC_2(VAR_0, "WPS ER: Protocol run %s with the "
      "enrollee (res=%d)",
      VAR_7 == VAR_2 ? "succeeded" : "failed", VAR_7);
  FUNC_3(VAR_4->wps);
  VAR_4->wps = ((void*)0);
  if (VAR_7 == VAR_2) {

   FUNC_0(VAR_3, VAR_4, ((void*)0));
   FUNC_1(10, 0, VAR_3, VAR_4,
            ((void*)0));
  }
 }
}
