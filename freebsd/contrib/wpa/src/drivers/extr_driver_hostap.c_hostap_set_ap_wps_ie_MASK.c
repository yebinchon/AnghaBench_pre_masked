
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpabuf {int dummy; } ;
struct hostap_driver_data {scalar_t__ wps_ie_len; int * wps_ie; } ;


 int FUNC_0 (struct hostap_driver_data*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct wpabuf const*) ;
 scalar_t__ FUNC_4 (struct wpabuf const*) ;

__attribute__((used)) static int FUNC_5(void *VAR_0, const struct wpabuf *VAR_1,
    const struct wpabuf *VAR_2,
    const struct wpabuf *VAR_3)
{
 struct hostap_driver_data *VAR_4 = VAR_0;







 FUNC_1(VAR_4->wps_ie);
 VAR_4->wps_ie = ((void*)0);
 VAR_4->wps_ie_len = 0;
 if (VAR_2) {
  VAR_4->wps_ie = FUNC_2(FUNC_3(VAR_2),
     FUNC_4(VAR_2));
  if (VAR_4->wps_ie == ((void*)0))
   return -1;
  VAR_4->wps_ie_len = FUNC_4(VAR_2);
 }

 return FUNC_0(VAR_4);
}
