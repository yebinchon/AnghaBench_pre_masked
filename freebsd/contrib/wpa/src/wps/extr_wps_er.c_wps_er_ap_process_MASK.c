
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int* msg_type; } ;
struct wps_er_ap {int * wps; } ;
struct wpabuf {int dummy; } ;
typedef enum wsc_op_code { ____Placeholder_wsc_op_code } wsc_op_code ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wps_er_ap*,struct wpabuf*) ;
 struct wpabuf* FUNC_4 (int *,int*) ;
 scalar_t__ FUNC_5 (struct wpabuf*,struct wps_parse_attr*) ;
 int FUNC_6 (int *,int,struct wpabuf*) ;

__attribute__((used)) static void FUNC_7(struct wps_er_ap *VAR_7, struct wpabuf *VAR_8)
{
 enum wps_process_res VAR_9;
 struct wps_parse_attr VAR_10;
 enum wsc_op_code VAR_11;

 VAR_11 = VAR_5;
 if (FUNC_5(VAR_8, &VAR_10) == 0 && VAR_10.msg_type) {
  switch (*VAR_10.msg_type) {
  case 130:
   VAR_11 = VAR_3;
   break;
  case 128:
   VAR_11 = VAR_6;
   break;
  case 129:
   VAR_11 = VAR_4;
   break;
  }
 }

 VAR_9 = FUNC_6(VAR_7->wps, VAR_11, VAR_8);
 if (VAR_9 == VAR_1) {
  struct wpabuf *VAR_12 = FUNC_4(VAR_7->wps, &VAR_11);
  if (VAR_12) {
   FUNC_3(VAR_7, VAR_12);
   FUNC_1(VAR_12);
  } else {
   FUNC_0(VAR_0, "WPS ER: Failed to build "
       "message");
   FUNC_2(VAR_7->wps);
   VAR_7->wps = ((void*)0);
  }
 } else if (VAR_9 == VAR_2) {
  FUNC_0(VAR_0, "WPS ER: Protocol run done");
  FUNC_2(VAR_7->wps);
  VAR_7->wps = ((void*)0);
 } else {
  FUNC_0(VAR_0, "WPS ER: Failed to process message from "
      "AP (res=%d)", VAR_9);
  FUNC_2(VAR_7->wps);
  VAR_7->wps = ((void*)0);
 }
}
