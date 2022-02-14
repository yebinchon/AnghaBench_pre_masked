
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_data {int ext_reg; int state; int last_msg; TYPE_1__* wps; int int_reg; } ;
struct wpabuf {int dummy; } ;
struct upnp_pending_message {int type; struct wpabuf* msg; struct upnp_pending_message* next; } ;
typedef enum wsc_op_code { ____Placeholder_wsc_op_code } wsc_op_code ;
struct TYPE_2__ {struct upnp_pending_message* upnp_msgs; scalar_t__ wps_upnp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct upnp_pending_message*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct wpabuf*) ;
 int FUNC_3 (int ) ;
 struct wpabuf* FUNC_4 (struct wps_data*) ;
 struct wpabuf* FUNC_5 (struct wps_data*) ;
 struct wpabuf* FUNC_6 (struct wps_data*) ;
 struct wpabuf* FUNC_7 (struct wps_data*) ;
 struct wpabuf* FUNC_8 (struct wps_data*) ;
 struct wpabuf* FUNC_9 (struct wps_data*) ;
 struct wpabuf* FUNC_10 (struct wps_data*) ;
 int FUNC_11 (struct wps_data*) ;
 int FUNC_12 (TYPE_1__*) ;

struct wpabuf * FUNC_13(struct wps_data *VAR_4,
          enum wsc_op_code *VAR_5)
{
 struct wpabuf *VAR_6;
 switch (VAR_4->state) {
 case 135:
  if (FUNC_11(VAR_4) < 0)
   VAR_6 = FUNC_5(VAR_4);
  else
   VAR_6 = FUNC_4(VAR_4);
  *VAR_5 = VAR_2;
  break;
 case 134:
  VAR_6 = FUNC_5(VAR_4);
  *VAR_5 = VAR_2;
  break;
 case 133:
  VAR_6 = FUNC_6(VAR_4);
  *VAR_5 = VAR_2;
  break;
 case 132:
  VAR_6 = FUNC_7(VAR_4);
  *VAR_5 = VAR_2;
  break;
 case 131:
  VAR_6 = FUNC_8(VAR_4);
  *VAR_5 = VAR_2;
  break;
 case 136:
  VAR_6 = FUNC_9(VAR_4);
  *VAR_5 = VAR_1;
  break;
 case 130:
  VAR_6 = FUNC_10(VAR_4);
  *VAR_5 = VAR_3;
  break;
 default:
  FUNC_1(VAR_0, "WPS: Unsupported state %d for building "
      "a message", VAR_4->state);
  VAR_6 = ((void*)0);
  break;
 }

 if (*VAR_5 == VAR_2 && VAR_6) {


  FUNC_3(VAR_4->last_msg);
  VAR_4->last_msg = FUNC_2(VAR_6);
 }

 return VAR_6;
}
