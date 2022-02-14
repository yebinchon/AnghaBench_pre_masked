
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_data {int state; TYPE_1__* wps; int dev_password_len; int * dev_password; } ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {scalar_t__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 struct wpabuf* FUNC_2 (int) ;
 int FUNC_3 (struct wpabuf*) ;
 scalar_t__ FUNC_4 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_5 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_6 (struct wpabuf*,int ) ;
 scalar_t__ FUNC_7 (struct wps_data*,struct wpabuf*) ;
 scalar_t__ FUNC_8 (struct wpabuf*) ;
 scalar_t__ FUNC_9 (struct wpabuf*,int ,int *,int ,int ) ;
 scalar_t__ FUNC_10 (struct wps_data*,int *,int ) ;

__attribute__((used)) static struct wpabuf * FUNC_11(struct wps_data *VAR_4)
{
 struct wpabuf *VAR_5;

 FUNC_1(VAR_0, "WPS: Building Message M3");

 if (VAR_4->dev_password == ((void*)0)) {
  FUNC_1(VAR_0, "WPS: No Device Password available");
  return ((void*)0);
 }
 if (FUNC_10(VAR_4, VAR_4->dev_password, VAR_4->dev_password_len) < 0)
  return ((void*)0);

 if (VAR_4->wps->ap && FUNC_0() != 1) {
  FUNC_1(VAR_1,
      "WPS: Not enough entropy in random pool to proceed - do not allow AP PIN to be used");
  return ((void*)0);
 }

 VAR_5 = FUNC_2(1000);
 if (VAR_5 == ((void*)0))
  return ((void*)0);

 if (FUNC_8(VAR_5) ||
     FUNC_6(VAR_5, VAR_3) ||
     FUNC_7(VAR_4, VAR_5) ||
     FUNC_5(VAR_4, VAR_5) ||
     FUNC_9(VAR_5, 0, ((void*)0), 0, 0) ||
     FUNC_4(VAR_4, VAR_5)) {
  FUNC_3(VAR_5);
  return ((void*)0);
 }

 VAR_4->state = VAR_2;
 return VAR_5;
}
