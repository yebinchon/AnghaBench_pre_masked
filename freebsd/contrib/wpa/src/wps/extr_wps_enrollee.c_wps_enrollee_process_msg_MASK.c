
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {scalar_t__* msg_type; } ;
struct wps_data {int dummy; } ;
struct wpabuf {int dummy; } ;
typedef enum wsc_op_code { ____Placeholder_wsc_op_code } wsc_op_code ;
typedef enum wps_process_res { ____Placeholder_wps_process_res } wps_process_res ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ FUNC_1 (struct wpabuf const*) ;
 scalar_t__ FUNC_2 (struct wpabuf const*,struct wps_parse_attr*) ;
 int FUNC_3 (struct wps_data*,struct wpabuf const*) ;
 int FUNC_4 (struct wps_data*,struct wpabuf const*) ;
 int FUNC_5 (struct wps_data*,struct wpabuf const*) ;
 int FUNC_6 (struct wpabuf const*) ;
 int FUNC_7 (struct wpabuf const*) ;

enum wps_process_res FUNC_8(struct wps_data *VAR_4,
           enum wsc_op_code VAR_5,
           const struct wpabuf *VAR_6)
{

 FUNC_0(VAR_0, "WPS: Processing received message (len=%lu "
     "op_code=%d)",
     (unsigned long) FUNC_1(VAR_6), VAR_5);

 if (VAR_5 == 128) {

  struct wps_parse_attr VAR_7;
  if (FUNC_2(VAR_6, &VAR_7) == 0 && VAR_7.msg_type) {
   if (*VAR_7.msg_type == VAR_2)
    VAR_5 = 131;
   else if (*VAR_7.msg_type == VAR_3)
    VAR_5 = 129;
  }
 }

 switch (VAR_5) {
 case 130:
 case 128:
  return FUNC_4(VAR_4, VAR_6);
 case 131:
  if (FUNC_6(VAR_6) < 0)
   return VAR_1;
  return FUNC_3(VAR_4, VAR_6);
 case 129:
  if (FUNC_7(VAR_6) < 0)
   return VAR_1;
  return FUNC_5(VAR_4, VAR_6);
 default:
  FUNC_0(VAR_0, "WPS: Unsupported op_code %d", VAR_5);
  return VAR_1;
 }
}
